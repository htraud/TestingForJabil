#include <stdio.h>
#include <string.h>

int main(int args, char **argv){
	char *key = argv[1];
	int ikey = (int)*key - '0';
	int len = strlen(argv[2]);
	char *ptr = argv[2];

	printf("String: %s\nCipher Key: %d\n", argv[2], ikey);
	
	for(int i = 0; i < len; i++){
		*ptr = *ptr + ikey;
		printf("%c",*ptr);
		ptr = ptr + 1;
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int shell(){
	printf("You solved!!!\n");
	system("/bin/bash");
	return 0;
}

int main(){
	char buf[256];
	
	printf("Welcome! This is FSB!\n");

	read(0, buf, 256);
	printf(buf);

	exit(0);
}

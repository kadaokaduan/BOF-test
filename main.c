#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 30

int foo(char **s) {
	char string[16]; //buf not set to use SIZE macro
	strcpy(string, *s); //wrong: copy may exceed size of buf
}
/*
*/
void main(int argc, char *argv[]) {
system("color a");
 if(argc < 2) {
 printf("Usage: %s <string>\n", argv[0]);
 exit(0);
 }
 int a = foo(&argv[1]);
}

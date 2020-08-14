#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char name[100];
	printf("Enter Name :");
	scanf("%[^\n]", name);
	printf("\\HelloWorld \"300\"%%/\n");
	printf("Welcome %s :D", name);
	return 0;
}
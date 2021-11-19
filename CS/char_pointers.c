#include<stdio.h>
int main(void)
{
	int x;
	char*st = "Kolkata";
	char str[10] = "Kolkata";
	char*str_array[] = {"India", "Pakistan", "Bhutan", "Nepal", "China"};
	for(x=0; x<5; x++)
		printf("%s \n", str_array[x]);
	printf("%p \n", str);
	printf("%p \n", &str[0]);
}

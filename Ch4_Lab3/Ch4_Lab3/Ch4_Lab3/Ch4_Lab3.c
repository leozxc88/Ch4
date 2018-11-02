#include<stdlib.h>
#include<stdio.h>

void main()
{
	int x = 100;
	int y = add(&x);
	printf("x=%d\n", x);
	system("pause");
}
int add(int * xptr)
{
	(*xptr)++;
	printf("x=%d\n", *xptr);
	return *xptr;
}
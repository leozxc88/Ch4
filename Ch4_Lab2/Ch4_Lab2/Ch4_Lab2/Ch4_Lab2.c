#include<stdlib.h>
#include<stdio.h>

void main()
{
	int x = 100;
	int y = add(x);
	printf("x=%d\n", x);
	system("pause");
}
int add(int x)
{
	x++;
	printf("x=%d\n", x);
	return x;
}
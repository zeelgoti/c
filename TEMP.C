#include <stdio.h>
#include <conio.h>

void main()
{
	int a, b, c;
	clrscr();
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	printf("Enter c: ");
	scanf("%d", &c);

	if(a > b && a > c)
	{
		printf("a is greater");
	}
	else if(b > a && b > c)
	{
		printf("b is greater");
	}
}
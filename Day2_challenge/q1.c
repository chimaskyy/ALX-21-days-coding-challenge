#include <stdio.h>


int add(int x, int y);

int main(void)
{
	int x;
	int y;
	int sum;
	printf("Enter a number: ");
	scanf("%d", &x);
	printf("Enter the second number: ");
	scanf("%d", &y);

	sum = add(x,y);
	printf("Sum of %d and %d is %d\n", x, y, sum);
	
}
int add(int x, int y)
{
	return (x + y);
}

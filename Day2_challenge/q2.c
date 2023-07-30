#include <stdio.h>

void display_line(void);
int main(void)
{
	display_line();
	printf("\n Teach yourself C in 21 days!\n");
	display_line();
	return 0;
}
/* print asterist line */
void display_line(void)
{
	int counter;
	for (counter = 0; counter < 30; counter++)
		printf("*");
}
/* end of program */

/*
a. Line 7 and line 16 contains statement
b. Line 14 contains variable name
c. Line 3 contains function prototype
d. Line 12 contains function definition
e. Line 11 and 18 contains comment.*/

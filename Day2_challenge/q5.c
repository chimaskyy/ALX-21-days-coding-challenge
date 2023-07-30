#include <stdio.h>
#include <string.h>

int main(void)
{
	char buffer[256];

	printf("Enter your name and press <Enter>:\n");
	gets(buffer);

	printf("\nYour name has %d character and spaces!", strlen(buffer));

	return (0);
}
/* This program out the number of character your name has */

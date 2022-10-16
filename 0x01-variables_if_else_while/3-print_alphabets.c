#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)

{
	char i;
	char I;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (I = 'A'; I <= 'Z'; I++)
	{
		putchar(I);
	}
	putchar('\n');
	return (0);
}

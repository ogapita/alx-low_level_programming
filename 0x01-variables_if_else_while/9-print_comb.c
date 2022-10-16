#include <stdio.h>
/**
 * main - entry point of the program
 * Return: 0 for success or non zero for errors
 */
int main(void)

{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n == '9')
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}

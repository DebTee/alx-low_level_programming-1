#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	putchar(a);
	putchar('\n');
	return (0);
}

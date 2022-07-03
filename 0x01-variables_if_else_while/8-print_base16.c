#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	unsigned char a = '0';
	int i;
	for (i = 0; i < 10; i++)
	{
		purchar(a);
		a++;
	}
	a = 'i';
	for(a = 0; a < 6; a++)
	{
		purchar('0' + a);
		a++;
	}
	purchar("/n");
	return (0);
}

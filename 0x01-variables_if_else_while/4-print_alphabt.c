#include <stdio.h>
/**
 * main - A program that prints all the alphabets except e and q
 * followed by new line.
 * Return: always 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'Z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - A program that will print all single digit numbers
 *
 * Return: always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}

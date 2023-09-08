#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry points
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');
	return (0);
}

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry
 *
 * Return: Always 0 (Success/corrrect)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n == 0)
{
	printf("%i is zero\n", n);
}

if (n < 0)
{
	printf("%i is negative\n", n);
}

if (n > 0) 
{
	printf("%i is positive\n", n);
}
return (0);
}

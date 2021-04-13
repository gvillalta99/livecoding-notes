#include <stdio.h>

/**
 * by_value - Access a value
 * @n: integer value
 *
 * Description: Function that access a value
 *
 * Return: new value
 */
int by_value(int n)
{
	printf("n=%d\n", n);
	printf("n address=%p\n", (void *) (&n));

	n = 10;

	printf("n=%d\n", n);
	printf("n address=%p\n", (void *) (&n));

	return (n);
}

/**
 * main - Playground for live coding
 *
 * Description: Playground function for our live coding session
 *
 * Return: Exit status, 0 for success, error otherwise
 */
int main(void)
{
	int d = 5;

	printf("d=%d\n", d);
	printf("d address=%p\n", (void *) (&d));

	by_value(d);

	printf("d=%d\n", d);
	printf("d address=%p\n", (void *) (&d));

	d = by_value(d);

	printf("d=%d\n", d);
	printf("d address=%p\n", (void *) (&d));

	return (0);
}

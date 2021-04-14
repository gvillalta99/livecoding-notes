#include <stdio.h>

/**
 * by_reference - Function call by reference
 * @n: integer pointer
 *
 * Description: Function that access a value
 *
 * Return: nothing
 */
int by_reference(int *n)
{
	printf("n=%p\n", (void *) n);
	printf("n address=%p\n", (void *) (&n));
	printf("n value=%d\n", (*n));

	(*n) = 10;

	printf("n=%p\n", (void *) n);
	printf("n address=%p\n", (void *) (&n));
	printf("n value=%d\n", (*n));

	return 0;
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

	by_reference(&d);

	printf("d=%d\n", d);
	printf("d address=%p\n", (void *) (&d));

	return (0);
}

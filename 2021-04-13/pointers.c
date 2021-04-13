#include <stdio.h>

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
	int *pd = &d;

	printf("d=%d\n", d);
	printf("pd=%p\n", (void *) pd);

	printf("d address=%p\n", (void *) (&d));
	printf("pd address=%p\n", (void *) pd);

	return (0);
}

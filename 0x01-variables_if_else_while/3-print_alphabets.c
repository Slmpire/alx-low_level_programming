#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
<<<<<<< HEAD
	char lowcap;

	for (lowcap = 'a'; low <= 'z'; lowcap++)
		putchar(lowcap);
	for (lowcap = 'A'; low <= 'Z'; lowcap++)
                putchar(lowcap);
	putchar('\n');

=======
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	for (low = 'A'; low <= 'Z'; low++)
	{
		putchar(low);
	}
	putchar('\n');
	
>>>>>>> 634e01c950ab9e28ed7ef20440453c014c6f311b
	return (0);
}

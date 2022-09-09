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
	char lowalf, e, q;

	e= 'e';
	q= 'q';

	for(lowalf='a'; lowalf <= 'z'; lowalf++)
	{
		if(lowalf != e && lowalf != q)
			putchar(lowalf);
=======
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != e && low != q)
			putchar(low);
>>>>>>> 634e01c950ab9e28ed7ef20440453c014c6f311b
	}
	putchar('\n');

	return (0);
}

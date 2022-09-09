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
	char lowalf, e, q;

	e= 'e';
	q= 'q';

	for(lowalf='a'; lowalf <= 'z'; lowalf++)
	{
		if(lowalf != e && lowalf != q)
			putchar(lowalf);
	}
	putchar('\n');

	return (0);
}

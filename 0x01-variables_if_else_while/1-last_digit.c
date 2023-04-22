#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* Description: 'get the last degit of a number'
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;

        }	
	else if (ld == 0)
	{
		printf("last digit of %d id %d and is 0\n", n, ld);
        }	
	else
        {
		 printf("last digit of %d id %d and less than 6 and not 0\n", n, ld);
        }		 
	return (0);

}

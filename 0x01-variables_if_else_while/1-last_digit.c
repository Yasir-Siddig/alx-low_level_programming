#include<stdlib.h>
#include<time.h>
#include<sdtio.h>
/**
*main -entry point
*
*Description: print the value of n status:
*
*Return: 0 (Success)
*
*/
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 5)
	printf("Last digit of %i is %i and is greater than 5\n", n, digit);
	else if (digit == 0)
	printf("Last digit of %i is %i and is greater than 5\n", n, digit);
	else if (digit < 6 && digit != 0)
	printf("Last digit of %i is %i and is greater than 5\n", n, digit);
	return (0);
}

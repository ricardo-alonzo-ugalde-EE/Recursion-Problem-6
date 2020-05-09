/*
Recursive Fiboacci Sequence
F = F_n-1 + F_n-2 if n =>3, 1 Otherwise of n = 1 and 0 if n = 0
*/


#include <stdio.h>

int fibonacci(int i)
{
	if (i == 0)
	{
		return 0;
	}
	if (i == 1)
	{
		return 1;
	}
	return fibonacci(i - 1) + fibonacci(i - 2);
}

int main()
{
	
	int i = 10;
	{
		printf("%d", fibonacci(i));
	}
	
	return 0;
}





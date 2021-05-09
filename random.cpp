#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main_random(void)
{
	//srand(time(NULL)) // initialize random number
	// int num = rand() % 3; // 0 ~ 2
	// if it was int num = rand() % 3 + 1; // it is 1 ~ 3

	printf("Before initialize...\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", rand() % 10);
	}

	srand(time(NULL)); // initialize random number
	printf("\n\nAfter the initialize...\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", rand() % 10);
	}

	return 0;
}
#include <stdio.h>
#include <time.h> // need for random

int main_condition(void)
{
	// Riding bus for example. Define student or adult (adult : age 20)
	//int age = 15;
	// if (condition) {...} else {...}
	/*if (age >= 20) {
		printf("adult.\n");
	}
	else {
		printf("student.\n");
	}*/
	
	// Define Elem (8-13) / Mid (14-16) / High (17-19) student
	// if, else if, else
	/*int age = 25;
	if (age >= 8 && age <= 13)
	{
		printf("Elementary student.\n");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("Middle School student.\n");
	}
	else if (age >= 17 && age <= 19)
	{
		printf("High School student.\n");
	}
	else
	{
		printf("Must be adult.\n");
	}*/

	// break / continue ///////////////////////////////////////////////////////////////////////////
	// #1 to #5 are presenting out of 30 students
	//for (int i = 1; i <= 30; i++)
	//{
	//	if (i >= 6)
	//	{
	//		printf("Rest can go home.\n");
	//		break; // exit the for loop
	//	}
	//	printf("# %d student needs to prepare for presentation.\n", i);
	//}

	// #7 student is sick out of #1 to #30
	// #6 to #10 start the presentation with out #7
	//for (int i = 1; i <= 30; i++)
	//{
	//	if (i >= 6 && i <= 10)
	//	{
	//		if (i == 7)
	//		{
	//			printf("# %d is not here due to sickness.\n", i);
	//			continue; // it will skip next
	//		}
	//		printf("# %d start your presentation.\n", i);
	//	}
	//}

	// && || ///////////////////////////////////////////////////////////////////////////////////////////
	/*int a = 10;
	int b = 10;
	int c = 12;
	int d = 13;
	if (a == b && c == d)
	{
		printf("a and b is same, c and d is also same.\n");
	}
	else
	{
		printf("Nope, it is different.\n");
	}*/


	// Random /////////////////////////////////////////////////////////////////////////////////////////////////
	// Rock = 1; Paper = 2; Scissors =0;
	//srand(time(NULL));
	//int i = rand() % 3; // 0 ~ 2 trans
	//if (i == 0)
	//{
	//	printf("Scissors.\n");
	//}
	//else if (i == 1) 
	//{
	//	printf("Rock.\n");
	//}
	//else if (i == 2)
	//{
	//	printf("Paper.\n");
	//}
	//else
	//{
	//	printf("ERROR..\n");
	//}

	// switch /////////////////////////////////////////////////////////////////////////////////////////////////////////
	//srand(time(NULL));
	//int i = rand() % 3; // 0 ~ 2 trans
	//switch (i)
	//{
	//case 0: printf("Scissors\n");
	//	break; // so it wouldn't go to next case
	//case 1: printf("Rock\n");
	//	break;
	//case 2: printf("Paper\n");
	//	break;
	//default: printf("ERROR\n");
	//}

	
	//int age = 18;
	//switch (age)
	//{
	//case 8:
	//case 9:
	//case 10:
	//case 11:
	//case 12:
	//case 13:printf("Elementary student.\n"); break; // since 8 - 13 is elem. when it hits 13, it will exit the case
	//case 14:
	//case 15:
	//case 16:printf("Middle School student.\n"); break;
	//case 17:
	//case 18:
	//case 19:printf("High School student.\n"); break;
	//default : printf("Not a student.\n");
	//}
	
	// Up and Down /////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//srand(time(NULL));
	//int num = rand() % 100 + 1; // number 1 ~ 100
	//printf("Number: %d\n", num);
	//int answer = 0; // answer
	//int chance = 5; // chances
	//while (chance > 0) // 1 : true, 0 : false
	//{
	//	printf("Number of Chance : %d\n", chance--);
	//	printf("Guess the number 1 ~ 100 : ");
	//	scanf_s("%d", &answer);

	//	if (answer > num)
	//	{
	//		printf("DOWN \n\n");
	//	}
	//	else if (answer < num)
	//	{
	//		printf("UP \n\n");
	//	}
	//	else if (answer == num)
	//	{
	//		printf("Correct!!\n\n");
	//		break;
	//	}
	//	else
	//	{
	//		printf("!!!ERROR!!!\n\n");
	//	}

	//	if (chance == 0)
	//	{
	//		printf("You used all the chances...");
	//		break;
	//	}
	//}


	return 0;

}
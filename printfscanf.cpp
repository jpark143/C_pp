#include <stdio.h>
int main_printfscanf(void)
{
	//whole number
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/

	//decimal number
	/*float f = 46.5;
	printf("%.2f\n", f); //add .2 before f will show 46.50
	double d = 4.428;
	printf("%.2lf\n", d); //add .2 before lf will show 4.43*/
	//int YEAR = 2000;
	//printf("Born in : %d\n", YEAR);
	//YEAR = 2001; can not change after.

	// printf
	// adding
	//int add = 3 + 7; // == 10
	//printf("3 + 7 = %d\n", add);
	//printf("%d X %d = %d\n", 30, 79, 30 * 79); //multiplication

	// scanf
	// take input form user and save it
	//int input;
	//printf("Enter number : ");
	//scanf_s("%d", &input); //& is for taking input
	//printf("input : %d\n", input);

	/*int one, two, three;
	printf("Enter three numbers : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("First number : %d\n", one);
	printf("Second number : %d\n", two);
	printf("Third number : %d\n", three);*/

	// one or more letter
	// one letter
	//char c = 'A';
	//printf("%c\n", c);

	// more letters
	//char str[256]; // making room of 256
	//scanf_s("%s", str, sizeof(str));
	//printf("%s\n", str);

	// Project
	// Police report
	// Name, Age, Height, Weight, Crime
	char fname[256];
	printf("What is your First Name? ");
	scanf_s("%s", fname, sizeof(fname));

	char lname[256];
	printf("What is your Last Name? ");
	scanf_s("%s", lname, sizeof(lname));

	int age;
	printf("What is your age? ");
	scanf_s("%d", &age);

	float weight;
	printf("What is your weight in kg? ");
	scanf_s("%f", &weight);

	double height;
	printf("What is your height in cm? ");
	scanf_s("%lf", &height);

	char what[256];
	printf("What is your crime? ");
	scanf_s("%s", what, sizeof(what));

	// Display the report
	printf("\n\n--- Police Report ---\n\n");
	printf(" Name      : %s\n", fname);
	printf(" Name      : %s\n", lname);
	printf(" Age       : %d\n", age);
	printf(" Weight    : %.2f kg\n", weight);
	printf(" Height    : %.2lf cm\n", height);
	printf(" Crime     : %s\n", what);


	return 0;
}
#include <stdio.h>
int main(void) // Only one main per project
{
	//printf("Hello World\n");

	// ++
	/*int a = 10;
	printf("a = %d\n", a);
	a++;
	printf("a = %d\n", a);*/

	//int b = 20;
	//// b = b + 1 = ++
	//printf("b = %d\n", ++b); // add +1 before finishing the code
	//// outcome = b = 21
	//printf("b = %d\n", b++); // add +1 after finishing the code
	//// outcome = b = 21
	//printf("b = %d\n", b);
	//// outcome = b=22

	//int i = 1;
	//printf("Hello World %d\n", i++); // 1
	//printf("Hello World %d\n", i++); // 2
	//printf("Hello World %d\n", i++); // 3
	//printf("Hello World %d\n", i++);
	//printf("Hello World %d\n", i++);
	//printf("Hello World %d\n", i++);
	//printf("Hello World %d\n", i++);
	//printf("Hello World %d\n", i++);
	//printf("Hello World %d\n", i++);
	//printf("Hello World %d\n", i++); // 10

	// Loop ///////////////////////////////////////////////////////
	// for, while, do while

	// for (declare: condition: fluctuate)
	/*for (int i = 1; i <= 10; i++)
	{
		printf("Hello World %d\n", i);
	}*/

	// while (condition) { }
	//int i = 1; // declare
	//while (i <= 10) // condition
	//{
	//	printf("Hello World %d\n", i++); // fluctuate
	//	// i++; // fluctuate
	//}

	// do while
	// do { } while (condition);
	//int i = 1; // declare
	//do {
	//	printf("Hello World %d\n", i++); // fluctuate
	//} while (i <= 10); // condition


	// Double Loop ////////////////////////////////////////////////
	/*for (int i = 1; i <= 3; i++)
	{
		printf("First Loop : %d\n", i);

		for (int j = 1; j <= 5; j++)
		{
			printf("    Second Loop : %d\n", j);
		}
	}*/

	// Multiplication Table with Double Loop
	// ex: 2 x 1 = 2, 2 x 2 = 4 ...
	/*for (int i = 2; i <= 9; i++)
	{
		printf("Level %d\n", i);
		for (int j = 1; j <= 9; j++)
		{
			printf("  %d X %d = %d\n", i, j, i * j);
		}
	}*/

	/*
	Making pyramid *
	* 
	**
	***
	****
	*****
	*/

	//int row;									// Declare integer variable for number of row
	//printf("How many rows do you want?\n");		// Ask user for input
	//scanf_s("%d", &row);						// Saving users input in variable row
	//for (int i = 0; i < 5; i++)					// Loop for number of rows
	//{
	//	for (int j = 0; j <= i; j++)			// inner loop for stars per each row
	//	{
	//		printf("*");						// Printing stars
	//	}
	//	printf("\n");							// exit j loop and move to next line to make pyramid
	//}

	/*
	Making reflective pyramid *
	    *
	   **
	  ***
	 ****
	*****
	*/
	/*for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5 - 1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	// Building Pyramid Project ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*
	    *
	   ***
	  *****
	 *******
	*********
	*/

	int floor;													// Declare integer variable for number of floor
	printf("How tall do you want to build the Pyramid?\n");		// Ask user for input
	scanf_s("%d", &floor);										// Saving users input in variable floor
	for (int i = 0; i < floor; i++)								// Outer loop for number of floors
	{
		for (int j = i; j < floor; j++)							// Inner loop for printing blank spaces
		{
			printf(" ");										// Printing blank space
		}
		for (int k = 0; k < (i * 2) + 1; k++)					// Inner loop for printing stars
		{
			printf("*");										// Printing stars
		}
		printf("\n");											// Printing newline after each row
	}

	// Upside down Pyramid ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*
	*********
	 *******
	  *****
	   ***
		*
	*/

	//int floor;										// Declare integer variable for number of floor
	//printf("How many floors do you want?\n");		// Ask user for input
	//scanf_s("%d", &floor);							// Saving users input in variable floor
	//for (int i = floor; i > 0; i--)					// Outer loop for number of floors
	//{
	//	for (int j = floor; j > i; j--)				// Inner loop for blank spaces before the Pyramid
	//	{
	//		printf(" ");							// Printing blank space
	//	}
	//	for (int k = 0; k < (i * 2) - 1; k++)		// Inner loop for printing stars
	//	{
	//		printf("*");							// Printing stars
	//	}
	//	printf("\n");								// Printing newline after each row
	//}
	

	// Hollow Pyramid ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*
	    *
	   * *
	  *   *
	 *     *
	*********
	*/

	//int floor;													// Declare integer variable for number of floor/row
	//printf("How tall do you want to build the Pyramid?");		// Ask user for input
	//scanf_s("%d", &floor);										// Saving users input in variable floor
	//for (int i = 0; i < floor; i++)								// Outer loop for number of rows
	//{
	//	for (int j = floor; j > i + 1; j--)						// nested loop for number of blank spaces
	//	{
	//		printf(" ");										// Printing blank space
	//	}
	//	for (int k = 0; k <= (i * 2); k++)						// Inner loop for printing stars
	//	{
	//		if (i == floor - 1)									// condition to print las row
	//		{
	//			printf("*");									// Printing stars in last row
	//		}
	//		else												// else condition to print rest of the stars
	//		{
	//			if (k == 0 || k == (i * 2))						// condition to print stars
	//			{
	//				printf("*");								// Printing stars
	//			}
	//			else											//else condition for printing black space
	//			{
	//				printf(" ");								// Printing blank space
	//			}
	//		}
	//	}
	//	printf("\n");											// Printing newline after each row
	//}

	// Building hollow upside down Pyramid //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*
	*********
	 *     *
	  *   *
	   * *
	    *
	*/

	/*int floor;											// Declare integer variable for number of floor/row
	printf("How tall do you want to build the Pyramid?");	// Ask user for input
	scanf_s("%d", &floor);									// Saving users input in variable floor
	for (int i = floor; i > 0; i--)							// Outer loop for rows
	{
		for (int j = floor; j > i; j--)						// Nested loop for spaces before the Pyramid
		{
			printf(" ");									// Printing blank space
		}
		for (int k = 0; k < (i * 2) - 1; k++)				// Loops for printing stars
		{
			if (i == floor)									// Condition to print first row
			{
				printf("*");								// Printing stars in the first row
			}
			else											// else condition for printing the rest of the Pyramid
			{
				if (k == 0 || k == (i * 2) - 2)				// if condition to print the starting and ending stars in a row
				{
					printf("*");							// Printing stars
				}
				else										// else condition for printing black space
				{
					printf(" ");							// Printing blank space
				}
			}
			
		}
		printf("\n");										// Printing newline after each row
	}*/

	// Square Star ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*
	****
	****
	****
	****
	*/

	/*int row;												// Declare integer variable for number of rows
	printf("How many rows and columns do you want?\n");		// Asking user for input
	scanf_s("%d", &row);									// Saving users input in variable rows
	for (int i = 0; i < row; i++)							// Outer loop for number of rows
	{
		for (int j = 0; j < row; j++)						// Inner loop for number of columns
		{
			printf("*");									// Printing stars in each column
		}
		printf("\n");										// Printing a new line after each row
	}*/


	// Hollow Square Star //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*
	****
	*  *
	*  *
	*  *
	****
	*/

	/*int row;																// Declare integer variable for number of rows
	printf("How many rows and columns do you want?\n");						// Asking user for input
	scanf_s("%d", &row);													// Saving users input in variable rows
	for (int i = 0; i < row; i++)											// Outer loop for number of rows
	{
		for (int j = 0; j < row; j++)										// Inner loop for printing stars in each column of row
		{
			if (i == 0 || i == row - 1 || j == 0 || j == row - 1)			// condition for printing stars
			{
				printf("*");												// Printing stars
			}
			else															// else condition to print blank space
			{
				printf(" ");												// Printing spaces
			}
			
		}
		printf("\n");														// Printing a new line after a each row
	}*/

	
	// Rhombus Star Pattern /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*
	****
	 ****
	  ****
	   ****
	*/

	/*int row;												// Declare integer variable for number of rows
	printf("How many rows and columns do you want?\n");		// Asking user for input
	scanf_s("%d", &row);									// Saving users input in variable rows
	for (int i = 0; i < row; i++)							// Loop controlling number of rows
	{
		for (int j = 0; j < i; j++)							// Inner loop for blank spaces
		{
			printf(" ");									// Printing spaces
		}
		for (int k = 0; k < row; k++)						// Inner loop for printing stars in each row
		{
			printf("*");									// Printing stars
		}
		printf("\n");										// Printing a new line after a each row
	}*/
	
	
	// Rectangle Star Pattern //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*
	********
	********
	********
	********
	*/
	/*int row, column;								// Declare integer variable for number of row and column
	printf("How many rows do you want?\n");			// Asking user for row input
	scanf_s("%d", &row);							// Saving users input
	printf("How many columns do you want?\n");		// Asking user for column input
	scanf_s("%d", &column);							// Saving users input
	for (int i = 0; i < row; i++)					// Outer loop for number of rows
	{
		for (int j = 0; j < column; j++)			// Inner loop for number of columns
		{
			printf("*");							// Printing stars
		}
		printf("\n");								// Printing a new line after a each row
	}*/



	// Half Diamond ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*
	    *
	   **
	  ***
	 ****
	  ***
	   **
	    *
	*/

	//int row;									// Declare integer variable for number of row
	//printf("How many rows do you want?\n");		// Asking user for row input
	//scanf_s("%d", &row);						// Saving users input
	//for (int i = 0; i < row; i++)				// Outer loop for number of rows
	//{
	//	if  (i <= (row / 2))					// if condition to print the top half
	//	{
	//		for (int j = row / 2; j > i; j--)	// Inner loop to print blank spaces
	//		{
	//			printf(" ");					// Printing spaces
	//		}
	//		for (int k = 0; k <= i; k++)		// Inner loop to print stars
	//		{
	//			printf("*");					// Printing stars
	//		}
	//	}
	//	else									// else condition for printing bottom half
	//	{
	//		for (int j = row / 2; j < i; j++)	// Inner loop to print blank spaces
	//		{
	//			printf(" ");					// Printing spaces
	//		}
	//		for (int k = i; k < row; k++)		// Inner loop to print Stars
	//		{
	//			printf("*");					// Printing stars
	//		}
	//	}
	//	printf("\n");							// Printing a new line after a each row
	//}


	// Diamond ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*
		*
	   ***
	  *****
	 *******
	  *****
	   ***
		*
	*/

	//int row;													// Declare integer variable for number of row
	//printf("How many rows do you want?\n");						// Asking user for row input
	//scanf_s("%d", &row);										// Saving users input
	//for (int i = 0; i < row; i++)								// Outer loop for number of rows
	//{
	//	if (i <= row / 2)										// if condition to print the top half
	//	{
	//		for (int j = (row / 2); j > i; j--)					// Inner loop for printing blank spaces
	//		{
	//			printf(" ");									// Printing spaces
	//		}
	//		for (int k = 0; k <= (i * 2); k++)					// Inner loop for printing stars
	//		{
	//			printf("*");									// Printing stars
	//		}
	//	}
	//	else													// else condition to print the bottom half
	//	{
	//		for (int j = (row / 2); j < i; j++)					// Inner loop for printing blank spaces
	//		{
	//			printf(" ");									// Printing spaces
	//		}
	//		for (int k = 0; k < ((row - i) * 2) - 1; k++)		// Inner loop for printing stars
	//		{
	//			printf("*");									// Printing stars
	//		}
	//	}
	//	printf("\n");											// Printing a new line after a each row
	//}

	

	return 0;
}
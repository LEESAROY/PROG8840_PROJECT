#include <stdio.h>

void printWelcomeMenu();
void printOptions();
void add();
void subtract();
void multiply();


void main() {

	printWelcomeMenu();

	printOptions();

	int inputNum;

	printf("Enter operation number: ");
	scanf_s("%d", &inputNum);

	// modified the switch case, added break and default statement
	switch (inputNum)
	{
	case 1:
		add();
		break;
	case 2:
		subtract();
		break;
	case 3:
		multiply();
		break;
	default:
		printf("Invalid option\n");
	}
	return 0;

}

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**   Welcome to the   **\n");
	printf("**   PROG8840 Calculator   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Add\n");
	printf("2. Subtract\n");
	printf("3. Multiply\n");
}

void add() {
	double num1, num2, result;
	printf("Enter the first value:");
	scanf_s("%lf", &num1);
	printf("Enter the second value:");
	scanf_s("%lf", &num2);
	result = num1 + num2;
	printf("%lf + %lf = %lf\n", num1, num2, result);
}

// modified subtract function 
void subtract() {
	double num1, num2, result;
	printf("Enter the first value: ");
	scanf_s("%lf", &num1);
	printf("Enter the second value: ");
	scanf_s("%lf", &num2);
	result = num1 - num2;
	printf("%lf - %lf = %lf\n", num1, num2, result);
}

// modified multiply function 
void multiply() {
	double num1, num2, result;
	printf("Enter the first value: ");
	scanf_s("%lf", &num1);
	printf("Enter the second value: ");
	scanf_s("%lf", &num2);
	result = num1 * num2;
	printf("%lf * %lf = %lf\n", num1, num2, result);
}


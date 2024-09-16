#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char operator;
	float number1, number2;
	printf("Enter operation (+ | - | * | /)\n");
	scanf("%c", &operator);
	printf("Enter first number: ");
	scanf("%f", &number1);
	printf("Enter second number: ");
	scanf("%f", &number2);
	switch (operator) {
		case '+':
			printf("\n%f", number1 + number2);
			break;
		case '-':
			printf("\n%f", number1 - number2);
			break;
		case '*':
			printf("\n%f", number1 * number2);
			break;
		case '/':
			printf("\n%f", number1 / number2);
			break;
	}
	getchar();
	return 0;
}

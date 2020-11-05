#include <stdio.h>

/**
* Simple calculator
*/
int main(){

	float num1;
	float num2;
	float x;
	char operator;
	printf("\nEnter an operator (+,-,/,*): \n");
	scanf("%c",&operator);

	printf("\nEnter two numbers: ");
	scanf("%f",&num1);
	scanf("%f",&num2);

	switch(operator){
		case '+' :
			x = num1 + num2;
			break;
		default:
			printf("Enter a correct operator!");
        case '-':
        printf("%.1lf - %.1lf = %.1lf",num1, num2, num1 - num2);
            break;
        case '*':
        printf("%.1lf * %.1lf = %.1lf",num1, num2, num1 * num2);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf",num1, num2, num1 / num2);
        break;
			return 1;

	}
	printf("\n The result is as follows:\n");
	printf("%f %c %f = %f",num1, op ,num2,x);
	return 0;
}

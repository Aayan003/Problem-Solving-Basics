//calculating the output as per user's choice of operation

#include <stdio.h>

int main()

{

int num1, num2,  num3;

float i, i2;

char ch, ch2,c;

	 printf("\nThe math functions you can use are following-\n'+' means addition,\n'-' means substraction,\n'*' means multiplication,\n'/' means division.\n");

	 printf("\nEnter your input this way- 'number1(function)number2-\n");

	 scanf("%d", &num1);

	 scanf("%c", &ch);

	 scanf("%d", &num2);

	 switch(ch)

	 {

	  case '+' : i = num1 + num2;

	  printf("\nThe sum of %d and %d is ", num1, num2);

	  break;

	  case '-' : i = num1 - num2;

	  printf("\nThe substraction of %d and %d is ", num1, num2);

	  break;

	  case '*' : i = num1 * num2;

	  printf("\nThe multiplication of %d and %d is ", num1, num2);

	  break;

	  case '/' : i = num1 / num2;

	  printf("\nThe division of %d and %d is ", num1, num2);

	  break;

	  default : printf("\nInvalid Input.\n");

	 }

	 printf("\n\n%.9f\n\n", i);

	 printf("\nThe math functions you can use are following-\n'+' means addition,\n'-' means substraction,\n'*' means multiplication,\n'/' means division.\n");

	 printf("\nEnter your input this way- '(function)number3-\n");

	 do

	 {

	 scanf("\n%c", &ch);

	 scanf("%d", &num3);

	 switch(ch)

	 {

	  case '+' : i = i + num3;

	  break;

	  case '-' : i = i - num3;

	  break;

	  case '*' : i = i * num3;

	  break;

	  case '/' : i = i / num3;

	  break;

	  default : printf("\nInvalid Input.\n");

	 }

	 printf("\n\n%.9f\n\n", i);

	 printf("\nDo you want to run the program again?\nIf yes then input Y else input N\n");

	 scanf("\n%c", &ch2);

	}while(ch2 == 'Y' || ch2 == 'y');

	return 0;

}

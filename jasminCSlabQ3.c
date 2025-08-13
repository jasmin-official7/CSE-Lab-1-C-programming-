#include <stdio.h>
int main()
{
int num1, num2, diff;
printf("Enter first number: ");
scanf("%d", &num1);
printf("Enter second number:");
scanf("%d", &num2);
diff = num1 - num2;
printf("diff=%.2d\n", diff);
return 0;
}
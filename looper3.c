#include <stdio.h>

int main()
{
    int num, first, last;

    printf("Enter a number: ");
    scanf("%d", &num);  //213

    last = num % 10;  

    while (num >= 10)  
    {
        num = num / 10;   //2
    }

    first = num;   

    printf("First Digit = %d\n", first);
    printf("Last Digit = %d\n", last);
    printf("Sum of First and Last Digit = %d", first + last);

    return 0;
}
	

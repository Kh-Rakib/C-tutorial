#include <stdio.h>
int main()
{
    int number;

    // printf() dislpays the formatted output
    printf("Enter an integer: ");

    // scanf() reads the formatted input and stores them
    scanf("%d", &number);

    // printf() displays the formatted output
    printf("\nYou entered: %d\n", number);
    return 0;
}

#include <stdio.h>
void menu()
{
    printf("\n********Calculater**********\n");
    printf("\n1: Add");
    printf("\n2: Substract");
    printf("\n3: Multiple");
    printf("\n4: Divide");
    printf("\n5: Modlus");
    printf("\n6: Power");
    printf("\n7:Exit\n");
    printf("Enter your choice (1 to 7) : ");
}
int main()
{
    float result;
    int a, b,choice;
    while (1)
    {
        menu();
        scanf("%d", &choice);
        if (choice == 7)
        {
            break;
        }
        printf("Enter first number : ");
        scanf("%d", &a);
        printf("Enter secound number : ");
        scanf("%d", &b);
        switch (choice)
        {
        case 1:
            result = a + b;
            printf("Your Result is %.2f\n\n", result);
            break;
        case 2:
            result = a - b;
            printf("Your Result is %.2f\n\n", result);
            break;
        case 3:
            result = a * b;
            printf("Your Result is %.2f\n\n", result);
            break;
        case 4:
            result = a / b;
            printf("Your Result is %.2f\n\n", result);
            break;
        case 5:
            result = a % b;
            printf("Your Result is %d\n\n", result);// modified
            break;
        default:
            printf("Please enter corret input");
            break;
        }
    }
}

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number : ");
    printf("1.Pizza,Rs239\n");
    printf("2.Burger,Rs129\n");
    printf("3.Pasta,Rs179\n");
    printf("4.French Fries, Rs 99\n");
    printf("5.Sandwich, Rs 149\n");
    scanf("%d",&a);
    printf("\n");
    switch(a)
    {
        case 1:
        printf("Food item - Pizza\n");
        printf("\n");
        printf("Price - Rs 239");
        break;
        case 2:
        printf("Food item - Burger\n");
        printf("\n");
        printf("Price - Rs 129");
        break;
        case 3:
        printf("Food item - Pasta\n");
        printf("\n");
        printf("Price - Rs 179");
        break;
        case 4:
        printf("Food item - French Fries\n");
        printf("\n");
        printf("Price - Rs 99");
        break;
        case 5:
        printf("Food item - Sandwich\n");
        printf("\n");
        printf("Price - Rs 149");
        break;
        default : printf("Invalid choice");
        
    }
    
    return 0;
}

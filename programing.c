//create a calculator using c language.
//start with peprocessing activities.
#include <stdio.h>
int main()
{
    printf("------------------menu--------------------\n");
    printf("1.ADDITION\n");
    printf("2.subtraction\n");
    printf("3.multiplication\n");
    printf("4.divide\n");
    int choice,a,b;
    printf("enter the choice = ");
    scanf("%d",&choice);
    printf("enter the val of a = ");
    scanf("%d",&a);
    printf("enter the val of b = ");
    scanf("%d",&b);
    switch (choice){
        case 1:
        printf("\naddition = %d\n",a+b);
        break;
        case 2:
        printf("subtraction = %d\n",a-b);
        break;
        case 3:
        printf("multiply = %d\n",a*b);
        break;
        case 4:
        printf("divide = %d\n",a/b);
        break;
        default:
        printf("choose from 1 to 4\n");
        break;
    }
    printf("-------------------------best of luck---------------------");
    return 0;
}

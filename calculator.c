#include<stdio.h>
int main(){
    int num1, num2, choice, add, sub, multi;
    float div,numm1,numm2;

    printf("-----Calculator-----\n");
    printf("1: Addition\n");
    printf("2: Subtraction\n");
    printf("3: Multiplication\n");
    printf("4: Division\n");
    printf("5: exit\n");

    printf("---Enter your choice---\n");
    scanf("%d", &choice);
    
    switch(choice){

        case 1:
            printf("Enter you first number: ");
            scanf("%d", &num1);
            printf("\nEnter you second number: ");
            scanf("%d", &num2);
            add=num1+num2;
            printf("Result: %d",add);
        break;

        case 2:
            printf("\n Enter you first number: ");
            scanf("%d", &num1);
            printf("\nEnter you second number: ");
            scanf("%d", &num2);
            sub=num1-num2;
            printf("Result: %d",sub);
        break;

        case 3:
            printf("\n Enter you first number: ");
            scanf("%d", &num1);
            printf("\nEnter you second number: ");
            scanf("%d", &num2);
            multi=num1*num2;
            printf("Result: %d",multi);
        break;

        case 4:
            printf("\n Enter you first number: ");
            scanf("%f", &numm1);
            printf("\nEnter you second number: ");
            scanf("%f", &numm2);
            div = numm1/numm2;
            printf("Result: %f",div);
        break;

        case 5:
            printf("Exiting Calculatio");
        break;
        
        default:
            printf("Invalid choice");
    }
    return 0;
}
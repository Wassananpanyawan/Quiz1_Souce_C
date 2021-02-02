#include<stdio.h>

void main(){

    system("cls");

    int num1, num2, choose_option,Triangulararea,result_fac;

    do{
        printf("Choose Your Option\n");
        printf("1. Multtiplication\n2. Calculate Triangular area\n3. Clalculate factorial\n4. Exit\n");
        scanf("%d",&choose_option);


        if(choose_option == 4)
                break;
        
        switch (choose_option)
        {
        case 1:
            printf("Enter num1: "); scanf("%d",&num1);
            printf("Enter num2: "); scanf("%d",&num2);
            printf("Sum of %d x %d = %d\n",num1, num2, num1*num2);
            break;
        case 2:
            printf("Enter num1: "); scanf("%d",&num1);
            printf("Enter num2: "); scanf("%d",&num2);
            Triangulararea = 0.5*num1*num2
            printf("Calculate Triangular area = %d\n",Triangulararea);
            break;
        case 3:
            printf("Enter number of factorial: "); scanf("%d",&num1);
            result_fac = factorial(num1);
            printf("Factorail of the number(%d) = %d ",num1, result_fac);
            break;
        }while(choose_option != 4);
}
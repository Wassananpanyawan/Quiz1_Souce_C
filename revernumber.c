#include<stdio.h>  /* นางสาววาสนา ปัญญาวรร์, Reverse number  */ 

void main(){
    system("cls");
     
    int  number , reverse ;
    printf("Enter number to reverse :");
    scanf("%d",&number);

    reverse = 0;
    while (reverse != number ){

        printf("%d",number);
        number--;
      
    }
}
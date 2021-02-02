#include<stdio.h>  /* นางสาววาสนา ปัญญาวรร์, ดัชนีมวลกาย */ 

void main(){
        float  h,w,bmi,hight ;
        printf("Find BMI\n");
        printf("Enter number to Hight :");
        scanf("%f",&h);
        printf("Enter number to Weig ht :");
        scanf("%f",&w);
        hight = h/100;
        bmi = w/(hight*hight);
        printf("BMI is :  %2.f\n",bmi);
        if (bmi >= 30 ){
            printf("Fat\n");
        }else if (bmi >= 25){
            printf("Exceed standrd\n");
        }else if ( bmi >= 20){
            printf("Good health\n");
        }else {
             printf("Below the threshold\n");
        }

        
}

    
#include<stdio.h>

int main()
{

    int i,j,k;

    int NUM[10];
     printf("enter the number:");
     for(i = 0; i<10 ; i++){
     scanf("%d",&NUM[i]);
     }

    int ODD[10];
    int EVEN[10];


    j = 0;
    k = 0;

    for(i = 0; i<10 ; i++){

        if(NUM[i]%2 == 0){
            EVEN[j] = NUM[i];
            j++;
        }else{
            ODD[k] = NUM[i];
            k++;
        }
    }
    printf("Even numbers : ");
    for(i = 0;i<j; i++){
        printf("%d ",EVEN[i]);
    }

    printf("\n Odd numbers : ");
    for(i = 0;i<k; i++){
        printf("%d ",ODD[i]);
    }

    printf("\n");
}

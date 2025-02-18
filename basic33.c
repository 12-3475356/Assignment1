


//Scenario 3: Payment Gateway Simulation

#include<stdio.h>
#include<stdlib.h>

void card(){
    int n=12,arr[100],count=0;
    printf("Enter the 12 digit number\n");
    for(int i=0;i<n;i++){
         scanf("%d",&arr[i]);
         count++;
    }
    if(count==12){
    printf("payment successfull\n");
    }else{ printf("Enter valid num\n");}

}
void  UPI(){
    printf("Enter valid upi id\n");
    printf("payment successfull\n");


}
void netbanking(){
    printf("select the bank\n1)SBI\n2)HDFC\n");


}

void main(){
    int choice;
    while(1){
        printf("\n\nEnter the payment method\n1)credit/debit card\n2)UPI\n3)Net-Banking\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:card();
            break;
            case 2: UPI();
            break;
            case 3:netbanking();
            break;
            default:printf("invalid payment method\n"); exit(0);
            break;
        }
    }
}
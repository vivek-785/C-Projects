// Bank program 
#include <stdio.h>

void fbalance(float balance);
float fdeposit(float balance);
float fwithdraw(float balance);

int main(){
  float balance = 0;
  float withdraw = 0;
  float deposit = 0;
  int choise = 0;
  printf("Welcome in bank\n");
  do{
    printf("Enter a choise:\n");
    printf("1 - check balance\n");
    printf("2 - dopist\n");
    printf("3 - windraw\n");
    printf("4 - exit\n");
    scanf("%d",&choise);
    switch (choise){
      case 1:
        fbalance(balance);
        break;
      case 2:
        balance = fdeposit(balance);
        break;
      case 3:
        balance = fwithdraw(balance);
        break;
      default:
        printf("Please enter a valid choise\n");
    }
  }while(choise != 4);
  printf("Thank you for using the Bank");
  return 0;
}

void fbalance(float balance){
  printf("Your balance is:$%.2f\n",balance);
}

float fwithdraw(float balance){
  float withdraw = 0;
  printf("Enter the amount to withdraw:$");
  scanf("%f",&withdraw);
  if(withdraw >= balance){
    printf("Insufficient balance\n");
    printf("Your balance is:$%.2f\n",balance);
  }
  else{
    printf("Successfully withdraw $%.2f\n",withdraw);
    balance -= withdraw;
  }
  return balance;
}
float fdeposit(float balance){
  float deposit = 0;
  printf("Enter the amount to depoist:$");
  scanf("%f",&deposit);
  if(deposit <= 0){
    printf("Please enter a valid amount\n");
  }
  else{
    printf("Successfully deposited $%.2f\n",deposit);
    balance += deposit;
  }
  return balance;
}

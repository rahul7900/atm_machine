#include<stdio.h>
#include<windows.h>
#include<time.h>


int main(){
    system("color 3F");
    int pin=1234,option,enteredPin,count = 0 , amount = 1;
    float balance = 5000;
    int continueTransaction = 1;

    time_t now;
    time(&now);
    printf("\n");
    printf("\t\t\t\t\t\t       %s",ctime(&now));
    printf("\n\t\t\t\t================*Welcome to SBI ATM*================\n");
    while(pin != enteredPin){
        printf("Enter your pin please: \n");
        scanf("%d",&enteredPin);
        if(enteredPin != pin){
            Beep(610,500);
            printf("You have entered the worng pin \n");

        }
        count ++;
        if(count == 1 && pin != enteredPin){
            printf("You have 2 maore chance to enter the correct pin or your account will be blocked\n");
        }
        if(count == 2 && pin != enteredPin){
           printf("You have 1 maore chance to enter the correct pin or your account will be blocked\n");
           }

        if(count == 3 && pin != enteredPin){
            printf("Your account has been blocked\n");
            exit(0);
        }
        }

        while (continueTransaction != 0)
        {
                    printf("\n\t\t\t\t================*Avilable Transactions*================\n");
        printf("\n\n\t\t1.Withdrawl");
        printf("\n\t\t2.Deposit");
        printf("\n\t\t3.Check Balance");
        printf("\n\n\tPlease select the option: ");
        scanf("\t\t\t\t%d",&option);
        switch(option){
            case 1 :
                while(amount % 500 !=0){
                    printf("\n\t\tEnter the amount in multiple of 500: ");
                    scanf("%d",&amount);
                    if(amount % 500 != 0){
                        printf("\n\t The amount should be in multiple of 500");
                    }
                }
                if(balance < amount){
                    printf("\n\t Sorry insufficient balance");
                    amount = 1;
                    break;

                }
                else{
                    balance -= amount;
                    printf("\n\t\t You have withdrawn Rs.%d. Your new balance is %.2f",amount,balance);
                    amount = 1;
                    break;
                }
            case 2:
            printf("\n\t\t Please Enter the amount you want to deposit: ");
            scanf("%d",&amount);
            printf("\n\t\t\t Please place the cash at deposit area at your left");
            balance += amount;
           
            printf("\n\t\t\tYou have deposited Rs.%d. You updated balance is Rs.%.2f",amount,balance);
            printf("\n\t\t\t\t================*Thankyou for banking with us*================\n");
            amount = 1;
            break;
            case 3:
            printf("\n\t\tYour balance is RS.%.2f",balance);
            break;
            default:
            Beep(610,500);
            printf("\n\t\t Invalid Option!!!");

              }
              printf("\n\t\tDo you wish to perform another transaction? Press 1[YES], 0[NO]");
              scanf("%d",&continueTransaction);
        }
        

        
    
   




return 0;
}
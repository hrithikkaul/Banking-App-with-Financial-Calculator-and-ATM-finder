#include<stdio.h>
void main()
{
    int ch,ch1;
system("clear");
printf("-------------Welcome to ABC Bank-----------\n");
printf("Banking, financial calculators and Nearest ATM locator at one place\n");
printf("\n\n\n");
printf("Press 1 for Banking Services\n");
printf("Press 2 for Financial calculators\n");
printf("Press 3 for Nearest ATM locator");
printf("\n Enter your choice: ");
scanf("%d",&ch);
switch(ch)
{
    case 1:
    system("clear");
    printf("Please wait, loading....");
    system("gcc banking.c -o bank && ./bank");
    break;
    case 2:
    system("clear");
    printf("Please wait, loading...");
    system("gcc fin_calc.c -o f && ./f");
    break;
    case 3:
    system("clear");
    printf("please wait, loading...");
    system("gcc atm-finder.c -o a && ./a");
}
printf("Press 1 to use the services again\n Press 2 to exit\n");
printf("Enter Choice; ");
scanf("%d",&ch1);
if(ch1==1)
main();
else
return;
}
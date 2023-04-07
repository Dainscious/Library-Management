//A simple program for library management.
#include <stdio.h>
#define MAX 500
struct member
{
char Regno[20];
char Name[50];
char PhoneNo[20];
char Address[30];
};

void greeting(){
printf("Hello! welcome to Malimali public library.\n");
}
int main()
{
greeting();
int array[MAX],regfee,bk1,bk2,i,code1,code2,period,ch,amount,borrowed=0;
do{
printf("1 Register:\n");
printf("2 Make monthly payment:\n");
printf("3 borrow books: \n");
printf("4 Return book:\n");
printf("5 Check penalty delayed return of book:\n");
printf("6 Check maximum number of books you can borrow:\n");
printf("7 Exit:\n");
printf("Enter your choice: \n");
scanf("%d",&ch);
switch (ch)
{
case 1:
struct member stu;
{
printf("Enter Registration Number:\n");
scanf("%s",stu.Regno);
printf("Name:\n");
scanf("%s",stu.Name);
printf("Phone Number:\n");
scanf("%s",stu.PhoneNo);
printf("Address:\n");
scanf("%s",stu.Address);
printf("Registration fee is Ksh. 20.\n Enter registration fee:\n");
scanf("%d",&regfee);
if (regfee<20){
printf("Low amount than the registration fee.\n Registration fee is Ksh. 20.\n");
}
else if(regfee>20){
printf("High amount than the registration fee.\nRegistration fee is Ksh. 20.\n");
}
else{
printf("Congratulations!\n");
printf("You have been registered succefully!\n");
}
}
break;
case 2:
struct member stud;
{
printf("Enter your details :\n");
printf("Registration Number:\n");
scanf("%s",stu.Regno);
printf("Name:\n");
scanf("%s",stu.Name);
printf("Phone Number:\n");
scanf("%s",stu.PhoneNo);
printf("Address:\n");
scanf("%s",stu.Address);
printf("Monthly payment is ksh.10:\n");
printf("Enter amount:\n");
scanf("%d",&amount);
if ((amount<10)||(amount>10)){
printf("Try again later!\n");
printf("The amount must be ksh. 10:\n");}
else{
printf("Your payment successful!\n");
}
}
break;
case 3:
printf("Please enter the number of books to borrow:\n");
scanf("%d",&bk1);
if(bk1>3){
printf("Maximum number of books to borrow is three!\n");
}
else{
for(i=0;i<bk1;i++){
printf("Enter the code of the books:\n");
scanf("%d",&code1);}
printf("\n");
borrowed+=bk1;
printf("You've borrowed %d books successfully.",borrowed);
}
break;
case 4:
if (borrowed==0){
printf("You have no record of borrowed books!\n");
}
else{
printf("You have %d borrowed book(s).\n",borrowed);
printf("Enter the number of books to return:\n");
scanf("%d",&bk2);
if((bk1<bk2)||(bk1>bk2)){
printf("The number of books to return should match the number of books borrowed!\n");
}
else{
for(i=1;i<=bk2;i++){
printf("Enter the codes of the books:\n");
scanf("%d",&code2);
}
if(code1!=code2){
printf("Enter the right code\n");
}
else{
printf("Please wait as we process your request!\n");
}
}
}
break;
case 5:
printf("Enter the delayed period:\n");
scanf("%d",&period);
printf("Penalty:%d",5*period);
break;
case 6:
printf("The maximum number of books to be borrowed is THREE!\n");
break;
case 7:
printf("Thank you and welcome again!\n");
break;
default:
printf("Invalid choice!\n");
}
}
while(ch!=7);
}




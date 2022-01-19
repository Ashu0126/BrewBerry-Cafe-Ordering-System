#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct customer
{
char name[50], add[30];
char pno[50];
}cr;
int f;
int p;
int x=0;
int q;
int total;
void m();                      //fn for main menu
void close();                  //fn for closing panel
void bill();                   //fn for printing bill
void menu();                   //fn for food menu
void login();                  //fn for login
void breakfast();              //fn for breakfast's menu
void lunch();                  //fn for lunch's menu
void dinner();                 //fn for dinner's menu
void cancel();                 //fn for cancelling the order
void details();                //fn for details
void checkout();               //fn for checkout
void main()
{

int choice;
printf("\n\n\n\n\n\n\n\n\n\n\n\n********************************************************************************");
printf("\n________________________________________________________________________________");
printf("\n\n                                 BREWBERRY CAFE\n");
printf("\n________________________________________________________________________________");
printf("\n\n********************************************************************************");
printf("\n\n\n\n\n\n\n\n                              Press Any Key To Start");
getche();
login();
}
    void m()
    {   int choice;
	system("cls");
	printf("\n************************************************\n");
	printf("               WECLCOME TO BREW BERRY    ");
	printf("\n************************************************\n");
	printf("\n1).  Book A Order");
	printf("\n2).  View All Available Order");
	printf("\n3).  Cancel Order");
	printf("\n4).  Exit");
	printf("\n\nYour Input: ");
	scanf("\n%d",&choice);
	switch(choice)
	{
	    case 1:
	    details();
	    break;
	    case 2:
	    menu();
	    break;
	    case 3:
	    cancel();
	    break;
	    case 4:
	    exit(0);
	    break;
	    }
	    }
void menu()
{
int i;
clrscr();
printf("\nChoose Your Meal\n");
printf("Press 1 Breakfast\n");
printf("Press 2 Lunch\n");
printf("Press 3 Dinner\n");
scanf("\n%d",&i);
switch(i)
{
case 1:clrscr();
breakfast();
break;
case 2:clrscr();
lunch();
break;
case 3:clrscr();
dinner();
break;
}
}
void breakfast()
{
printf("                                       BREAKFAST");
printf("\n********************************************************************************");
printf("\n|Sno.|Name            |Type   |Price|");
printf("\n| 1. |Aloo Paratha    |veg    | 60  |");
printf("\n| 2. |Paneer Paratha  |veg    | 70  |");
printf("\n| 3. |Onion Paratha   |veg    | 60  |");
printf("\n| 4. |Mushroom Paratha|veg    | 70  |");
printf("\n| 5. |Cholle Bhature  |veg    | 100 |");
printf("\n| 6. |Sandwich        |veg    | 50  |");
printf("\n| 7. |Samosa          |veg    | 30  |");
printf("\n| 8. |Bread Pakoda    |veg    | 40  |");
printf("\n| 9. |Masala Chai     |veg    | 25  |");
printf("\n| 10.|Bread omlette   |non veg| 20  |");
printf("\n| 11.|Egg Roll        |non veg| 20  |");
printf("\n********************************************************************************");
scanf("%d",&f);
switch(f)
{
case 1 :
printf("\n| 1. |Aloo Paratha    |veg    | 60  |");
p=60;
break;
case 2:
printf("\n| 2. |Paneer Paratha  |veg    | 70  |");
p=70;
break;
case 3:
printf("\n| 3. |Onion Paratha   |veg    | 60  |");
p=60;
break;
case 4:
printf("\n| 4. |Mushroom Paratha|veg    | 70  |");
p=70;
break;
case 5:
printf("\n| 5. |Cholle Bhature  |veg    | 100 |");
p=100;
break;
case 6:
printf("\n| 6. |Sandwich        |veg    | 50  |");
p=50;
break;
case 7:
printf("\n| 7. |Samosa          |veg    | 30  |");
p=30;
break;
case 8:
printf("\n| 8. |Bread Pakoda    |veg    | 40  |");
p=40;
break;
case 9:
printf("\n| 9. |Masala Chai     |veg    | 25  |");
p=25;
break;
case 10:
printf("\n| 10.|Bread omlette   |non veg| 20  |");
p=20;
break;
case 11:
printf("\n| 11.|Egg Roll        |non veg| 30  |");
p=30;
break;
}
checkout();
}
void lunch()
{
printf("                                           LUNCH");
printf("\n********************************************************************************");
printf("\n|Sno.|Name          |Type     |Price|");
printf("\n| 1. |Dal Makhni    |veg      | 60  |");
printf("\n| 2. |shahi paneer  |veg      | 70  |");
printf("\n| 3. |Chana Masala  |veg      | 60  |");
printf("\n| 4. |Dum Aloo      |veg      | 70  |");
printf("\n| 5. |Butter Chicken|non-veg  | 100 |");
printf("\n| 6. |Fish Curry    |non-veg  | 50  |");
printf("\n| 7. |Tandoori roti |veg      | 30  |");
printf("\n| 8. |Naan          |veg      | 40  |");
printf("\n| 9. |Lacha Paratha |veg      | 25  |");
printf("\n********************************************************************************");
scanf("\n%d",&f);
switch(f)
{
case 1:
printf("\n| 1. |Dal Makhni    |veg      | 60  |");
p=60;
break;
case 2:
printf("\n| 2. |shahi paneer  |veg      | 70  |");
p=70;
break;
case 3:
printf("\n| 3. |Chana Masala  |veg      | 60  |");
p=60;
break;
case 4:
printf("\n| 4. |Dum Aloo      |veg      | 70  |");
p=70;
break;
case 5:
printf("\n| 5. |Butter Chicken|non-veg  | 100 |");
p=100;
break;
case 6:
printf("\n| 6. |Fish Curry    |non-veg  | 50  |");
p=50;
break;
case 7:
printf("\n| 7. |Tandoori roti |veg      | 30  |");
p=30;
break;
case 8:
printf("\n| 8. |Naan          |veg      | 40  |");
p=40;
break;
case 9:
printf("\n| 9. |Lacha Paratha |veg      | 25  |");
p=25;
break;
}

checkout();
}
void dinner()
{
printf("                                      DINNER");
printf("\n********************************************************************************");
printf("\n|Sno.|Name          |Type     |Price|");
printf("\n| 1. |Dal Makhni    |veg      | 60  |");
printf("\n| 2. |Shahi paneer  |veg      | 70  |");
printf("\n| 3. |Chana Masala  |veg      | 60  |");
printf("\n| 4. |Dum Aloo      |veg      | 70  |");
printf("\n| 5. |Butter Chicken|non-veg  | 100 |");
printf("\n| 6. |Fish Curry    |non-veg  | 50  |");
printf("\n| 7. |Tandoori roti |veg      | 30  |");
printf("\n| 8. |Naan          |veg      | 40  |");
printf("\n| 9. |Lacha Paratha |veg      | 25  |");
printf("\n********************************************************************************");
scanf("\n%d",&f);
switch(f)
{
case 1:
printf("\n| 1. |Dal Makhni    |veg      | 60  |");
p=60;
break;
case 2:
printf("\n| 2. |shahi paneer  |veg      | 70  |");
p=70;
break;
case 3:
printf("\n| 3. |Chana Masala  |veg      | 60  |");
p=60;
break;
case 4:
printf("\n| 4. |Dum Aloo      |veg      | 70  |");
p=70;
break;
case 5:
printf("\n| 5. |Butter Chicken|non-veg  | 100 |");
p=100;
break;
case 6:
printf("\n| 6. |Fish Curry    |non-veg  | 50  |");
p=50;
break;
case 7:
printf("\n| 7. |Tandoori roti |veg      | 30  |");
p=30;
break;
case 8:
printf("\n| 8. |Naan          |veg      | 40  |");
p=40;
break;
case 9:
printf("\n| 9. |Lacha Paratha |veg      | 25  |");
p=25;
break;
}

checkout();
}
void login()
{
	int a=0,i=0;
	char uname[10],c=' ';
	char pword[10],code[10];
	char user[10]="brewberry";
	char pass[10]="cafe";
	clrscr();
	do
	{
	printf("\n\n  *****LOGIN*****\n  ");
    printf(" \n  ENTER USERNAME: ");
	scanf("%s", &uname);
	printf(" \n  ENTER PASSWORD: ");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
    i=0;
	if(strcmp(uname,user)==0 && strcmp(pword,pass)==0)
	{
	printf("  \n\n\n YOUR LOGIN IS SUCCESSFUL");
	printf("\n\n\n\t\t\t\tPress Any Key To Continue...");
	getch();
	break;
	}
	else
	{
		printf("\nSORRRRYYY... LOGIN IS UNSUCESSFUL\n");
		a++;
		getch();
	}
}
	while(a<=2);
	if (a>2)
	{
	printf("\n\nSorry you have entered the wrong username and password");
	getche();
	exit(0);
    }
   m();
}
void cancel()
{
    char yorder[40];
	printf("-----------------------\n");
	printf("Enter Your Name: \n");
	printf("-----------------------\n");
	fflush(stdin);
	scanf("%s",&yorder);
	printf("\n\nCancelled");
	getch();
}
void details()
	{
		char confirm;
		float charges;
		clrscr();
		printf("\nEnter your name : ");
		fflush(stdin);
		gets(cr.name);
		printf("\nAddress : ");
		scanf("%s",cr.add);
		printf("\nphone number : ");
		scanf("%s",&cr.pno);
		printf("\n\n Press Enter To View Food Items.... ! ");
		getche();
		menu();
		getch();
    }
void checkout()
{
	int a,m,n,j;
printf("\nQuantity: ");
scanf("%d",&q);
total=p*q;
x=x+total;
printf("\nCost %d",total);
printf("\nWanna Order More Food Items ? (y/n) ");
printf("\nPress 1 For Yes Or 0 For no:  ");
scanf("\n%d",&a);
switch(a)
{
	case 1:
	clrscr();
    menu();
	break;
	case 0:
	clrscr();
    bill();
	break;
	default:
	printf("\n invalid choice");
	checkout();
	break;
}
}
void bill()
{
int a;
printf("\n********************************************************************************");
printf("                          ^^^YOUR STOMACH BILL^^^   ");
printf("\n********************************************************************************");
printf("\n\nName: %s",cr.name);
printf("\nAddress: %s",cr.add);
printf("\nMobile Number: %s",cr.pno);
printf("\nTotal Bill: %d",x);
close();
}
void close()
{int b;
printf("\n                   ********************************************");
printf("\n                      Thank You For Visiting The BREWBERRY");
printf("\n                   ********************************************");
printf("\nDo You Want to Go To Main Menu\nPress 1 for yes\nPress 0 for no");
scanf("\n%d",&b);
switch(b)
{
case 1:
m();
break;
case 0:
exit(0);
}
}

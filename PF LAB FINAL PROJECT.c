 #include<stdio.h>
#include<stdlib.h>
void starter(); // function declaration
void main() //main body
{
	starter();	//function calling
}

 void starter() //function body
{
	char Name[100]=(" ROYAL DINE \n\t\t\tLOCATED AT THE PERFECT PLACE FOR A PERFECT VACATION");
	char full_name[100],full_address[30],Room[20]=("Guest-Rooms"),Din[20]=("Dinner-Reservations");
	char ch;
	int age;
	
	printf("\t\t\t\t\t %s",Name);
	printf("\n==================================================================================================");
	printf("\n\t\t\tWE WELCOME YOU TO EXPERIENCE PASSION OF HOSPITALITY");
	printf("\n\nIn order to experience services ,Register yourself first: ");
	
	printf("\n\n1)Enter Your Name: ");
    gets(full_name); 
	printf("\n\tYour Name is : ");
	puts(full_name);
 
	printf("\n2)Enter Your age: ");
	scanf("%d", &age);
	printf("\n\tYour age is: %d",age);
	
	printf("\n==================================================================================================");
	printf("\n\t\t\t\t\tWelcome %s",full_name);

    do
  {	
	printf("\n~~From following choices you can book for: \n\t1:%s \n\t2:%s ",Room,Din);
    char* packages_Rooms[] = {"1)-Single Bed", "2)-Double Bed"};	
	int i,choice,selection_Rooms,selection_Dinner,RP1=1000,RP2=2000;
	

	printf("\n==================================================================================================");
	printf("\n~~Make selection from the below given menu:\n1:%s \n2:%s ",Room,Din);	
	printf("\n==================================================================================================");
	printf("\n ->To select just press that number:  ");
	scanf("%d",&choice);
	printf("\n==================================================================================================");

    switch(choice)
    {
    	case 1:
    	printf("\n\t\t\t\t\tGUEST ROOMS\n**Here are some room packages you can choose from: ");
    	break;
        case 2:
        printf("\n\t\t\tDINNER RESERVATIONS\n**Here are some Dinner facilities you can choose:");
    	break;	 	 
        default :
    	printf("\n\n\tNo Service Available");
	}
	
	if(choice==1)
	{		
     for (i=0;i<2;i++)
   {
    printf("\n%s",packages_Rooms[i]);
	}
   	  if(choice==1)
	{
		printf("\n\nThe prices for the available packages are: ");
		printf("\n\t%s Price is : %dPKR",packages_Rooms[0],RP1);
		printf("\n\t%s Price is : %dPKR",packages_Rooms[1],RP2);
	}
	
	printf("\n==================================================================================================");
	printf("\t\nTo make the selcection, just press that number:   ");
	scanf("%d",&selection_Rooms);
	
	switch(selection_Rooms)
    {
    	case 1:
    		 printf("\n%s Price is: %dPKR",packages_Rooms[0],RP1);
    		 printf("\n\t\t\t\t***Thank you for booking*** ");
    		 break;
    		 
        case 2:
        		printf("\n\n\t%s Price are : %dPKR",packages_Rooms[1],RP2);
        		printf("\n\t\t\t\t***Thank you for booking*** ");
    		 break;
    	
	}
	if(selection_Rooms==1)
	{
	  printf("\n==================================================================================================");
	  printf("\n\t\t\t\t\tYour Bill");
	  printf("\n=================================================================================================="); 
	  printf("\nYour Package choice is %s",Room);
	  printf("\n\nYour Room choice is:\n%s whose Price is %dPKR",packages_Rooms[0],RP1);
	  printf("\n\n\t\t\t\tYour Total bill is : %dPKR",RP1);
	  printf("\n==================================================================================================");
    }
    else if(selection_Rooms==2)
	{
	  printf("\n==================================================================================================");
      printf("\n\t\t\t\t\tYour Bill");
	  printf("\n==================================================================================================");
	  printf("\nYour Package choice is %s",Room);
	  printf("\n\nYour Room choice is:\n%s whose Price is %dPKR",packages_Rooms[1],RP2); 
	  printf("\n\t\t\t\tYour Total bill is : %dPKR",RP2);
	  printf("\n==================================================================================================");
	}	
   else
    { 
     printf(" No Rooms Available");
    }
	printf("\n*~We hope you will enjoy the service.\n*~Thank you for choosing our Hotel.\n*~Have A nice day.");
	printf("\n==================================================================================================");  
	printf("\n\nWould you like to continue? Y/N:");   
	
	 scanf(" %c",&ch);
		if(ch == 'y' || ch == 'Y')
		{
		system ("cls");
		}
		else
		{
		printf("\nPress any key to close the console screen......\n");
		}
	 printf("\n");		   
	  	
}
// DINNER PACKAGES
 	char* packages_Dinner[]={"1)-Night-Dinner-with-music","2)-Night-Dinner-without-music"};	
	int j;
	if(choice==2)
	{
      for (j=0;j<2;j++)
     {
        printf("\n%s",packages_Dinner[j]);
	 }
   	 if(choice==1)
	 {
		printf("\n\nThe prices for the available packages are: ");
		printf("\n\n\t%s Price are : %dPKR",packages_Dinner[0],RP2);
		printf("\n\n\t%s Price are : %dPKR",packages_Dinner[1],RP1);
	 }
	printf("\n==================================================================================================");
	printf("\t\nTo choose your Dinner package just press that number:  ");
	scanf("%d",&selection_Dinner);
	switch(selection_Dinner)
    {
    	case 1:
    		 printf("\n%s Price is : %dPKR",packages_Dinner[0],RP2);
    		 printf("\n\t\t\t\t***Thank you for booking*** ");
    		 break;
    		 
        case 2:
        		printf("\n\n\t%s Price are : %dPKR",packages_Dinner[1],RP1);
        		printf("\n\t\t\t\t***Thank you for booking*** ");
        		break;
	}
	if(selection_Dinner==1)
	{  
      printf("\n==================================================================================================");
      printf("\n\t\t\t\t\tYour Bill"); 
      printf("\n==================================================================================================");
	  printf("\nYour Package choice is %s",Din);
	  printf("\n\nYour Dinner package is: \n%s whose Price is : %dPKR",packages_Dinner[0],RP2);
	  printf("\n\n\t\t\t\tYour Total bill is : %dPKR",RP2);
	  printf("\n==================================================================================================");
   }	  
    else if(selection_Dinner==2)
	{
	  printf("\n==================================================================================================");	
      printf("\n\t\t\t\t\tYour Bill");
      printf("\n==================================================================================================");
	  printf("\nYour Package choice is %s",Din);
	  printf("\n\nYour Dinner package is: \n%s whose Price is : %dPKR",packages_Dinner[1],RP1);
	  printf("\n\n\t\t\t\tYour Total bill is : %dPKR",RP1);
	  printf("\n==================================================================================================");
    }
    else
   { 
     printf("No Table Available");
   }
	printf("\n*~We hope you will enjoy the service.\n*~Thank you for choosing our Hotel.\n*~Have A nice day.");
	printf("\n==================================================================================================");
	printf("\n\nWould you like to continue? Y/N:");   
	
	 scanf(" %c",&ch);
		if(ch == 'y' || ch == 'Y')
		{
		system ("cls");
		}
		else
		{
		printf("\nPress any key to close the console screen......\n");
		}
	 printf("\n");		   
}}while(ch=='y' || ch=='Y');
}

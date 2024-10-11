#include<stdio.h>
#include<string.h>
struct bank create(int);
struct bank
{
	long long int balance,account;
	char name[100],address[100],addhar[100],phone_num[10];
};
 FILE *h,*s,*y,*z,*m,*w;
int d,i,k,num=0,number=0,acc,q,count=0,p,g,v,e;
long long int acc_num,account,f,u;
char choice;
main()
{
		struct bank b[100];
	 	printf("\t\t\t\t\t\t\t  =====================================\n");
        printf("\t\t\t\t\t\t\t\t   BANK MANAGEMENT SYSTEM \n");
        printf("\t\t\t\t\t\t\t  =====================================\n");
       	while(1)
		{
			
		printf("\n\t\t\t\t\t\t\t-------------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t1. Create account \n");
        printf("\n\t\t\t\t\t\t\t-------------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t2. Deposit \n");
        printf("\n\t\t\t\t\t\t\t-------------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t3. Withdraw \n");
        printf("\n\t\t\t\t\t\t\t-------------------------------------------\n");
    	printf("\t\t\t\t\t\t\t\t4. Display account details \n");
    	printf("\n\t\t\t\t\t\t\t-------------------------------------------\n");
    	printf("\t\t\t\t\t\t\t\t5. Searching the accounts \n");
    	printf("\n\t\t\t\t\t\t\t-------------------------------------------\n");
    	printf("\t\t\t\t\t\t\t\t6. Delete acccount \n");
    	printf("\n\t\t\t\t\t\t\t-------------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t7. Exit \n");
        printf("\n\t\t\t\t\t\t\t-------------------------------------------\n");
        harsha:
        printf("\n\t\t\t\t\t\t\tEnter your choice : ");
        scanf(" %c",&choice);
     	if(choice>=49&&choice<=55)
        {

        switch(choice)
        {
        	case '1':
        		printf("\n\t\t\t\t\t\t\tHOW MANY ACCOUNTS DO YOU WANT TO CREATE : ");
        		scanf("%d",&num);
        		
        		s=fopen("C:/Users/srava/OneDrive/Desktop/PSP/number.txt","r");
        		fscanf(s,"%d",&number);
        	//	number=number+num;
        		k=number;
        	//	fclose(s);
        //	k=number-num;
        	//	s=fopen("C:/Users/harsh/OneDrive/Desktop/PSP/number.txt","w");
        	//	fprintf(s,"%d",number);
        	//	fclose(s);
        	int n=0;
        	
        	for(i=k;n<num;i++,n++)
        	{
        		b[i]=create(i);
        	}
        		break;
        	case '2':
        		deposit(b);
        		break;
        	case '3':
        		withdraw(b);
        		break;
        	case '4':
        		display(b);
        		break;
        	case '5':
        		search(b);
        		break;
        	case '6':
        		delete(b);
        		break;
        	
        	case '7':
        		//printf("*==>>>INVALID CHOICE<<<===*");
        	//	goto hari;
        	break;
		}
	}
		else
		{
			goto harsha;
		}
		
	
	}
}
struct bank create(int i)
{
	struct bank b;
	w=fopen("C:/Users/srava/OneDrive/Desktop/PSP/v_value.txt","r");
			fscanf(w,"%d",&v);
	printf("\n\t\t\t\t\t\t\t - - - - - - - - - - - - - - - -");
	printf("\n\t\t\t\t\t\t\t|Enter the details of account %d | ",i+1-v);
	printf("\n\t\t\t\t\t\t\t - - - - - - - - - - - - - - - -");
      	printf("\n\t\t\t\t\t\t\tAccount holder name   : ");
      	scanf("%s",b.name);
       	printf("\t\t\t\t\t\t\tEnter address         : ");
    	scanf("%s",b.address);
    	printf("\t\t\t\t\t\t\tEnter Addhar number   : ");
    	addhar:
    	scanf("%s",b.addhar);
    	if(strlen(b.addhar)!=12)
    	{
    		printf("\t\t\t\t\t\t\tEntered invailed ADDHAR number\n\t\t\t\t\t\t\tEnter the correct addhar number :");
    		goto addhar;
		}
       	printf("\t\t\t\t\t\t\tEnter the phone number:");
		phone:
    	scanf("%s",b.phone_num);
    	if(strlen(b.phone_num)!=10)
    	{
    		printf("\t\t\t\t\t\t\tEntered phone number is invalid\n\t\t\t\t\t\t\tEnter the correct phone number :");
    		goto phone;
		}
       	printf("\t\t\t\t\t\t\tEnter opening balance :");
   		scanf("%lld", &b.balance);
	   	printf("\t\t\t\t\t\t\tAccount created successfully! %c ",2);
	  b.account = 214810100024335;
	   	b.account=b.account+i;
	   	printf("\n\t\t\t\t\t\t\tYOUR ACCOUNT NUMBER    : %lld ",b.account);
	   	
	   	s=fopen("C:/Users/srava/OneDrive/Desktop/PSP/number.txt","r");
        		fscanf(s,"%d",&number);
	   //	fclose(s);
	   	
	   	number++;
	   		s=fopen("C:/Users/srava/OneDrive/Desktop/PSP/number.txt","w");
        		fprintf(s,"%d",number);
        		fclose(s);
	   	
	h=fopen("C:/Users/srava/OneDrive/Desktop/PSP/bankaccount.txt","a");
	fprintf(h,"\n |  %5d  |  %15s  |  %10s  |   %15s   |  %10s  |  %10lld  |  %15lld  |",i+1-v,b.name,b.address,b.addhar,b.phone_num,b.balance,b.account);
    fclose(h);
    return b;
}
void deposit(	struct bank b[100])
{
		printf("\n\t\t\t\t\t\t\tEnter in the account number : ");
		scanf("%lld",&acc_num);
			s=fopen("C:/Users/srava/OneDrive/Desktop/PSP/number.txt","r");
        	fscanf(s,"%d",&number);
			h=fopen("C:/Users/srava/OneDrive/Desktop/PSP/bankaccount.txt","r");
			y=fopen("C:/Users/srava/OneDrive/Desktop/PSP/copyaccount.txt","w");
					w=fopen("C:/Users/srava/OneDrive/Desktop/PSP/v_value.txt","r");
			fscanf(w,"%d",&v);
		for(q=0;q<number-v;q++)
		{
			fscanf(h,"\n |  %5d  |  %15s  |  %10s  |   %15s   |  %10s  |  %10lld  |  %15lld  |",&i,b[q].name,b[q].address,b[q].addhar,&b[q].phone_num,&b[q].balance,&b[q].account);			
			if(acc_num==b[q].account)
				{
					printf("\n\t\t\t\t\t\t\tEnter the amount to be deposit :");
					scanf("%lld",&u);
					f=b[q].balance;
					b[q].balance=b[q].balance+u;
					count=1;
					printf(" =================================================================================================================================================== \n");
					printf(" |   S.NO  |        NAME       |   ADDRESS    |    ADDHAR NUMBER    | PHONE NUMBER |    BALANCE   |  DEPOSITED   |  NEW BALANCE |   ACCOUNT NUMBER  | \n");
					printf(" ===================================================================================================================================================");
					fprintf(stdout,"\n |  %5d  |  %15s  |  %10s  |   %15s   |  %10s  |  %10lld  |  %10lld  |  %10lld  |  %15lld  | \n",i,b[q].name,b[q].address,b[q].addhar,b[q].phone_num,f,u,b[q].balance,b[q].account);
					printf(" ----------------------------------------------------------------------------------------------------------------------------------------------------");
					fprintf(y,"\n |  %5d  |  %15s  |  %10s  |   %15s   |  %10s  |  %10lld  |  %15lld  |",i,b[q].name,b[q].address,b[q].addhar,b[q].phone_num,b[q].balance,b[q].account);
				}
				else
				{
				
				fprintf(y,"\n |  %5d  |  %15s  |  %10s  |  %15s   |  %10s  |  %10lld  |  %15lld  |",i,b[q].name,b[q].address,b[q].addhar,b[q].phone_num,b[q].balance,b[q].account);
				}
				
		}
		fclose(y);
		if(count==1)
		printf("\n\n\t\t\t\t\t\t\tdeposited successfully %c\n",2);
		else
		printf("\n\t\t\t\t\t\t\t**ACCOUNT NOT MATCHED**");
		fclose(h);	
		
		s=fopen("C:/Users/srava/OneDrive/Desktop/PSP/bankaccount.txt","w");
		y=fopen("C:/Users/srava/OneDrive/Desktop/PSP/copyaccount.txt","r");
		for(i=1,q=0;q<number;q++,i++)
		{
		 fscanf(y,"\n |  %5d  |  %15s  |  %10s  |   %15s  |  %10s  |  %10lld  |  %15lld  |",&i,b[q].name,b[q].address,b[q].addhar,&b[q].phone_num,&b[q].balance,&b[q].account);
		fprintf(s,"\n |  %5d  |  %15s  |  %10s  |   %15s  |  %10s  |  %10lld  |  %15lld  |",i,b[q].name,b[q].address,b[q].addhar,b[q].phone_num,b[q].balance,b[q].account);
		}
		fclose(s);
		fclose(y);
}
void withdraw(	struct bank b[100])
{
			printf("\n\t\t\t\t\t\t\tEnter in the account number : ");
			scanf("%lld",&acc_num);
			s=fopen("C:/Users/srava/OneDrive/Desktop/PSP/number.txt","r");
        	fscanf(s,"%d",&number);
			h=fopen("C:/Users/srava/OneDrive/Desktop/PSP/bankaccount.txt","r");
			y=fopen("C:/Users/srava/OneDrive/Desktop/PSP/copyaccount.txt","w");
					w=fopen("C:/Users/srava/OneDrive/Desktop/PSP/v_value.txt","r");
					fscanf(w,"%d",&v);
		for(i=1,q=0;q<number-v;q++,i++)
		{
			fscanf(h,"\n |  %5d  |  %15s  |  %10s  |   %15s   |  %10s  |  %10lld  |  %15lld  |",&i,b[q].name,b[q].address,b[q].addhar,&b[q].phone_num,&b[q].balance,&b[q].account);			
	
			
				if(acc_num==b[q].account)
				{
						count=1;
					printf("\n\t\t\t\t\t\t\tEnter the amount to be withdraw :");
					scanf("%lld",&u);
					f=b[q].balance;
					if(b[q].balance-u>=0)
					{
					b[q].balance=b[q].balance-u;
					printf("=================================================================================================================================================== \n");
					printf("|   S.NO  |        NAME       |   ADDRESS    |    ADDHAR NUMBER    | PHONE NUMBER |    BALANCE   |  WITHDRAWED  |  NEW BALANCE |   ACCOUNT NUMBER  | \n");
					printf("=================================================================================================================================================== ");		
					fprintf(stdout,"\n|  %5d  |  %15s  |  %10s  |   %15s   |  %10s  |  %10lld  |  %10lld  |  %10lld  |  %15lld  | \n",i,b[q].name,b[q].address,b[q].addhar,b[q].phone_num,f,u,b[q].balance,b[q].account);
					printf("---------------------------------------------------------------------------------------------------------------------------------------------------");
					fprintf(y,"\n |  %5d  |  %15s  |  %10s  |   %15s   |  %10s  |  %10lld  |  %15lld  |",i,b[q].name,b[q].address,b[q].addhar,b[q].phone_num,b[q].balance,b[q].account);
					printf("\n\n\t\t\t\t\t\t\twithdrawed successfully  %c\n",2);
					}
					else
					{
						printf("\n\t\t\t\t\t\t\t**IN SUFFICIENT BALANCE**");
						fprintf(y,"\n |  %5d  |  %15s  |  %10s  |   %15s   |  %10s  |  %10lld  |  %15lld  |",i,b[q].name,b[q].address,b[q].addhar,b[q].phone_num,b[q].balance,b[q].account);
					}
				}
				else
				{
				
				fprintf(y,"\n |  %5d  |  %15s  |  %10s  |   %15s   |  %10s  |  %10lld  |  %15lld  |",i,b[q].name,b[q].address,b[q].addhar,b[q].phone_num,b[q].balance,b[q].account);
				}
				
		}
		fclose(y);
		if(count!=1)
		printf("\n\t\t\t\t\t\t\t**ACCOUNT NOT MATCHED**");
		fclose(h);	
		
		s=fopen("C:/Users/srava/OneDrive/Desktop/PSP/bankaccount.txt","w");
		y=fopen("C:/Users/srava/OneDrive/Desktop/PSP/copyaccount.txt","r");
		for(i=1,q=0;q<number;q++,i++)
		{
		 fscanf(y,"\n |  %5d  |  %15s  |  %10s  |   %15s   |  %10s  |  %10lld  |  %15lld  |",&i,b[q].name,b[q].address,b[q].addhar,&b[q].phone_num,&b[q].balance,&b[q].account);
		fprintf(s,"\n |  %5d  |  %15s  |  %10s  |   %15s   |  %10s  |  %10lld  |  %15lld  |",i,b[q].name,b[q].address,b[q].addhar,b[q].phone_num,b[q].balance,b[q].account);
		}
		fclose(s);
		fclose(y);
	
	
}
void display(struct bank b[100])
{
	int k=0,z;
			s=fopen("C:/Users/srava/OneDrive/Desktop/PSP/number.txt","r");
        	fscanf(s,"%d",&number);
	h=fopen("C:/Users/srava/OneDrive/Desktop/PSP/bankaccount.txt","r");
	
		w=fopen("C:/Users/srava/OneDrive/Desktop/PSP/v_value.txt","r");
			fscanf(w,"%d",&v);
			for(z=k;z<1;z++)
        		{
        			
        			printf("\t\t\t====================================================================================================================== \n");
					printf("\t\t\t|   S.NO  |         NAME      |    ADDRESS   |    ADDHAR NUMBER    | PHONE NUMBER |    BALANCE   |  ACCOUNT NUMBER   |\n");
					printf("\t\t\t======================================================================================================================");
				}
		for(i=1,q=0;q<number-v; q++,i++)
	{
		fscanf(h,"\n |  %5d  |  %15s  |  %10s  |   %15s   |  %10s  |  %10lld  |  %15lld  |",&i,b[q].name,b[q].address,b[q].addhar,&b[q].phone_num,&b[q].balance,&b[q].account);
	    fprintf(stdout,"\n\t\t\t|  %5d  |  %15s  |  %10s  |   %15s   |  %10s  |  %10lld  |  %15lld  | \n", i,b[q].name,b[q].address,b[q].addhar,b[q].phone_num,b[q].balance,b[q].account);
	   printf("\t\t\t----------------------------------------------------------------------------------------------------------------------");
	    }
   	fclose(s);	
    fclose(h);
	
}
void search(struct bank b[100])
{
	int c=0;
	printf("\n\t\t\t\t\t\t\tENTER THE ACCOUNT NUMBER TO SEARCH :");
	scanf("%lld",&acc_num);
	h=fopen("C:/Users/srava/OneDrive/Desktop/PSP/bankaccount.txt","r");
			s=fopen("C:/Users/srava/OneDrive/Desktop/PSP/number.txt","r");
        	fscanf(s,"%d",&number);
        		w=fopen("C:/Users/srava/OneDrive/Desktop/PSP/v_value.txt","r");
			fscanf(w,"%d",&v);
	for(q=0;q<number-v;q++)
	{
		fscanf(h,"\n |  %5d  |  %15s  |  %10s  |   %15s   |  %10s  |  %10lld  |  %15lld  |",&i,b[q].name,b[q].address,b[q].addhar,&b[q].phone_num,&b[q].balance,&b[q].account);
		if(b[q].account==acc_num)
		{
			printf("\n\t\t\t\t\t\t\t====>>>>ACCOUNT FOUND<<<====\n\n");
					printf("\t\t\t====================================================================================================================== \n");
					printf("\t\t\t|   S.NO  |         NAME      |    ADDRESS   |    ADDHAR NUMBER    | PHONE NUMBER |    BALANCE   |  ACCOUNT NUMBER   |\n");
					printf("\t\t\t======================================================================================================================");
			fprintf(stdout,"\n\t\t\t|  %5d  |  %15s  |   %10s   |  %15s  |  %10s  |  %10lld  |  %15lld  | \n",i,b[q].name,b[q].address,b[q].addhar,b[q].phone_num,b[q].balance,b[q].account);
					  printf("\t\t\t----------------------------------------------------------------------------------------------------------------------");
			c++;
		}
	}
		if(c==1)
			printf("");
		else
			printf("\t\t\t\t\t\t\t**NO ACCOUNTS MATCHED**");
		fclose(h);
}

void delete(struct bank b[100])
{
	int k=0,x=1;
	printf("\n\t\t\t\t\t\t\tENTER THE ACCOUNT NUMBER DO YOU WANT TO DELETE :");
		scanf("%lld",&acc_num);
			s=fopen("C:/Users/srava/OneDrive/Desktop/PSP/number.txt","r");
        	fscanf(s,"%d",&number);
    z=fopen("C:/Users/srava/OneDrive/Desktop/PSP/copyaccount.txt","w");
	h=fopen("C:/Users/srava/OneDrive/Desktop/PSP/bankaccount.txt","r");
	
		w=fopen("C:/Users/srava/OneDrive/Desktop/PSP/v_value.txt","r");
			fscanf(w,"%d",&v);
			
	for(q=0;q<number-v;q++)
	{
		fscanf(h,"\n |  %5d  |  %15s  |  %10s  |   %15s   |  %10s  |  %10lld  |  %15lld  |",&i,b[q].name,b[q].address,b[q].addhar,&b[q].phone_num,&b[q].balance,&b[q].account);
		if(b[q].account==acc_num)
		{
		
			k++;
        			printf("\n\t\t\t====================================================================================================================== \n");
					printf("\t\t\t|   S.NO  |         NAME      |    ADDRESS   |    ADDHAR NUMBER    | PHONE NUMBER |    BALANCE   |  ACCOUNT NUMBER   |\n");
					printf("\t\t\t======================================================================================================================");
					fprintf(stdout,"\n\t\t\t|  %5d  |  %15s  |  %10s  |   %15s   |  %10s  |  %10lld  |  %15lld  | \n", i,b[q].name,b[q].address,b[q].addhar,b[q].phone_num,b[q].balance,b[q].account);
					printf("\t\t\t----------------------------------------------------------------------------------------------------------------------");
	
		}
					
		else
		{
		/*	if(k==1)
			{	
				fprintf(z,"\n |  %5d  |  %15s  |   %10s   |  %15s  |  %10s  |  %10lld  |  %15lld  |",i,b[q].name,b[q].address,b[q].addhar,b[q].phone_num,b[q].balance,b[q].account);
			}*/
				
				fprintf(z,"\n |  %5d  |  %15s  |   %10s   |  %15s  |  %10s  |  %10lld  |  %10lld  |",x++,b[q].name,b[q].address,b[q].addhar,b[q].phone_num,b[q].balance,b[q].account);			
		}
	}
		
	if(k==1)
	{
		v++;
			w=fopen("C:/Users/srava/OneDrive/Desktop/PSP/v_value.txt","w");
				fprintf(w,"%d",v);
			fclose(w);
				w=fopen("C:/Users/srava/OneDrive/Desktop/PSP/v_value.txt","r");
			fscanf(w,"%d",&v);
	printf("\n\t\t\t\t\t\t\t===>>>ACCOUNT DELETED SUCCESSFULLY<<<====");
	}
	else
	printf("\n\t\t\t\t\t\t\t***ACCOUNT NOT MATCHED*");
	fclose(h);
	fclose(z);
	
	
		m=fopen("C:/Users/srava/OneDrive/Desktop/PSP/copyaccount.txt","r");
		h=fopen("C:/Users/srava/OneDrive/Desktop/PSP/bankaccount.txt","w");
		for(q=0;q<number-v;q++)
		{
		fscanf(m,"\n |  %5d  |  %15s  |  %10s  |   %15s   |  %10s  |  %10lld  |  %15lld  |",&i,b[q].name,b[q].address,b[q].addhar,&b[q].phone_num,&b[q].balance,&b[q].account);
	   fprintf(h,"\n |  %5d  |  %15s  |  %10s  |   %15s   |  %10s  |  %10lld  |  %15lld  |",i,b[q].name,b[q].address,b[q].addhar,b[q].phone_num,b[q].balance,b[q].account);
		}
		fclose(m);
		fclose(h);
}

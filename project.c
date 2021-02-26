#include<stdio.h>
#include<conio.h>
#include<string.h>
struct application
{
int year;
char name[30];
char author[30];
int version, price;
};
main()
{
char authorname[30];
int n,i;
for(i=0; i<=n; i++){
struct application a;
printf("Enter book name:");
scanf("%s",&a.name[i]);
printf("Enter the author");
scanf("%s",a.author[i]);
printf("Enter year:");
scanf("%d",&a.year[i]);
printf("Enter Version:");
scanf("%d",a.version[i]);
printf("Enter the cost:");
scanf("%d",&a.price[i]);
}
int choice;
printf("Enter your choice\n");
switch(choice)
{
case 1:
	printf("Enter the author name");
	scanf("%s",&authorname);
	if(strcmp(a.author[i],authorname)==0)
	{
	printf("Book name:%s, Book author:%s, Year:%d, version:%d, price:%d",a.name,a.author,a.year,a.version,a.price);
	}
	else
	{
	printf("No books available");
	}
	break;
case 2:
	printf("Enter the author name");
	scanf("%d",&authorname);
	int year;
	printf("Enter the Year");
	scanf("%d",&year);
	if(strcmp(a.author[i],authorname)==0)
	{
	if(a.year[i]==year)
	{
	printf("Book name:%s, Book author:%s, Year:%d, version:%d, price:%d",a.name,a.author,a.year,a.version,a.price);
	}
	}
	else
	{
	printf("No books available");
	}
	break;
case 3:
	for(int i=0; i<n; i++)	
	{
	for(int j=i+1; j<n; j++)
	{
	if(a.price[i]>a.price[i])
	{
	book temp=a.books[i];
	a.price[i]=price[j];
	a.price[j]=price[j];
	a.price[j]=temp;
	}
	}
	printf("Book name:%s, Book author:%s, Year:%d, version:%d, price:%d",a.name,a.author,a.year,a.version,a.price);
	}
	break;		
case 4:
	exit(0);
}
}
return 0;
}
	
	

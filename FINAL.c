#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct library
{
char bk_name[300];
char author[300];
int pages;
float price;
};

int main()
{
struct library l[1000];
char ar_nm[300],bk_nm[300];
int i,j, keepcount;
i=j=keepcount = 0;

while(j!=6)
{
printf("\n\n1. Add book information\n2. Display book information\n");
printf("3. List all books of given author\n");
printf("4. List the title of specified book\n");
printf("5. List the count of books in the library\n");
printf("6. Exit");

printf ("\n\nEnter one of the above : ");
scanf("%d",&j);

switch (j)
{
// Add book //
case 1:  

printf ("Enter the Book's Name = ");
scanf ("%s",l[i].bk_name);

printf ("Enter the Author's name = ");
scanf ("%s",l[i].author);

printf ("Enter the number of pages = ");
scanf ("%d",&l[i].pages);

printf ("Enter the price = ");
scanf ("%f",&l[i].price);
keepcount++;
break;

// Display book information //
case 2:

printf("you have entered the following information\n");
for(i=0; i<keepcount; i++)
{
printf ("Title = %s",l[i].bk_name);

printf ("\t Author = %s",l[i].author);

printf ("\t  Pages = %d",l[i].pages);

printf ("\t  Price = %f",l[i].price);
}
break;

// Display books of an author //
case 3:

printf ("Enter an author's name : ");
scanf ("%s",ar_nm);
for (i=0; i<keepcount; i++)
{
if (strcmp(ar_nm, l[i].author) == 0)
printf ("%s %s %d %f",l[i].bk_name,l[i].author,l[i].pages,l[i].price);
}
break;

// Display book information //
case 4:

printf ("Enter a book's name : ");
scanf ("%s",bk_nm);
for (i=0; i<keepcount; i++)
{
if (strcmp(bk_nm, l[i].bk_name) == 0)
printf ("%s \t %s \t %d \t %f",l[i].bk_name,l[i].author,l[i].pages,l[i].price);
}
break;

// Print total number of books // 
case 5:

printf("\n Total number of books in the library are : %d", keepcount);
break;

case 6:
exit (0); 

}
}
return 0;

}
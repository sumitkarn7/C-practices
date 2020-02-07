#include<stdio.h>

//new file
//Function Prototypes
struct num inputValue(void);
int compareNumber(int,int);
void displayGreater(int);

struct num{
    int a,b;
};

void main()
{
    struct num n=inputValue();
    compareNumber(n.a,n.b);
    //displayGreater(z);
}

//Function Declarations
 struct num inputValue(void)
 {
     struct num x;
     printf("Enter 1st num: ");
     scanf("%d",&x.a);
     printf("Enter 2nd num: ");
     scanf("%d",&x.b);
     return x;
 }

int compareNumber(int first,int second)
 {
     if(first>second)
     {
         printf("\nGreater Number: %d",first);
     }
     else
     {
         printf("\nGreater Number: %d",second);
     }
 }

 void displayGreater(int r)
 {
     printf("\nGreater Number: %d",r);
 }


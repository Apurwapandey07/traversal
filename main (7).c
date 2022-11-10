/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Apurwa kumari 2100290120043
// Creation and Traversal in linked list
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data; 
    struct node *next;
};
void linkedlisttraversal (struct node *ptr) {
    while(ptr!=NULL)
    {
    printf("The elements is : %d\n",ptr->data);
     ptr=ptr->next;
    }
}
int main()
{
   // struct node *head;
    struct node *n1,*n2,*n3;
    n1=(struct node*)malloc(sizeof (struct node));
     n2=(struct node*)malloc(sizeof (struct node));
     n3=(struct node*)malloc(sizeof (struct node));
    // head =n1;
     n1->data=3;
     n1->next=n2;
     n2->data=4;
     n2->next=n3;
     n3->data=5;
     n3->next=NULL;
     linkedlisttraversal (n1);
     return 0;
}


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
 int data;
 struct Node* next;

}
*first=NULL;
void create(int A[],int n)
{
  struct Node*t,*last;
  int i;
  first=(struct Node*)malloc(sizeof(struct Node));
  first->data=A[0];
  first->next=NULL;
  last=first;
  for(i=0;i<n;i++)
  {
   t=(struct Node*)malloc(sizeof(struct Node));
   t->data=A[i];
   last->next=t;
   last=t;
  }
}
void Display(struct Node *p)
{
  while(p!=NULL)
  {
    printf("%d",p->data);
    p=p->next
  }
}
int main()
{
 int A[]={2,3,4,5,6,7,8}
  create(A,7);
  Display(first);
  return 0;
}

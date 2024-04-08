#include<conio.h>
#include<stdio.h>
#define size 5

int front=-1,rear=-1;
int queue[size];
void insert(int);
void deleted();
void display();

void main()
{
    clrscr();
    insert(100);
    insert(200);
    insert(300);
    insert(400);
    insert(500);
    display();

    printf("\n\n Queue from deleted element from 1st position");
    deleted();
    display();
    getch();
}
void insert(int val)
{
    if(rear>size)
    printf("\n Queue is full");
    else{
	  rear++;
	  queue[rear]=val;
	  if(rear==0)
		front=0;
	 }
     }
     void deleted()
     {
	 if(front<0)
	  printf("\n Queue is empty");
	  else
	  {
	       if(front==rear)
	       {
		  front=-1;
		  rear=-1;

	       }
	       else
			front++;
	  }
     }




void display()
{
    int i;
    if(front<0)
	printf("\n Queue is empty ");
    else
    {
	for(i=front;i<=rear;i++)
	{
	   printf("\n Value %d is located at position %d",queue[i],i);
	}
    }
}

#include<stdio.h>
#include<stdlib.h>
#define size 100
int stack[size],ele,top=-1;
void push()
{
if(top==size-1)
{
 printf("stack is full");
 exit(0);
}
printf("Enter the element to be inserted:");
scanf("%d",&ele);
stack[++top]=ele;
}
int pop()
{
if(top==-1)
{
printf("Stack is empty\n");
exit(0);
}
ele=stack[top--];
return ele;
}
void display()
{
if(top==-1)
{
printf("Stack is empty\n");
exit(0);
}
int i;
printf("the stack values are:\n");
for(i=0;i<=top;i++)
printf("%d\t",stack[i]);
}
void main()
{
int ch;
while(1)
{
printf("1.push\n2.pop\n3.display\n4.exit");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
       break;
case 2:pop();
       break;
case 3:display();
       break;
case 4:exit(0);
default:printf("Invalid choice please enter number 1 to 4\n");
         
}
}
}


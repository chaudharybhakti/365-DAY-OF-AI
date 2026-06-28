#include<iostream.h>
#include<conio.h>
void main()
{
int a=10,b=20,c,choice=1;
clrscr();
switch(choice)
{
case 1:
c=a+b;
cout<<"\n addition of two no \t"<<c;
break;
case 2:
c=a-b;
cout<<"\n substraction of two no \t"<<c;
break;
case 3:
c=a*b;
cout<<"\n multiplication of two no \t"<<c;
break;
case 4:
c=a/b;
cout<<"\n division of two no \t"<<c;
break;
default:
cout<<"\n enter incorrect choice \t";
}
getch();
}
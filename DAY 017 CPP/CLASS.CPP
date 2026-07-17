#include<iostream.h>
#include<conio.h>
class Add
{
int a,b,c;
public:
void input()
{
cout<<"Enter two no";
cin>>a>>b;
}
void add()
{
c=a+b;
}
void display()
{
cout<<c;
}
};
void main()
{
Add ob;
clrscr();
ob.input();
ob.add();
ob.display();
getch();
}
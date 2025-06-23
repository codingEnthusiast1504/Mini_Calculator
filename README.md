#include<iostream>
using namespace std
class Calculator//class declairation
{
 public:
int a,b,num,choice,factorial;
double per;//data members
Calculator()//Default constructor
{
cout<<"****BASIC CALCULATOR****"<<endl;
cout<<"---------------------------"<<endl;
cout<<"-choose choices from below-"<<endl;
cout<<"---------------------------"<<endl;
cout<<"1)Addition.\n2)Subtraction.\n3)Multiplication.\n4)Division.\n5)Modulas.\
n6)Tables calculate of any no.\n7)Square of any no.\n8)Cube of any
no.\n9)Calculate Factorial.\n10)CGPA calculate.\n11)Exit from program.\n";
cout<<"---------------------------"<<endl;
}
int Operation()//returns integer value
{
while(true)
{
cout<<"Enter your choice please:"<<endl;
cin>>choice;
switch(choice)
{
case 1:
cout<<"Enter the a value:"<<endl;
cin>>a;
cout<<"Enter the b value:"<<endl;
cin>>b;
cout<<"Addition:"<<a+b<<endl;
cout<<"---------------------------"<<endl;
break;
case 2:
cout<<"Enter the a value:"<<endl;
cin>>a;
cout<<"Enter the b value:"<<endl;
cin>>b;
cout<<"Subtraction:"<<a-b<<endl;
cout<<"---------------------------"<<endl;
break;
case 3:
cout<<"Enter the a value:"<<endl;
cin>>a;
cout<<"Enter the b value:"<<endl;
cin>>b;
cout<<"Multiplication:"<<a*b<<endl;
cout<<"---------------------------"<<endl;
break;
case 4:
cout<<"Enter the a value:"<<endl;
cin>>a;
cout<<"Enter the b value:"<<endl;
cin>>b;
if (b != 0)//0 value for b doesn't allow
cout << "Quotient = " << a / b<<endl;
else
cout << "Cannot divide by zero!"<<endl;
cout<<"---------------------------"<<endl;
break;
case 5:
cout<<"Enter the a value:"<<endl;
cin>>a;
cout<<"Enter the b value:"<<endl;
cin>>b;
cout<<"Modulas:"<<a%b;
cout<<"---------------------------"<<endl;
break;
case 6:
cout<<"Enter the number:"<<endl;
cin>>num;
for (int i = 1; i <= 10; i++)
cout << num<< " x " << i << " = " << num* i << endl;
cout<<"---------------------------"<<endl;
break;
case 7:
cout<<"Enter the number:"<<endl;
cin>>num;
cout <<"Sqaure of "<<num<< " = " << num*num<< endl;
cout<<"---------------------------"<<endl;
break;
case 8:
cout<<"Enter the number:"<<endl;
cin>>num;
cout <<"Cube of "<<num<< " = " << num*num*num<< endl;
cout<<"---------------------------"<<endl;
break;
case 9:
cout<<"Enter the number:"<<endl;
cin>>num;
factorial=1;
for (int i = 1; i <= num; ++i) {
factorial *= i;//factorial calculate and store value in factoial varible
}
cout << "Factorial of " << num << " = " << factorial << endl;
cout<<"---------------------------"<<endl;
break;
case 10:
cout<<"Enter your percentage:"<<endl;
cin>>per;
cout <<"CGPA of "<<per<<"%"<< " = " <<per/9.0<< endl;
cout<<"---------------------------"<<endl;
break;
case 11:
cout << "Exiting... Thank you!" << endl;
cout<<"---------------------------"<<endl;
return 0; // Terminates the program
break;
default:
cout<<"Your case is invalid!"<<endl;
cout<<"---------------------------"<<endl;
break;
}
}
}
};
int main()
{
 Calculator c;//default constructor called and object created
 c.Operation();//member function
 return 0;
}


#include<bits/stdc++.h>
using namespace std;
class calculator
{
    private:
    int a,b;
    public:
     void getdata()
     {
         cout<<"Enter a value of 1st number: ";
         cin>>a;
         cout<<"Enter a value of 2nd number: ";
         cin>>b;

     }
   void cal(char choice){
        switch(choice)
        {
            case '+':
            cout<<"The sum of two numbers is: "<<a+b;
            break;
            case '-':
            cout<<"The Subtraction of two numbers is: "<<a-b;
            break;
            case '*':
            cout<<"The Multiplication of two numbers is: "<<a*b;
            break;
            case '/':
            cout<<"The Divison of two ny=umbers is: "<<a/b;
            break;
            case '%':
            cout<<"The Remainder of two numbers is: "<<a%b;
            break;
            default:
            cout<<"Enter Correct choice which you have provided..";
            break;

        }
    }
};

int main()
{
    cout<<"****CALCULATOR****"<<"\n\n";
   char choice;
    calculator obj;
   obj.getdata();
   cout<<"Enter your choice from this ('+','-','*','/','%'): ";
   cin>>choice;
   obj.cal(choice);
   cout<<"\n\n\n"<<"****THANK YOU FOR USING THIS CALCULATOR****";


}
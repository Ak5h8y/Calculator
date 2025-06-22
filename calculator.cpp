#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    char op;   // op stands for operator

    cout<<"enter the first number"<<endl; // taking user input ot the fistr number in integer
    cin>>num1;
    cout<<"enter the operator"<<endl; // asking user to define the operator what he/she wanted to do
    cin>>op;
    cout<<"enter the second number"<<endl; // taking the sedcond number as input from user 
    cin>>num2;
    
    int result;

    if(op=='+')  // conditonal statements 
    {
        result = num1 +num2;
    }
    else if (op=='-')
    {
        result = num1 - num2;
    }
    else if (op== '*')
    {
        result = num1 * num2;
    }
    else if (op=='/')
    {
        result = num1 / num2;
    }
    else 
    {
        cout<<"invalid operator"<<endl;
    }
    cout<< "result = "<< result <<endl;
    return 0 ;
}
    //four function calculator
#include<bits/stdc++.h>
using namespace std;

/*
 Concept of Functional Pointers in C++:
 
 Pointers:Pointers are basically used to store the Address of the Variable.
 
 Ex:int num2=10
    int *num1=&num2
    
    now num2 stores a value 10 and it's address is stored in num1 pointer.
    now we can access num2's value with the help of num1(reason:Num2's address is accessible by Num1)
 
 Functional Pointers:Functional Pointers are used to store the Address of a Function.
 
 Ex:Functional Declaration:
    datatype(*func_ptr)(datatype,datatype).
 
*/

void functional_pointer(int num1,int num2)
{
    cout<<"The Value of num1 and num2 is:"<<endl;
    cout<<num1<<" "<<num2<<endl;
}

int functional_pointer(int num1)
{
    int bit_count=0;
    while(num1>0)
    {
        if(num1&1==1)
        {
            bit_count++;
        }
        num1=num1>>1;
    }
    return bit_count;
}

int main()
{
    cout<<"---------------------Functional Pointers in C++--------------------------------"<<endl;
    int num1=0,num2=0;
    cout<<"\n-------------Functional Pointer Concept ---------------\n";
    cout<<"Enter the Value of num1 and num2:\n"<<endl;
    cin>>num1>>num2;
    cout<<endl;
    void(*fptr)(int,int);
    fptr=functional_pointer;
    fptr(num1,num2);
    
    int(*fptr1)(int);
    fptr1=functional_pointer;
    int bits_count=fptr1(num1);
    cout<<"\n-------------Functional Pointer Concept---------------\n";
    cout<<"\nThe number of Set Bits in a Number is: "<<bits_count<<endl;
    return 0;
}



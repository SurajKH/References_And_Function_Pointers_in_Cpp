#include<bits/stdc++.h>
using namespace std;

/*
 concept of references in Cpp
 
 References Definition with Respect to Functions.
 
 References:The modification done to the Variable is not just reflected within the Functional Scope.
 
 We can see the Changes in the Main Scope as well.
*/
void change(int &a)
{
    a=a*10;
    //now the value of a is updated over here.
    cout<<"The Value of Number inside functional Scope is:\n"<<endl;
    cout<<a<<endl;
    
    return;
}
int main()
{
    int num;
    cout<<"****References in Cpp***\n"<<endl;
    cout<<"Enter the Number:\n"<<endl;
    cin>>num;
    cout<<"The value of Number before entering the Function is:"<<num<<endl;
    
    
    cout<<"Now we enter the functional Scope over here:"<<endl;
    change(num);
    cout<<"\n\nNow we are in the Main function Scope."<<endl;
    cout<<"The value of Number under Main Function Scope is:\n"<<endl;
    cout<<num<<endl;
    return 0;
}


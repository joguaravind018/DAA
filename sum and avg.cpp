/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
using namespace std;
int main(){
    int sum=0,avg;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        sum=sum+i;
    }
    avg=sum/n;
    cout<<"sum="<<sum<<endl;
    cout<<"avg="<<avg<<endl;
    
}
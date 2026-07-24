/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if((n&n-1)==0){
        cout<<"it is raised power of 2";
    }
    else
    cout<<"it is not raised power of 2";
    
}
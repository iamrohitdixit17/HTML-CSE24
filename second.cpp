#include<iostream>
using namespace std;
int glo= 6;
void sum(){
    int a;
    cout<<glo;
}
int main(){
    int glo=9;
    glo=78;
    /*int a=3;
    int b=4;*/
    int a=11, b=22;
    float pi=3.14;
    char c='u';
    bool is_true=false;
    sum();
    cout<<glo<< is_true;
    // cout<<"This is second c++. \nHere is the value of a is "<<a<<". \nThe value of b is "<<b;
    // cout<<"\nThe value of pi is: "<<pi;
    // cout<<"\nThe value of c is: "<<c;
    return 0;
}
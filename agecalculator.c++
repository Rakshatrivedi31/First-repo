#include<iostream>
using namespace std;
int main(){
    int birthyear;
    cout<<"Enter your birth year: ";
    cin>>birthyear;
    int currentyear=2024;
    int age=currentyear-birthyear;
    cout<<"Your current age is: "<<age<<endl;
    return 0;
}
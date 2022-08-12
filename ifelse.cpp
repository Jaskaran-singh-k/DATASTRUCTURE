#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int salary;
    cin>>salary;

    if(salary>5000){
        cout<<"neha\n";
    } else if(salary>2000){
        cout<<"reha\n";
    } else{
        cout<<"friends\n";
    }
    return 0;
}
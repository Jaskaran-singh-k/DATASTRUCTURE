#include<iostream>
using namespace std;
int main(){
    int pmoney=3000;
    for(int date=1;date<=30;date++){
        if(date%2==0){
            continue;
        }
        if(pmoney==0){
            break;
        }
        cout<<"go out"<<endl;
        // pmoney=pmoney-300;
    }
    return 0;
}
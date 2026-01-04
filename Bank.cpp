#include <iostream>
using namespace std;

void checkbalance();
void deposite();
void withdraw();

int blc=0;
int main(){
    int N;
    do{
    cout<<"***********************Start********************************************\n";
    cout<<"1. Check Balance\n";
    cout<<"2. Deposit Money\n";
    cout<<"3. Withdraw Amount\n";
    cout<<"4. Exit\n";
    cout<<"Enter what you want(1-4)......: ";
    cin>>N;
    cout<<"************************End*******************************************\n";

    switch(N){
        case 1:
            cout<<"Your balance is ";
            checkbalance();
            break;
        case 2:
            deposite();
            break;
        case 3:
            withdraw();
            break;
        case 4:
            cout<<"Your balance is ";
            checkbalance();
            break;
        default:
            cout<<"You have entered wrong.....\n";
    }}while(N!=4);
    cout<<"Thanks For Visiting Our Website";
    return 0;
}

void checkbalance(){
    cout<<blc<<endl;
}

void deposite(){
    int money;
    cout<<"Enter amount =";
    cin>>money;
    blc+=money;
    
}

void withdraw(){
    int money;
    cout<<"Enter money you want to withdraw : ";
    cin>>money;
    if(money>blc){
        cout<<"Unsufficient Amount..\n";
    }else{
        blc-=money;
    }
    
}



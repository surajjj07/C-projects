#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter any number :";
    cin >> n;
    cout << endl;

    //  # Right Tringle star
    /*

    *
    **
    ***
    ****
    *****

    */

    /*
    for (int i = 1; i <= n;i++){
        for (int j = 1;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
    */



    // # Inverted Right Tringle

    /*

    *****
    ****
    ***
    **
    *
    
    */

    // for (int i = 0; i < n;i++){
    //     for (int j = n-i; j>=1;j--){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }



    // # Pyramid Pattern

    /*
       *
      ***
     *****
    *******
    
    */

    // for (int i = 1; i <= n;i++){
    //     for (int j = n - i; j>0;j--){
    //         cout << " ";
    //     }
    //     for (int k = 1; k <= (2 * i) - 1; k++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }


    // # Number Tringle Patter

    /*
    1
    12
    123
    1234
    12345
    */

    // for (int i = 1; i <= n;i++){
    //     int num = 1;
    //     for (int j = 1; j <= i;j++){
    //         cout << num;
    //         num++;
    //     }
    //     cout << endl;
    // }

    // # Floyd's Triangle Pattern
    /*
    1
    2 3
    4 5 6
    7 8 9 10
    */

    // int num = 1;
    // for (int i = 1; i <= n;i++){
    //     for (int j = 1; j <= i;j++){
    //         cout << num<<" ";
    //         num++;
    //     }
    //     cout << endl;
    // }


    // # Binary Pattern

    /*
    
    1
    01
    101
    0101

    */

    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= i;j++){
            
        }
    }
        return 0;
}
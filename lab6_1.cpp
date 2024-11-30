#include<iostream>
using namespace std;

int main(){
    int NUM = 1; 
    int counter_even = 0;
    int counter_odd = 0;
       while (NUM != 0){
            cout << "Enter an integer: ";
            cin >> NUM ;
       
      if (NUM != 0){      
       if(NUM%2 == 0){
            counter_even = counter_even + 1 ;

        // cout << "#Even numbers = " << NUM1 ;
       }else {
            counter_odd = counter_odd + 1 ;

        // cout << "#Odd numbers = "<< NUM2 ;
       }
         }
       }
         cout << "#Even numbers = " << counter_even << "\n";
         cout << "#Odd numbers = "<< counter_odd << "\n";
    return 0;
}
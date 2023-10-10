#include <iostream>
using namespace std ;
int main() {
   int r , c ;
   cout << "Enter no of rows and colums respectively (odd numbers only ) : " ;
   cin>> r>> c ;
   int s = 0 ;
   int t = 10 ;
   int sum = s+t ;
   for (int i = 0 ; i < r ; i ++ ) {
     for (int j = 0 ; j< c ; j++) {
        t = 10 -s ;
        if (s>0 && (s >= j+1 || t <=j+1 ) ) {
            cout << "  " ;
        }
        else {
            cout << "* " ;
        }
     }
     cout << " "<< endl ;
     s++ ;
   } 
   return 0 ;
}
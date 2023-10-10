#include <iostream>
using namespace std ;
int main () {
int i ;
cout << "Enter a number : " ;
cin >> i ;
int j = i ;
int k,sum ;
sum = 0 ;
while (i!=0){
 k = i%10 ;
 i = i/10 ;
 sum = sum*10+ k ;
}
cout << " The number is " << sum ;
return 0 ;
}

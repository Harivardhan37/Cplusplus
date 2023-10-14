#include<iostream>
#include<string>
using namespace std ;
int main (){
  int i ,j, f;
  string pair1 , pair2 , pair , spair,fpair, spair1;
  char c = 'A' ;
  pair1 = "ABA" ;
  pair2 = "BBB" ;
  cout << "Enter the number of generations to be printed : " ;
  cin >> i ;
  f = i-1 ;
   pair = c ;
  for (int z = 1 ; z <= i ; z++ ) {
    cout << z << " Generation " ;
    j = pair.length() ;
    for (int y = 0 ; y < j ; y++) {
        if (pair[y]=='A') {
            fpair = pair1 ;
            if (y==0)  spair =  fpair  ;
            else spair = spair +"."+fpair ;
        }
        else if (pair[y] == 'B'){
            fpair = pair2 ;
            if (y==0) spair = fpair ;
           else  spair = spair +"."+ fpair ;
        } ;
      cout << pair[y] ;
    }
    cout << " "<<endl ;
   spair1 = spair ;
   pair = spair ;
    }
  return 0 ;
}
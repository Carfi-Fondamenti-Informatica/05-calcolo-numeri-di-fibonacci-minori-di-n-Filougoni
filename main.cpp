#include <iostream>
using namespace std;

int main() {
   int n=0
   int a=1,b=1, c=0;
       cin >> n;
       if (n<2) {
           cout << "errore" << endl;
       }
   
   else {
           cout << a << endl;
           cout << b << endl;
      int i=0;     
      for (i=3; i <= n; i++) {
               c= a+b;
         cout << c <<endl;
               a=b;
               b=c;
           }
       }
   return 0;
}

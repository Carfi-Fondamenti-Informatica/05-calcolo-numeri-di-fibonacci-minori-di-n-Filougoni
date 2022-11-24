#include <iostream>
using namespace std;

int main() {
   int numero, a=1,b=1, c;
       cin >> numero;
       if (numero<2) {
           cout << "errore" << endl;
       }else {
           cout << a << endl;
           cout << b << endl;
           for (int i = 3; i <= numero; i++) {
               c= a+b;
               a=b;
               b=c;
               cout<< c <<endl;
           }
       }
   return 0;
}

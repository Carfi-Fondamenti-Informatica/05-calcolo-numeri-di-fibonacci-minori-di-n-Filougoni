#include <iostream>
using namespace std;

int main() {
      int n, a, b, c;
        cin >> n;
                   cout << (a = 1) << endl;
                   cout << (b = 1) << endl;
                   for (int i = 3; i <= n; i++) {
                       c = a + b;
                       a = b;
                       b = c;
                       if (c <= n) {
                           cout << c << endl;
                       }
                   }
   return 0;
}

#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
   int a;
   long b;
   char c;
   float d = 334.230;
   double e = 14049.304930000;

   cin>>a>>b>>c>>d>>e;
   cout<<a<<endl;
   cout<<b<<endl;
   cout<<c<<endl;
   cout << std::fixed << std::setprecision(3) << d << '\n';
   cout << std::fixed << std::setprecision(9) << e << '\n';
   return 0;
}


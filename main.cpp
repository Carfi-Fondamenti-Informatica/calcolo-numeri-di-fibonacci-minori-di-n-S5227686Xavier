#include <iostream>
using namespace std;

int main() {
   int a=0,b=1,n=0,c=0;
   cin >>n;
   cout <<b<<endl;
   for(c=0;c<n;c++){
      c=a+b;
      cout<<c<<endl;
      a=b;
      b=c;
   }
   return 0;
}

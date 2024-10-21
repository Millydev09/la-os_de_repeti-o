#include <iostream>
#include <ciso646>
using namespace std;
int i,s;
int main (void)
{
  int r;
  i=1;
  s=0;
  do
  {
    r= i%2;
    if (r==0)
    {
      s=s+i;
    }
    ++i;
  }
  while (not (i>500));
  cout << "somatório dos pares de 1 ao 500:" << s << endl;
  return 0;
}

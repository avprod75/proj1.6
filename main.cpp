#include <iostream>
using namespace std;
int main()
{
  int x;
  cout << "enter 3 digits number" << endl;
  cin >> x;
  cout << x/100<<" "<<(x/10)%10<<" "<<x%10;
  return 0;
}
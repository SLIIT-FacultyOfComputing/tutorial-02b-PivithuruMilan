/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>
using namespace std;

long Factorial(int no);
long nCr(int nfac, int rfac,int ifac);

int main() {
  int n, r,i,nfac,rfac,ifac;
  cout << "Enter a value for n ";
  cin >> n;
  nfac=Factorial(n);
  cout << "Enter a value for r ";
  cin >> r;
  rfac = Factorial(r);
  i = n - r;
  ifac = Factorial(i);
  cout << "nCr = ";
  cout << nCr(nfac,rfac,ifac);
  cout << endl;
  return 0;
}
long Factorial(int no)
{
  int x,fact = 1;
    for(x = no ; x >= 1 ;x--)
      {
         fact = x * fact;
    
      }
return fact;    
}
  
long nCr(int nfac,int rfac,int ifac)
{
long answer;
  answer = nfac /(rfac * ifac );
  return answer;
}


  

# include<iostream>
# include<math.h>

using namespace std;

int main()
{
  int n;
  cout<<"Enter the value of series"<<endl;
  cin>>n;
  
  if(n % 2 == 0)
  {
    three(n / 2);
  }
  
  else
  {
    two( n/2 + 1);
  }
  
  three( int n)
  {
    int x;
    x = pow(3, n-1);
  }
  
  two(int n)
  {
    int x;
    x = pow(2, n-1);
  }
  return 0;
}

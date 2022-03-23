#include <iostream>

int main(void)
{
 
  double result = 0 ;
  int n = 0 ;
  
    for (n = 10; n <= 100;n = n+1)
    { 
      if (n%2!=0) result = result + 1.0/n ;
  }
  std::cout << result << "\n";
  return 0 ;
}

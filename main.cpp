#include <iostream>
int main()
{
  int a = 0;
  std::cin >>  a;
  if (std::cin.good())
  {
    std::cerr << "Good" << '\n';	
  }
  else if (std::cin.eof())
  {
    std::cerr << "Eof" << '\n';
  }
  else if (std::cin.bad())
  {
    std::cerr << "Bad" << '\n';
  }
  else if (std::cin.fail())
  {
    std::cerr << "Fail" << '\n';
  }
  std::cout << a / 2 << '\n';
}

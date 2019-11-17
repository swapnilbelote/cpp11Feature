#include <iostream>
#include <vector>

int main()
{

  //! Used for primitive type
  auto i = 10;   // i is of type int
  auto j = 20.3; // j is of type float

  auto k = i + j;

  std::cout << "k : " << k << std::endl;
  
  //! Avoid complex template types
  std::vector<int> v = {10, 20, 30, 40};
  for (auto it = v.begin(); it != v.end(); ++it) // for (std::vector<int>::const_iterator it = v.begin(); it != v.end(); ++it)
  {
    std::cout << *it << std:: endl;
  }

  return 0;
}


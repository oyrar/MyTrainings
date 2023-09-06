#include "main.h"

#include <iostream>
#include <vector>

int main(int, char**)
{
  std::vector nums { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  for (const auto& i : nums )
  {
    std::cout << i << std::endl;
  }

  return 0;
}


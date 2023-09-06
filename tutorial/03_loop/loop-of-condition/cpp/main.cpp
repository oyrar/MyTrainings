#include "main.h"

#include <iostream>

int main(int, char**)
{
  int i = 0;

  while (i < 10)
  {
    ++i;
    std::cout << i << std::endl;
  }

  return 0;
}


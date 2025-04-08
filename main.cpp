#include <iostream>
#include "./colors/colors.h"

int main() {
  system("@echo off"); // Quick method to enable the use of ANSI codes
  std::cout << Colors::CYAN << "CYAN" << Colors::DEFAULT << std::endl;
  return 0;
}
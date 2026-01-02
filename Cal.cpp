#include <iostream>
#include <cmath>

int main()
{
  std::cout << "Welcome to the CLI Scientific Calculator!" << std::endl;

  std::cout << "This is only meant for calculating sine, cosine, tangent, and logarithm" << std::endl;

  double num;
  int choice;

  std::cout << "Enter a number: ";
  std::cin >> num;

  std::cout << "Choose the operation you want to perform: " << std::endl;
  std::cout << "1. Sine" << std::endl;
  std::cout << "2. Cosine" << std::endl;
  std::cout << "3. Tangent" << std::endl;
  std::cout << "4. Logarithm (base 10)" << std::endl;

  std::cout << "Enter your choice (1-4): ";
  std::cin >> choice;

  switch (choice)
  {
    case 1:
      std::cout << "Sine(" << num << ") = " << std::sin(num) << std::endl;
      break;
    case 2:
      std::cout << "Cosine(" << num << ") = " << std::cos(num) << std::endl;
      break;
    case 3:
      std::cout << "Tangent(" << num << ") = " << std::tan(num) << std::endl;
      break;
    case 4:
      if (num > 0)
      {
        std::cout << "Logarithm base 10 of " << num << " = " << std::log10(num) << std::endl;
      }
      else
      {
        std::cout << "Error: Logarithm is undefined for non-positive numbers." << std::endl;
      }
      break;
    default:
      std::cout << "Invalid choice! Please select a valid operation." << std::endl;
      break;
  }

  return 0;
}
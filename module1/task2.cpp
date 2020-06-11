#include <iostream>

int max(int number_1, int number_2, int number_3){
  int max;
  if ((number_1 > number_2) and (number_1 > number_3)){
    max=number_1;
  }else if(number_2 > number_3){
    max=number_2;
  }else{
    max=number_3;
  }
  return max;
}

int main() {
    std::cout << "max (1, 2, 3): " << max(1, 2, 3) << "\n";
    std::cout << "max (2, 3, 1): " << max(2, 3, 1) << "\n";
    std::cout << "max (3, 2, 1): " << max(3, 2, 1) << "\n";

    return 0;
}

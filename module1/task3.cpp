#include <iostream>

void printString(std::string word, int number){
   while (number!=0){
     std::cout << word <<'\n';
     number--;
   }
 }

int main() {
    printString("Hello", 5);
    std::cout << "\n";

    printString("AbC", 2);
    std::cout << "\n";

    printString("HiHi ", 6);
    std::cout << "\n";

    return 0;
}

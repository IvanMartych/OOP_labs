#include <iostream>
#include "include/replace.h"

int main(){

    std::string str;
    std::cout << "text: ";
    std::cin >> str;

    int n;
    std::cout << "n: ";
    std::cin >> n;

    char old_value;
    std::cout << "old_value: ";
    std::cin >> old_value;

    char new_value;
    std::cout << "new_value: ";
    std::cin >> new_value;

    std::cout << "\n" << str << " -> " << replace(str, n, old_value, new_value) << std::endl;
    return 0; 
}
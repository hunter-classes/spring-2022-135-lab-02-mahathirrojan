#include <iostream> 
void valid() {
    std::cout << "Enter a number:" << std::endl; 
    int a = 0;
    std::cin >> a; 
    while (a > 100 || a < 0){
        std::cout << "Please try again:" << std::endl; 
        std::cin >> a; 
    }
    int b = a * a; 
    std::cout << b << std::endl; 
}

int main() {
    valid();
    return 0; 
}
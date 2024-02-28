#include <iostream>
#include <string>

int main() {
    setlocale(LC_ALL, "Russian");
    std::string myString;
    std::cout << "Введите ваше предложение: ";
    std::getline(std::cin, myString);
    std::cout << "Ваше предложение: " << myString << std::endl;
    std::cout << "Длина строки: " << myString.length() << std::endl;
    std::cout << "Первый символ строки: " << myString.front() << std::endl;
    std::cout << "Последний символ строки: " << myString.back() << std::endl;

    return 0;
}

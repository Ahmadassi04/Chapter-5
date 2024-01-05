#include <iostream>
#include <string>

std::string getName(int n){
    std::cout << "Enter the name of person #" << n << ": ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    return name;
}

int getAge(std::string name){
    int age{};
    std::cout << "Enter the age of " << name << ": ";
    std::cin >> age;

    return age;
}

int main()
{
    std::string firstName = getName(1);
    int age1 = getAge(firstName);
    std::string secondName = getName(2);
    int age2 = getAge(secondName);

    if(firstName > secondName)
        std::cout << firstName << " (age " << age1 << ")" << "is older than " << secondName << "(age " << age2 << ")";
    else
    std::cout << secondName << " (age " << age2 << ")" << "is older than " << firstName << " (age " << age1 << ")";

    return 0;
}

#include <iostream>
#include <string>

std::string getQuantityPhrase(int num) {
    if (num == 0) {
        return "no";
    } else if (num == 1) {
        return "a single";
    } else if (num == 2) {
        return "a couple of";
    } else if (num == 3) {
        return "a few";
    } else if (num > 3) {
        return "many";
    }

}

std::string getApplesPluralized(int apple) {
    if (apple == 1) {
        return "apple";
    } else {
        return "apples";
    }
}

int main() {
    std::cout << "Mary has " << getQuantityPhrase(3) << " " << getApplesPluralized(3) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << " " << getApplesPluralized(numApples) << ".\n";

    return 0;
}

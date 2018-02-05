#include <iostream>

void CtoF() {
    float temp = 0.0f;

    std::cout << "\nEnter your temperature in ºC: ";
    std::cin >> temp;

    temp = temp * 9 / 5 + 32;

    std::cout << "\n" << temp << "ºF\n";
}

void FtoC() {
    float temp = 0.0f;

    std::cout << "\nEnter your temperature in ºF: ";
    std::cin >> temp;

    temp = (temp - 32) * 5 / 9;

    std::cout << "\n" << temp << "ºC\n";
}

int main() {
 
    int choice;

    std::cout << "Choose an option:\n\n" << "1 - ºC to ºF\n" << "2 - ºF to ºC\n\n";

    std::cin >> choice;

    if(choice == 1) {
        CtoF();
    }
    else if(choice == 2) {
        FtoC();
    }

    return 0;
}

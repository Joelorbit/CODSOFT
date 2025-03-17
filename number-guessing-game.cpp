#include <iostream>
#include <cstdlib> 
#include <ctime>   

int main() {
    std::srand(std::time(0)); 
    int randomNumber = std::rand() % 100 + 1; 
    int userGuess;

    std::cout << "Guess the number (between 1 and 100): ";

    while (true) {
        std::cin >> userGuess;

        if (userGuess > randomNumber) {
            std::cout << "high! Try again: ";
        } else if (userGuess < randomNumber) {
            std::cout << "low! Try again: ";
        } else {
            std::cout << "Congratulations! You guessed the correct number." << std::endl;
            break;
        }
    }

    return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to run the number guessing game
void guessTheNumber() {
    // Define the range for the random number
    int lowerBound = 1, upperBound = 100;
    
    // Initialize the random number generator
    srand(time(0));
    
    // Generate a random number between lowerBound and upperBound
    int secretNumber = rand() % (upperBound - lowerBound + 1) + lowerBound;
    
    cout << "Welcome to the Guess the Number Game!" << endl;
    cout << "Guess a number between " << lowerBound << " and " << upperBound << "." << endl;
    
    int guess;
    
    // Loop until the user guesses correctly
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        
        // Check if the guess is too high, too low, or correct
        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        }
        else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        }
        else {
            cout << "Congratulations! You guessed the number " << secretNumber << "." << endl;
            break;  // Exit the loop if the guess is correct
        }
    }
}

int main() {
    // Run the game
    guessTheNumber();
    return 0;
}


#ifndef GUESSING_GAME_H
#define GUESSING_GAME_H

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Player {
private:
    string name;
    int guess;

public:
    Player(string playerName) {
        name = playerName;
    }

    void makeGuess() {
        cout << name << ", enter your guess: ";
        cin >> guess;
    }

    int getGuess() {
        return guess;
    }

    string getName() {
        return name;
    }
};

class Dealer {
private:
    int secretNumber;

public:
    Dealer() {
        srand(time(0)); // Seed for random number generation
        secretNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    }

    bool checkGuess(int guess) {
        if (guess < secretNumber) {
            cout << "Too low!" << endl;
            return false;
        } else if (guess > secretNumber) {
            cout << "Too high!" << endl;
            return false;
        } else {
            cout << "Correct!" << endl;
            return true;
        }
    }
};

#endif // GUESSING_GAME_H

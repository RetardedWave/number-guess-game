#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    string restart;
    int number;
    int guess;
    string diff;
    cout << "Guess a Number by Tsunami\n---------------------------------------------------------------------------------------------\n";
    do {
    cout << "You have 3 options.\n1. Easy\n2. Medium\n3. Hard\nWhich do you choose?\n";
    cin >> diff;
if(diff == "1" || "easy") {
    cout << "You must guess a number between 1 and 50\n";
    number = rand() % 50 + 1;
    do {
    cout << "What is your guess?\n";
    cin >> guess;
if(guess < number) {
    cout << "Nope. Too low.\n";
}else if(guess > number) {
    cout << "Nope. Too high.\n";
}else
    cout << "Yup. Thats it!\n";
}while (guess != number);
    cout << "Wanna restart?\n1 (yes)\n2 (no)\n";
    cin >> restart;
}else if(diff == "2" || "medium") {
    cout << "You must guess a number between 1 and 100\n";
    number = rand() % 100 + 1;
    do {
    cout << "What is your guess?\n";
    cin >> guess;
if(guess < number) {
    cout << "Nope. Too low.\n";
}else if(guess > number) {
    cout << "Nope. Too high.\n";
}else
    cout << "Yup. Thats it!\n";
}while (guess != number);
    cout << "Wanna restart?\n1 (yes)\n2 (no)\n";
    cin >> restart;
}else if(diff == "1" || "hard") {
    cout << "You must guess a number between 1 and 500\n";
    number = rand() % 500 + 1;
    do {
    cout << "What is your guess?\n";
    cin >> guess;
if(guess < number) {
    cout << "Nope. Too low.\n";
}else if(guess > number) {
    cout << "Nope. Too high.\n";
}else
    cout << "Yup. Thats it!\n";
}while (guess != number);
    cout << "Wanna restart?\n1 (yes)\n2 (no)\n";
    cin >> restart;
}else {
    cout << diff + " is not a difficulty";
}
}while (restart == "1");
return 0;
}











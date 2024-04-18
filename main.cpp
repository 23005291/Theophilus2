#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age, contenderAge;
    char gender;
    string laugh1, laugh2, height1, height2, money1, money2;

    cout << "Enter your gender (m for male or f for female): ";
    cin >> gender;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your potential partner's age: ";
    cin >> contenderAge;

    cout << "Do you want a person who makes you laugh? (yes or no): ";
    cin >> laugh1;
    cout << "Does the person make you laugh? (yes or no): ";
    cin >> laugh2;

    cout << "Do you want a tall or short person? (tall or short): ";
    cin >> height1;
    cout << "Is the person tall or short? (tall or short): ";
    cin >> height2;

    cout << "Should they have money? (yes or no): ";
    cin >> money1;
    cout << "Do they have money? (yes or no): ";
    cin >> money2;

    if (gender == 'm') {
        if (age >= 16 && age <= 25) {
            if (laugh1 == "yes" && laugh2 == "yes" && height1 == height2 && money1 == money2) {
                cout << "She's the one for you." << endl;
            } else {
                cout << "Sorry, she's not the one." << endl;
            }
        } else {
            cout << "Sorry, the age range for male contenders is 16-25." << endl;
        }
    } else if (gender == 'f') {
        if (age >= 16 && age <= 22) {
            if (laugh1 == "yes" && laugh2 == "yes" && height1 == height2 && money1 == money2) {
                cout << "He's the one for you." << endl;
            } else {
                cout << "Sorry, he's not the one." << endl;
            }
        } else {
            cout << "Sorry, the age range for female contenders is 16-22." << endl;
        }
    } else {
        cout << "Invalid input! Gender must be 'm' for male or 'f' for female." << endl;
    }

    return 0;
}

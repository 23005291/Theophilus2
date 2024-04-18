#include <iostream>

using namespace std;

int main()
{
    int age, Contender_Age,laugh, Height, money;
    char gender;

    cout<< "Enter your gender (male or female) : "<<endl;
    cin>> gender;

    cout << "Enter your age: "<<endl;
    cin >> age;

    cout << "Enter your potential partners age: "<<endl;
    cin >>  Contender_Age;

    cout << "Do want a person who makes you laugh? (1 for yes or 0 for no)"<<endl;
    cin >>  laugh;

    cout << "Do you want a tall or short person?( 1 for tall or 0 for short) "<<endl;
    cin >>  Height;

    cout << "Should they be having money? (1 for yes or 0 for no)"<<endl;
    cin >>  money;


 if (gender == 'male') {
        if (age >= 16 && age <= 25) {
            if (laugh&& Height && money) {
                cout << "shes the one for you " << endl;
            } else {
                cout << "Sorry, shes not the one " << endl;
            }
        }
    } else if (gender == 'female') {
        if (age >= 20 && age <= 35) {
            if (laugh && Height && money) {
                cout << " hes the one for you" << endl;
            } else {
                cout << "Sorry, hes not the one" << endl;
            }
        }
    } else {
        cout << "Invalid input! " << endl;
    }


    return 0;
}

/*
Aaron Garcia
Lab 2, input and output streaming,string and character variables
Jan2, 2025
*/
#include <iostream>
using namespace std;

int main(){
    cout << "\v --------- Example 1: cout and endl -----------" << endl;
    cout << "\v This is my first program!" << endl;
    cout << "\nLab 2 \t\t Varables" << endl;

    cout << "\v---------- Example 2: string variables --------" << endl;
    // declare identifier (variable name)
    string username;
    cout << username << endl;
    cout << "Initial username: " << username << endl;
    username = "Peter Pan";
    cout << "Updated username = " << username << endl;
    cout << "Enter a username: ";
    cin >> username;
    cout << "Entered username: " << username << endl;

    cout << "\v---------- Example 3: character variables --------" << endl;

    char symbol = '$';
    cout << "Initial symbol = " << symbol << endl;
    cout << "Which is your favorite symbol? ";
    cin >> symbol;
    cout << symbol << " is my favorite symbol :)" << endl;

    cout << "\v---------- EXERCISE --------" << endl;
    string country;
    char gender;

    cout << "What country are you from? " << endl;
    cin >> country;
    cout << "What is your gender,'m' for male, 'f' for female, o for other? " <<  endl;
    cin >> gender;

    cout << "Entered country:\t" << country << "\nSelected gender:\t" << gender << endl;

    return 0;
}
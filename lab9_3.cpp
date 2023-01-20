#include <iostream>
using namespace std;

string findCharacter(int age, int height, int bounty) {
    if (age < 25 && height < 100) {
        return "Chopper";
    } else if (height < 180 && height >= 100 && age <= 25 ) {
        return "Usopp";
    } else if (age <= 60 && age > 25 && bounty > 500000000) {
        return "Jinbe";
    } else if (age <= 60 && age > 25 && bounty <= 500000000) {
        return "Franky";
    } else if (age > 60) {
        return "Brook";
    } else if (height >= 180 && age < 25 && bounty > 1100000000) {
        return "Zoro";
    } else if (height >= 180 && age < 25 && bounty <= 1100000000){
        return "Sanji";
    }
    return 0;
}

int main() {
    int age = 0, height = 0, bounty = 0;

    cout << "Enter your age: ";
    cin >> age;

    if(age <= 25){
        cout << "Enter your height: ";
        cin >> height;
    }
    if ((height >= 180 && age < 25) || (age <= 60 && age > 25)){
        cout << "Enter your bounty: ";
        cin >> bounty;
    }

    cout << "Your character = " << findCharacter(age, height, bounty) << endl;
    return 0;
}

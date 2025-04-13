#include<iostream>

using namespace std;

double Balance = 2000;
int Withdraw = 0;
int Deposit = 0;
int Password = 9000;
int choice = 0;

void show() {
    cout << "********* MENU *********" << endl;
    cout << "       1. Balance" << endl;
    cout << "       2. Withdraw" << endl;
    cout << "       3. Deposit" << endl;
    cout << "       4. Exit" << endl;
}

void process() {
    int Password;
    cout << "Enter your password: ";
    cin >> Password;

    if (Password == 9000) {
        do {
            show();
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
            case 1:
                cout << "Your balance is " << Balance << endl;
                break;

            case 2:
                cout << "Note, your balance is " << Balance << endl;
                cout << "Enter the amount: ";
                cin >> Withdraw;

                if (Withdraw <= Balance) {
                    Balance -= Withdraw;
                    cout << "Your balance is " << Balance << endl;
                }
                else {
                    cout << "Sorry, you cannot do the operation" << endl;
                }
                break;

            case 3:
                cout << "Note, your balance is " << Balance << endl;
                cout << "Enter your deposit: ";
                cin >> Deposit;
                Balance += Deposit;
                cout << "Your balance is " << Balance << endl;
                break;

            case 4:
                cout << "Thank you for using the program" << endl;
                break;

            default:
                cout << "Invalid choice, please try again" << endl;
            }

        } while (choice != 4);
    }
    else {
        char option = 'S';
        cout << "Your password is wrong, Do you want to try again? Enter [y] for Yes and [n] for No: ";
        cin >> option;

        if (option == 'Y' || option == 'y') {
            process(); 
        }
        else {
            cout << "Exiting program..." << endl;
        }
    }
}

int main() {
    process();
    return 0;
}


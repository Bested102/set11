#include <iostream>
#include <map>
#include <string>
#include "utils.hpp"

using namespace std;

int main() {
    map<string, string> users;
    bool logged_in = false;

    while (true) {
        int choice;

        if (!logged_in) {
            cout << "\n1. Sign up\n";
            cout << "2. Login\n";
            cout << "3. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;

            if (choice == 1) {
                string email, password;

                cout << "Enter email: ";
                cin >> email;

                try {
                    check_email(email);
                    cout << "Enter password: ";
                    cin >> password;

                    users[email] = password;
                    cout << "Sign up successful.\n";
                } catch (runtime_error& e) {
                    cout << e.what() << endl;
                }
            }
            else if (choice == 2) {
                string email, password;

                cout << "Enter email: ";
                cin >> email;
                cout << "Enter password: ";
                cin >> password;

                if (users[email] == password) {
                    logged_in = true;
                    cout << "Login successful.\n";
                } else {
                    cout << "Invalid email or password.\n";
                }
            }
            else if (choice == 3) {
                break;
            }
        } else {
            cout << "\n1. Logout\n";
            cout << "2. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;

            if (choice == 1) {
                logged_in = false;
                cout << "Logged out.\n";
            }
            else if (choice == 2) {
                break;
            }
        }
    }

    return 0;
}

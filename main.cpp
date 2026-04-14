#include <iostream>
#include <string>
#include <stdexcept>

#include "utils.hpp"

using namespace std;

int main() {
    string email;

        cout << "Enter your email address: ";
        cin >> email;

        try {
            check_email(email);
            cout << "Valid email entered.\n";
        } catch (runtime_error& e) {
            cout << e.what() << " enter a valid email\n";
        }

    return 0;
}

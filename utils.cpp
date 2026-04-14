#include "utils.hpp"

#include <regex>
#include <stdexcept>
#include <string>

using namespace std;

void check_email(string email) {
    regex pattern(R"(^[^@]+@[^@]+\.[^@]+$)");

    if (!regex_match(email, pattern)) {
        throw runtime_error("Invalid email");
    }
}

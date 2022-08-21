#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string reverse_str(string str) {
    int len = str.length();
 
    for (int i = 0; i < len / 2; i++)
        swap(str[i], str[len - i - 1]);
    return str;
}

string lead_spaces(string input, int i) {
    string spaces{};
    int quantity{};
    quantity = round(input.size()) - i;
 

    for (int index {0}; index < quantity; index++) {
        spaces += " ";
    }
    return spaces;
}

int main() {
    string input{};
    string first_output{};
    string second_output{};
    string spaces{};

    cout << "Enter a string: ";
    getline(cin, input);

    for (int i{0}; i < input.size(); i++) {
        if (i < 1) {
            first_output = input.substr(0,i+1);
        }

        else if (i == 1) {
            first_output = input.substr(0,i+1);
            second_output = reverse_str(input.substr(0,i));
        }

        else if (i>1) {
            first_output = input.substr(0,i);
            second_output = reverse_str(input.substr(0,i+1));
        }
        spaces = lead_spaces(input, i);
        cout << spaces << first_output << second_output << endl;
    }

    return 0;
}
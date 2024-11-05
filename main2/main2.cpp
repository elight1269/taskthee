#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>

using namespace std;

struct User {
    string firstName;
    string lastName;
    int age;
    bool isStudent;
};

int main() {
    vector<User> users;
    User user;
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    char choice;
    do {
        cout << "Введіть ім'я: ";
        cin >> user.firstName;
        cout << "Введіть прізвище: ";
        cin >> user.lastName;
        cout << "Введіть вік: ";
        cin >> user.age;
        cout << "Чи є студент? (так/ні): ";
        string answer;
        cin >> answer;
        user.isStudent = (answer == "так");

        users.push_back(user);

        cout << "Бажаєте додати ще одного користувача? (т/н): ";
        cin >> choice;
    } while (choice == 'т');

    cout << "\nІнформація про користувачів:\n";
    for (const User& user : users) {
        cout << "Ім'я: " << user.firstName << endl;
        cout << "Прізвище: " << user.lastName << endl;
        cout << "Вік: " << user.age << endl;
        cout << "Студент: " << (user.isStudent ? "так" : "ні") << endl;
        cout << endl;
    }

    return 0;
}


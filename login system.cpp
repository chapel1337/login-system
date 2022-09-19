#include <iostream>
#include <string>

using std::cout; using std::string; using std::cin;

// written by chapel1337
// made on 9/19/2022
// first program made during school : )

string usernames[]{ "among us", "happy meal", "lol", "apples", "this is true" };
string passwords[]{ "123", "456", "abcd", "bananas", "i agree" };

std::string read()
{
    // credit to ROMAHKAO
    std::string s{};
    std::getline(std::cin >> std::ws, s);
    return s;
}

void success()
{
    cout << '\n';
    cout << "success!\n";
    system("exit");
}

void failure()
{
    cout << '\n';
    cout << "incorrect username or password!\n";
    system("exit");
}

void checkInput(string username, string password)
{
    bool usernameSuccess{ false };
    bool passwordSuccess{ false };

    for (int i{ 0 }; i < sizeof(usernames) / sizeof(usernames[0]); i++)
    {
        if (usernames[i] == username)
        {
            usernameSuccess = true;
        }
        else
        {
            continue;
        }
    }
    for (int o{ 0 }; o < sizeof(usernames) / sizeof(usernames[0]); o++)
    {
        if (passwords[o] == password)
        {
            passwordSuccess = true;
        }
        else
        {
            continue;
        }
    }
    if (usernameSuccess && passwordSuccess == true)
    {
        success();
    }
    else
    {
        failure();
    }
}

void menu()
{
    string inputUsername{};
    string inputPassword{};

    cout << "input username: \n";
    inputUsername = read();

    cout << "input password: \n";
    inputPassword = read();

    checkInput(inputUsername, inputPassword);
}

int main()
{
    cout << "login system\n";
    cout << "written by _\n";
    cout << '\n';

    menu();
}
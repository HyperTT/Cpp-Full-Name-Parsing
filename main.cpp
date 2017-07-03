#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool valid_name(string test)
{
    bool valid_name = true;
    for (int counter = 0; counter < test.length(); counter++)
    {
        if (isdigit(test[counter]))
        {
            valid_name = false;
        }
    }
    return valid_name;
}

int main ()
{
    string name;
    cout << "Enter your full name"<<endl;
    getline(cin, name);
    if (!valid_name(name))
    {
        cout<< "please enter valid name"<<endl;
        return 0;
    }
    int first_space = name.find_first_of(' ');
    string first = name.substr(0, first_space);
    cout <<"first name "<<first<<endl;
    int last_space = name.find_last_of(' ');
    string middle = name.substr(first_space + 1, last_space - first_space - 1);
    cout <<"middle name "<<middle<<endl;
    string last = name.substr(name.length()- last_space + 1, last_space - first_space);
    cout <<"last name "<<last<<endl;
    return 0;
}

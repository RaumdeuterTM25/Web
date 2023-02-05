#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    string s;

    cin >> s;
    for (const string& word : msg)
    {
        cout << s << " ";
    }
    cout << endl;
}

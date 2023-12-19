#include <iostream>
#include <fstream>
using namespace std;

void Insert(string data)
{

    ifstream check("./info.txt");

    ofstream file("./info.txt");

    file << data;
    file.close();
}
int main()
{

    string data;
    string answer;
    cout << "Enter your Username: ";
    cin >> data;
    data += '\n';

    cout << "Enter your Password: ";
    string pass;
    cin >> pass;
    data += pass;
    Insert(data);
    
    cout << "Your data:\n";
    ifstream readFile("./info.txt");
    readFile >> data;
    cout << "Username: " << data << endl;

    readFile >> data;
    cout << "Password: " << data;
    readFile.close();

    cout << "\nWould you like the info you entered to be removed? Y/N\n";

    cin >> answer;


    if (answer == "Y" || answer == "y")
    {
        ofstream file("./info.txt");
        file.clear();
        file.close();
    }
    else
    {
        cout << "The file has not been deleted";
    }
}
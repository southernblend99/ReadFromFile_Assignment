// ReadFromFile_Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream ReadFile, ReadFile2;
    ofstream WriteFile, WriteFile2;
    ReadFile.open("name.in"), ReadFile2.open("name2.in");
    WriteFile.open("name.out"), WriteFile2.open("name2.out");
    string fileText;
    
    //Taking multiple lines and replicating it to another file
    cout << "First Example\n";
    while (getline(ReadFile, fileText))
    {
        cout << fileText << endl;
        WriteFile << fileText << endl;
    }

    //Creating multiple variables/entries from one line in the ReadFile and then replicating it in the Write
    cout << "\n\nRunning Secondary Example\n";
    string email, firstName, lastName;
    ReadFile2 >> email >> firstName >> lastName;
    fileText = email + " " + firstName + " " + lastName;
    cout << fileText << endl;
    WriteFile2 << fileText;
    
    //Closing all files
    ReadFile.close(), ReadFile2.close();
    WriteFile.close(), WriteFile2.close();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

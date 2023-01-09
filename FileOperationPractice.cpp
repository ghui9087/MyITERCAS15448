/**
 * CSSKL 342A
 * Primitive3.cpp
 *
 * Created By Houming Ge
 *
 */
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    // Open the file for reading
    ifstream inputFile("textfile1.txt");

    // Check if the file was opened successfully
    if (!inputFile)
    {
        cerr << "Failed to open input.txt for reading" << endl;
        return 1;
    }

    // Read each integer from the file and print it to the console
    int x;
    while (inputFile >> x)
    {
        cout << x << endl;
    }

    inputFile.close();
    return 0;
}

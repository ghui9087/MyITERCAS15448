/**
 * CSSKL 342A
 * Primitive3.cpp
 *
 * Created By Houming Ge
 *
 */
#include <iostream>
using namespace std;

/**
 * Rouding Function
 *
 * For positive values
 * Round up a value if roundNumber is greater or equal to .5
 * Round down a value if roundNumber is less than .5
 *
 * For negative values
 * Round down a value if roundNumber is greater or equal to .5
 * Round up a value if roundNumber is less than .5
 */
int myRoudingFunction(double roundNumber)
{
    // If value is negative
    if (roundNumber < 0)
    {
        if (roundNumber - (int)roundNumber > -0.5)
            return (int)roundNumber;
        return (int)roundNumber - 1;
    }
    // If value is positive
    if (roundNumber - (int)roundNumber >= 0.5)
        return (int)roundNumber + 1;
    return (int)roundNumber;
}

/**
 * Main
 * some test code to testing the myRoudingFunction
 */
int main()
{
    double test0 = 2.0;
    double test1 = 3.12;
    double test2 = 4.9;
    double test3 = -52.3;
    double test4 = -2.9;
    double test5 = 0;
    double test6 = 0.5;

    // Testing if the 5 number are pass
    cout << "testing number " << test0 << " After round up: " << myRoudingFunction(test0) << endl;
    cout << "testing number " << test1 << " After round up: " << myRoudingFunction(test1) << endl;
    cout << "testing number " << test2 << " After round up: " << myRoudingFunction(test2) << endl;
    cout << "testing number " << test3 << " After round up: " << myRoudingFunction(test3) << endl;
    cout << "testing number " << test4 << " After round up: " << myRoudingFunction(test4) << endl;
    cout << "testing number " << test5 << " After round up: " << myRoudingFunction(test5) << endl;
    cout << "testing number " << test6 << " After round up: " << myRoudingFunction(test6) << endl;

    return 0;
}

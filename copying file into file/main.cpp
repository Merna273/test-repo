//
//  main.cpp
//  copying file into file
//
//  Created by Merna Abdelbadie on 11/2/20.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void copy (string org, string cp);
void input (string name);
void output ( string n);

int main()
{
    string n1, n2;
    cout << "Enter the file name:\n";
    cin >> n1;
    
    cout << "Enter the name of the file you want to copy to:\n";
    cin >> n2;
    input (n1);
    output (n1);
    copy (n1, n2);
    return 0;
}

void input ( string name)
{
    ofstream x;
    x.open(name);
    if (x.fail())
    {
        cout << "Error.\n";
        exit (1);
    }
    x << "Hello.\n";
    x << "C++ is interesting\n";
    x << "Hope you enjoy.\n" ;
}

void output (string n)
{
    ifstream y;
    string in;
    y.open(n);
    if ( y.fail())
    {
        cout << "Error.\n";
        exit(1);
    }
    while (!y.eof())
    {
        getline (y, in);
        cout << in << endl;
    }
}


void copy (string org, string cp)
{
    
    ofstream cpy;
    cpy.open (cp);
    if (cpy.fail())
    {
        cout << "Error.\n";
        exit (1);
    }
    
    ifstream y;
    string in;
    y.open(org);
    if ( y.fail())
    {
        cout << "Error.\n";
        exit(1);
    }
    while (!y.eof())
    {
        getline (y, in);
        cpy << in << endl;
    }
    cpy.close();
    y.close();
}





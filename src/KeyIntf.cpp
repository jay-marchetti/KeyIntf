//============================================================================
// Name        : KeyIntf.cpp
// Author      : Jay Marchetti
// Version     :
// Copyright   : SEI
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

vector<string> split(const string &s, char delim);


int main() {
	string cmd;

   //system("stty raw"); // seting the terminal in raw mode
   int i, done = 0;
   while(done == 0)
   {
	   cout << ">>";
	   getline(cin, cmd);
	   if (cmd == "quit")
           done = 1;
	   i++;
	   cout << "Recv'd: " << cmd << endl;
	   // Now tokenize the input string using [space] as delimiter
	   vector<std::string> x = split(cmd, ' ');
	   int j = x.size();
	   // Display results of tokenization
	   for (int m=0; m<j; m++)
	   {
		   cout << x[m] << ":";
	   }
	   cout << endl;
   }
}

vector<string> split(const string &s, char delim) {
    stringstream ss(s);
    string item;
    vector<string> tokens;
    while (getline(ss, item, delim)) {
        tokens.push_back(item);
    }
    return tokens;
}

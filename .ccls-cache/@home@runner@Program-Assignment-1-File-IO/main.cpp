#include <iostream> 
#include <fstream>
#include <string>
using namespace std;

int main()
{
  ifstream inFile;
  ofstream outFile;
  string first, last;
  double salary, raise;

  inFile.open("Ch3_Ex5Data.txt");
  outFile.open("Ch3_Ex5Output.dat");

  while (!inFile.eof())
  {
    inFile >> first >> last >> salary >> raise;
    outFile << "Employee Name: " << last << ", " << first << endl;
    outFile <<  "Current Salary: $" << salary << endl;
    outFile << "% pay rise: " << raise << "%" << endl;
    outFile << "==== New salary amount: $" << (salary * raise) + salary << "\n\n";
  }  
  
  inFile.close();
  outFile.close();
  
  return 0;
}
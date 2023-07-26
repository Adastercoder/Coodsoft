#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main()
{ 
    char filename[1024];
    cout<<"Enter your file name:-"; //enter file name in "relatice location formet" C:\\Users\\HP\\Desktop\\abc.txt
    cin>>filename;  
    ifstream inputFile(filename); 

  if (inputFile.is_open())
 {
    string line;
    int wordCount = 0;

    while (getline(inputFile, line)) {
      stringstream ss(line);
      string word;

      while (ss >> word) {
        wordCount++;
      }
    }

    inputFile.close();

    cout << "Number of words in file: " << wordCount << endl;
 } 
  else 
  {
    cout << "Failed to open the file." << endl;
  }

  return 0;
}
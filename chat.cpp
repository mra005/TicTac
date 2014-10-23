/***********************************************************
chat.cpp

CGI script to process request for a secret message.  Message
and password are stored internally
************************************************************/

#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

/***********************************************************
main
main()

Checks password and returns secret message if correct. If not
correct, returns a stern warning.
************************************************************/

main()
{ string accessType,ibuf, user,
         receivedMessage;
	ofstream myFile;
	myFile.open("chat.txt", ios::out | ios::app);
	
  ifstream inputFile;
inputFile.open("chat.txt");
 
//*** OUTPUT CONTENT TYPE HEADER
cout << "Content-Type: text/plain\n\n";

//*** ENSURE THAT POST METHOD USED TO SEND DATA
accessType = getenv("REQUEST_METHOD");
if (accessType != "POST")
   {
   cout << "ACCESS ERROR: Improper request method used..."
        << "black helicopters dispatched to your location..." << endl;
   exit(0);
   }

//*** GET AND VALIDATE PASSWORD - IF WRONG, EXIT W/ STERN MESSAGE
getline(cin,receivedMessage);
 myFile << receivedMessage << endl;
getline(inputFile, ibuf);
cout << ibuf << "</br>" << endl;
while (getline(inputFile, ibuf))
{
cout << ibuf << "</br>" << endl;
}

}
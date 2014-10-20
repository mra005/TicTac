/***********************************************************
turn.cpp

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
{ string accessType,ibuf, id, path, real, xo,
         receivedMessage;
         
	int click;
	click = 1;

//*** OUTPUT CONTENT TYPE HEADER
cout << "Content-Type: text/plain\n\n";

//*** ENSURE THAT POST METHOD USED TO SEND DATA
accessType = getenv("REQUEST_METHOD");
if (accessType != "POST")
   {
   cout << "msg| ACCESS ERROR: Improper request method used..."
        << "black helicopters dispatched to your location..." << endl;
   exit(0);
   }

//*** GET AND VALIDATE PASSWORD - IF WRONG, EXIT W/ STERN MESSAGE

getline(cin, id, '|');
getline(cin, xo);
real=id;
id+=".txt";
path="../../private/";
path+=id;

ofstream myFile(path.c_str());
 myFile << xo << endl;

	 
ifstream inputFile(path.c_str());
getline(inputFile, ibuf);
cout << ibuf << endl;

}
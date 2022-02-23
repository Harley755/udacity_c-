/*Goal: practice using stringstream
/*Goal: practice getting string inputs and 
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room. 
 **Then prompt for the width of the room.
 **Print out the area of the room. 
 */

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string stringLength, stringWidth;
    float length = 0;
    float width = 0;
    
    cout<<"What is the width of the room : ";
    getline(cin, stringWidth);
    stringstream(stringWidth) >> width;
    cout<<width<<endl;
    
    cout<<"What is the length of the room : ";
    getline(cin, stringLength);
    stringstream(stringLength) >> length;
    cout<<length<<endl;
    
    cout<<"The area of the room is : "<< width * length<<endl;
}
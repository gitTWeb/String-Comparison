#include <iostream>
#include <string>
using namespace std;
void stringcompare(string one, string two);
int main (){
    string x;
    string y;
    cout << "enter string one and string: ";
    cin >> x;
    cin >> y;
    stringcompare(x,y);
    return 0;
}

void stringcompare(const string one, const string two){
    string onecpy = one;
    string twocpy = two;
   for (short i = 0; i < onecpy.length(); i++ ){
       onecpy[i] = tolower(static_cast<unsigned char>(onecpy[i]));
   }
   for (short i = 0; i < twocpy.length(); i++ ){
        twocpy[i] = tolower(static_cast<unsigned char>(twocpy[i]));
   }
   if(onecpy < twocpy){
        cout << "string 1 less than string 2\n";
   }
   else if (onecpy > twocpy){
    cout << "string 1 more than string 2\n";
   }
   else{
    cout << "string 1 equal to string 2\n";
   }
}
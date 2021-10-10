// you want to include <string>
#include <string>
#include <iostream>

int main() 
{
  string helloWorld = "Hello World!"; // creating string and assigning
  std::cout << helloWorld;            // will output what you assigned it!
                                      /* you can also use strings with user 
                                      input (cin/getline)*/
  string namePerson{};
  getline(cin, namePerson); // getline allows for multi word input
  std::cout << namePerson;  // outputs name which person inputted
}
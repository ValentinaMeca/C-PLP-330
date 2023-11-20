#include <iostream> //used to include a file in our program and we need it to use count
#include <string> //used to include a file in our program and we need it to use count
int main() { //start a function
   std::string pet ="Hamster"; //A pet variable of a type
   std:: string* point = &pet; //// A pointer variable, with the name point, that stores the address of pet
   std::cout << pet << "\n"; // Output the value of pet (Hamster)
   std::cout << &pet << "\n";  // Output the memory address of pet 
   std::cout << point << "\n"; // Output the memory address of pet with the pointer
}
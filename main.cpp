#include <iostream>
using namespace std;

#include "student.h"


int main(int argc, char* argv[]) {
  student s1,s2;
  student a[10]; //total = 12 student
  //s1.name="PUN";  // ERROR, it is in private
   s1.set_name("Pun"); //make a default value to your name 	
  s1.set_age(12); 
		s2.set_name("Joe");
    s2.set_age(15);

   s1.get_age()>s2.get_age() ?
    s1.print_name():
    s2.print_name();
  cout <<"is older";
   
  return 0;
    
  }
  



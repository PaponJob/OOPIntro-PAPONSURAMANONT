class student{
private:
  long id;
  string name;
  int age;

public:
  void set_name(string="n");
  void print_name(); // this is the equivalent of Cout
  void set_age(int);
  int get_age();
};
void student::set_name(string n){name=n;}

void student::print_name(){
  cout<<"Name:"<<name<<endl;
}
void student::set_age(int n){age=n;}
int student::get_age(){
  return age;
}
// some comment here
#include <iostream>

//Making some changes

class Human
{
private:
  // internal private variables
  int age;
  std::string name;

public:
  // public facing variables
  int personAge;
  std::string personName;

  // methods
  void getName(); //std::cout << name << std::endl;
  void getAge(); //std::cout << age << std::endl;
  void setAge(int newAge); //name = newName;
  void goToRestroom() std::cout << "Flush" << std::endl;
  // constructor with list initialization
  Human(std::string personName, int personAge): age(personAge),name(personName)
  {
    std::cout << "Person: " << name << "\t" << age << std::endl;
  }

};

void Human::getName()
{
  std::cout << name << std::endl;
}
void Human::getAge()
{
  std::cout << age << std::endl;
}
void Human::setAge(int newAge)
{
  age = newAge;
}

int main()
{
  // Define person John
  Human John("John",19);
  John.getName();
  John.getAge();
  John.setAge(20);
  John.getAge();
  // Define person Pete
  Human Pete("Pete",16);
  Pete.getName();
  Pete.getAge();
  Pete.setAge(17);
  Pete.getAge();
  return 0;

}

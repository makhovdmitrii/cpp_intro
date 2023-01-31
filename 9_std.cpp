#include <iostream>
#include <string>
#include <vector>


class Person {
protected:
	int age;
	std::string name;
public:	
	Person(int age_, std::string name_)
	{
		age = age_;
		name = name_;
	}
	virtual void print() const = 0;
	void hello() const
	{
		std::cout << "It's a person family.\n";
	}
};
class Student : public Person {
public:	
	Student(int age, std::string name) : Person(age, name)
	{}
	void print() const
	{
		std::cout << "Hi! I'm " << name << " of " << age << " years old!\n";
	}
};
class Teacher : public Person {
public:	
	Teacher(int age, std::string name) : Person(age, name)
	{}
	void print() const
	{
		std::cout << "Hello! I'm " << name << " of " << age << " years old!\n";
	}
};

int main()
{
	
	std::vector<Person*> people = {
								new Student(18, "John"),
								new Teacher(36, "Mark"),
								new Student(18, "Marry")
								};
	for (int i = 0; i < people.size(); i++)
		people[i]->print();
	people.push_back(new Teacher(36, "Timofey"));
	for (auto x : people) // C++11 "for" style
	{
		x->print();
	}
	for (int i = 0; i < people.size(); i++)
		delete people[i];
	
	return 0 ;
}


#include <cstdio>
#include <cstring>

class Person {
protected:
	int age;
	char name[30];
public:	
	virtual void print() const = 0;
	void hello() const
	{
		printf("It's a person family.\n");
	}
};
class Student : public Person {
public:	
	Student(int age, const char *name)
	{
		this->age = age;
		strcpy(this->name, name);
	}
	void print() const
	{
		printf("Hi! I'm %s of %d years old!\n", this->name, this->age);
	}
};
class Teacher : public Person {
public:	
	Teacher(int age, const char *name)
	{
		this->age = age;
		strcpy(this->name, name);
	}
	void print() const
	{
		printf("Hello! I'm %s of %d years old!\n", this->name, this->age);
	}
};

int main()
{
	Student a(18, "John");
	Teacher b(36, "Mark");
	Student c(18, "Marry");
	
	Person *people[3] = {&a, &b, &c};
	for (int i = 0; i < 3; i++)
		people[i]->print();
	
	a.hello();
	b.hello();
	
	return 0 ;
}


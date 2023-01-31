#include <cstdio>
#include <cstring>

class Student {
private:
	int age;
	char name[30];
public:	
	void init(int age, const char *name);
	void print() const;
};
void Student::init(int age, const char *name)
{
	this->age = age;
	strcpy(this->name, name);
}
void Student::print() const
{
	printf("Hi! I'm %s of %d years old!\n", this->name, this->age);
}
class Teacher {
private:
	int age;
	char name[30];
public:	
	void init(int age, const char *name);
	void print() const;
};
void Teacher::init(int age, const char *name)
{
	this->age = age;
	strcpy(this->name, name);
}
void Teacher::print() const
{
	printf("Hello, I'm %s of %d years old!\n", this->name, this->age);
}

int main()
{
	Student a;
	Teacher b;
	Student c;
	
	a.init(18, "John");
	b.init(36, "Mark");
	c.init(18, "John");
	
	a.print();
	b.print();
	c.print();
	
	return 0 ;
}

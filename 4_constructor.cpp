#include <cstdio>
#include <cstring>

class Student {
private:
	int age;
	char name[30];
public:	
	Student(int age, const char *name);
	void print() const;
};
class Teacher {
private:
	int age;
	char name[30];
public:	
	Teacher(int age, const char *name);
	void print() const;
};
Student::Student(int age, const char *name)
{
	this->age = age;
	strcpy(this->name, name);
}
void Student::print() const
{
	printf("Hi! I'm %s of %d years old!\n", this->name, this->age);
}
Teacher::Teacher(int age, const char *name)
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
	Student a(18, "John");
	Teacher b(36, "Mark");
	Student c(18, "Marry");
	
	a.print();
	b.print();
	c.print();
	
	return 0 ;
}

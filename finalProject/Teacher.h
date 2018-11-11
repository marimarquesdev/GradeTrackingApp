#ifndef TEACHER_H
#define TEACHER_H
#include<iostream>
#include<string>
#include<iomanip>
#include<Windows.h>
using namespace std;

struct Course
{
	string courseNumber = "";
	string courseTitle = "";
	int courseGroup = 0;
	int numberStudents = 0; //create a function to count when a student is insert into a course
	string session = "";
};

struct Teacher
{
	
	int teacherId = 0;
	string teacherName = "";
};

struct User
{
	int username = 0;
	string password = "";
};

struct Student
{
	int studentId = 0;
	string firstName = "";
	string lastName = "";
	float projectGrade = 0.0f;
	float midtermGrade = 0.0f;
	float finalExamGrade = 0.0f;
};

void DisplayMenu();
void GetCourses(Course);
short SetMenuOption(short);
void SetStudentData(Course, Student, User);
void PrintSummary(Course, Teacher);
void GetListStudents(Student);
void SortStudents(Student);
char QuitApp(char);

#endif

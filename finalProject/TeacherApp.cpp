#include "Teacher.h"


void DisplayMenu()
{
	cout << "COURSE EVALUATION"<< endl;
	cout << "Option 1: List all the courses you are teaching" << endl;
	cout << "Option 2: Enter students grades" << endl;
	cout << "Option 3: Search a students grades by Student ID / Firstname / Lastname / Firstname and Lastname" << endl;
	cout << "Option 4: Sort the student list by Student ID in ascending order" << endl;
	cout << "Option 5: List all the students grades" << endl;
	
}

short SetMenuOption(short choice)
{
	cout << "Enter your choice: ";
	cin >> choice;
	return choice;
}


void GetCourses(Course course)
{
	cout << course.courseNumber << "\t";
	cout << course.courseTitle << "\t\t";
	cout << course.courseGroup<<endl;
}

void SetStudentData(Course aCourse, Student aStudent, User aUser)
{
	cout << "\n\tEnter the student ID: ";
	cin >> aStudent.studentId;
	cin.ignore();

	cout << "\n\tEnter the first name: ";
	getline(cin, aStudent.firstName);

	cout << "\n\tEnter the last name: ";
	getline(cin, aStudent.lastName);

	cout << "\n\tEnter the project grade: ";
	cin >> aStudent.projectGrade;

	cout << "\n\tEnter the midterm exam grade: ";
	cin >> aStudent.midtermGrade;

	cout << "\n\tEnter the final exam grade: ";
	cin >> aStudent.finalExamGrade;

	aUser.username = aStudent.studentId;

	cout << "\n\tEnter the password: ";
	cin >> aUser.password;
	system("cls");
}


void PrintSummary(Course aCourse, Teacher aTeacher)
{
	
	cout << "Course Number: " << aCourse.courseNumber << endl;
	cout << "Course Title: " << aCourse.courseTitle << endl;
	cout << "Teacher: " << aTeacher.teacherName << endl;
	cout << "Session: " << aCourse.session << endl;
	cout << "Group: " << aCourse.courseGroup << endl;
	cout << "ASSESSMENT SUMMARY" << endl;
	cout << "Student ID\t" << "Student Name\t" << "Project\t" << "Midterm\t" << "Final Exam\t" << "Final Result\t" << endl;
	cout << "----------\t" << "-----------\t" << "------\t" << "-------\t" << "--------\t" << "-----------\t" << endl;
}

void GetListStudents(Student student)
{
	cout << student.studentId << student.firstName << student.lastName << student.projectGrade << student.midtermGrade
		<< student.finalExamGrade;
}

void SortStudents(Student aStudent[])
{
	int size = 2;
	for (short i = 0; i < size - 1; i++)
	{
		for (short j = 1; j < size ; j++)
		{
			if ((aStudent[i].studentId)>(aStudent[j].studentId))
			{
				Student tempStudent = aStudent[i];
				aStudent[i] = aStudent[j];
				aStudent[j] = tempStudent;
			}
		}
	}
}

char QuitApp(char ans)
{
	cout << "\n\n\tDo you really want to exit the application(Y/N)? ";
	cin >> ans;
	if ((ans == 'Y')||(ans=='y'))
	{
		return 1;
	}else 
	{
		if (ans =='N'||ans =='n')
		{
			return 0;
		}else 
		{
			cout << "\n\tInvalid Option";
		}
	}
}



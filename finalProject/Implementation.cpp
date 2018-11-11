#include "Teacher.h"
#include "Student.h"
#define size 2

int main()
{
	
	DisplayMenu();

	Course course1;
	course1.courseNumber = "420-P16-AS";
	course1.courseTitle = "Structured Programming";
	course1.courseGroup = 7052;
	course1.session = "Winter 2018";

	Course course2;
	course2.courseNumber = "420-P16-AS";
	course2.courseTitle = "Structured Programming";
	course2.courseGroup = 7154;
	course1.session = "Winter 2018";

	Course course3;
	course3.courseNumber = "420-P65-AS";
	course3.courseTitle = "Internet Programming II";
	course3.courseGroup = 7064;
	course1.session = "Winter 2018";

	Teacher teacher;
	teacher.teacherName = "Quang Hoang Cao";

	Student student[size];
	User user[size];

	short choice = 1;

	switch (SetMenuOption(choice))
	{
	case 1:
		
		cout << "Course Number" << "\t\t" << "Course Title" << "\t\t" << "Group" << endl;
		GetCourses(course1);
		GetCourses(course2);
		GetCourses(course3);
		break;
	case 2:
		cout << "\n\n\t\tEnter students grades for a given course" << endl;
		for (int i = 0; i < size; i++)
		{
			SetStudentData(course1, student[i], user[i]);
		}
		break;
	case 3:
		cout << "Search a students grades by Student ID / Firstname / Lastname / Firstname and Lastname";
		break;
	case 4:
		cout << "Sort the student list by Student ID in ascending order";
		SortStudents(student[size]);

		break;
	case 5:
		PrintSummary(course1, teacher);
		for (int i = 0; i < size; i++)
		{
			GetListStudents(student[i]);
		}
		
		break;
	case 6:
		QuitApp(0);

	default:
		break;
	}

	cout << "\n\n\tPress any key to EXIT the application ";
	system("pause>>null");
	return 0;

}
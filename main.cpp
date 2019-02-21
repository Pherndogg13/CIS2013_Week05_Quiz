#include <iostream>
#include <string>

using namespace std;

const int MAX = 30;

int student[MAX];
string name[MAX];

void addStudent(int x){
	cout << "Enter student " << x+1 << "'s name ";
	cin >> name[x];
}

void setGrade(int g){
	cout << "Enter student " << g+1 << "'s name ";
	cin >> name[g];
	cout << " Enter " << name[g] << "'s grade: ";
	cin >> student[g];
}

void printGrade(int g){
	cout << name[y] << "'s grade is " << student[y] << endl;
}


int main(){
	
	char add = 'A';
	char set = 'B';
	char print = 'C';
	
	cout << " What do you want to do?";
	
	do {
		cout << " (A)add" << endl <<" (B)Set a Students Grade" << endl << " (C) Print all grades" << endl;
		cin >> add;
		switch ( add ) {
		case 'a' || 'A':
		addStudent(int x);
		break;
	case 'b':
	case 'B':
		setGrade(int g)
	break;
	case 'c':
	case 'C':
		printGrade(int g)
	
	int LEN;
	
	cin >> LEN;

	
	int students[LEN];
	string name[LEN] = {"Bob", "Jill"};
	
	for(int i=0; i<LEN; i++){
		Student[i];
	}
	
		for(int s=0; s<LEN; s++){
			printGrade(j);
	}
	
	return 0;
}

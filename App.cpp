#include <iostream>
#include <string>
using namespace std;

/* ===== Personality Functions ===== */

void istj(){ 
	cout << "ISTJ Personality:\n";
	cout << "Likes rules\nHonest and reliable\nOrganized in work\n";
}

void isfj(){
	cout << "ISFJ Personality:\n";
	cout << "Cares for others\nCalm and loyal\n";
}

void infg(){
	cout << "INFG Personality:\n";
	cout << "Deep thinker\nEnjoys helping others\n";
}

void intj(){
	cout << "INTJ Personality:\n";
	cout << "Very intelligent\nPlans for the future\n";
}

void istp(){
	cout << "ISTP Personality:\n";
	cout << "Technical thinker\nCalm and independent\n";
}

void isfp(){ 
	cout << "ISFP Personality:\n";
	cout << "Loves art\nSensitive and kind\n";
}

void infp(){
	cout << "INFP Personality:\n";
	cout << "Loyal to values\nCreative mind\n";
}

void intp(){
	cout << "INTP Personality:\n";
	cout << "Scientific and analytical\nCreates new ideas\n";
}

void estp(){
	cout << "ESTP Personality:\n";
	cout << "Risk-taker\nQuick decision-maker\n";
}

void esfp(){ 
	cout << "ESFP Personality:\n";
	cout << "Energizes social events\nMakes people happy\n";
}

void enfp(){
	cout << "ENFP Personality:\n";
	cout << "Creative\nLoves people\n";
}

void entp(){ 
	cout << "ENTP Personality:\n";
	cout << "Innovative\nEnjoys discussions\n";
}

void estj(){
	cout << "ESTJ Personality:\n";
	cout << "Leads others\nFollows rules and structure\n";
}
 
void esfj(){
	cout << "ESFJ Personality:\n";
	cout << "Cares for others\nFriendly\n";
}
 
void enfj(){
	cout << "ENFJ Personality:\n";
	cout << "Motivates people\nStrong leadership skills\n";
}
 
void entj(){
	cout << "ENTJ Personality:\n";
	cout << "Strong leader\nFocuses on achieving goals\n";
}

/* ===== Main Program ===== */

int main(){
	string name;
	string question;
	string personality = "";

	cout << "Enter your name: ";
	cin >> name;

	// Question 1
	cout << "\n1) ALONE or PEOPLE? ";
	cin >> question;
	if(question == "ALONE" || question == "alone") personality += "I";
	else if(question == "PEOPLE" || question == "people") personality += "E";
	else { cout << "Wrong input\n"; return 0; }

	// Question 2
	cout << "\n2) FACTS or IDEAS? ";
	cin >> question;
	if(question == "FACTS" || question == "facts") personality += "S";
	else if(question == "IDEAS" || question == "ideas") personality += "N";
	else { cout << "Wrong input\n"; return 0; }

	// Question 3
	cout << "\n3) HEAD or HEART? ";
	cin >> question;
	if(question == "HEAD" || question == "head") personality += "T";
	else if(question == "HEART" || question == "heart") personality += "F";
	else { cout << "Wrong input\n"; return 0; }

	// Question 4
	cout << "\n4) PLANS or FREEDOM? ";
	cin >> question;
	if(question == "PLANS" || question == "plans") personality += "J";
	else if(question == "FREEDOM" || question == "freedom") personality += "P";
	else { cout << "Wrong input\n"; return 0; }

	cout << "\n\nName: " << name;
	cout << "\nYour Personality Type: " << personality << "\n\n";

	/* ===== Personality Selection ===== */

	if(personality == "ISTJ") istj();
	else if(personality == "ISFJ") isfj();
	else if(personality == "INFG") infg();
	else if(personality == "INTJ") intj();
	else if(personality == "ISTP") istp();
	else if(personality == "ISFP") isfp();
	else if(personality == "INFP") infp();
	else if(personality == "INTP") intp();
	else if(personality == "ESTP") estp();
	else if(personality == "ESFP") esfp();
	else if(personality == "ENFP") enfp();
	else if(personality == "ENTP") entp();
	else if(personality == "ESTJ") estj();
	else if(personality == "ESFJ") esfj();
	else if(personality == "ENFJ") enfj();
	else if(personality == "ENTJ") entj();
	else cout << "Personality not found!\n";

	return 0;
}

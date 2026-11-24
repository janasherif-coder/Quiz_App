#include <iostream>
#include <string>
using namespace std;

struct questions{
    string question;
    string choice[3];
    char correct;
};

struct player{
    string name;
    int score;
};

void displayQuestion(questions q){
    cout << q.question << endl;

    for(int i = 0; i < 3; i++){
        cout << q.choice[i];
    }
}

void checkAnswer(questions q, player &p){
    char choice;

    cout << "Enter your answer (a, b, c): ";
    cin >> choice;

    if(choice == q.correct){
        cout << "Correct!" << endl;
        p.score++;
    }
    else{
        cout << "Incorrect! The correct answer is: "
             << q.correct << endl;
    }
}

int main(){
    cout << "===== Quiz App =====" << endl;
    player p;
    cout << "Name: ";
    getline(cin , p.name);
    p.score = 0;

    questions q1 , q2 , q3 , q4 , q5;

    q1.question = "Q1: What does OOP stand for?";

    q1.choice[0] = "a) Object Oriented Programming\n";
    q1.choice[1] = "b) Only One Program\n";
    q1.choice[2] = "c) Open Output Protocol\n";

    q1.correct = 'a';
    displayQuestion(q1);
    checkAnswer(q1, p);

    cout << "===========================" << endl;

    q2.question = "Q2: Which keyword defines a class in C++?";

    q2.choice[0] = "a) function\n";
    q2.choice[1] = "b) class\n";
    q2.choice[2] = "c) struct only\n";

    q2.correct = 'b';
    displayQuestion(q2);
    checkAnswer(q2, p);
    
    cout << "===========================" << endl;

    q3.question = "Q3: What is encapsulation in OOP?";

    q3.choice[0] = "a) Hiding data\n";
    q3.choice[1] = "b) One interface with multiple forms\n";
    q3.choice[2] = "c) Copying variables\n";

    q3.correct = 'a';
    displayQuestion(q3);
    checkAnswer(q3, p);
   
    cout << "===========================" << endl;

    q4.question = "Q4: Which access specifier provides restricted access to class members?";

    q4.choice[0] = "a) Public\n";
    q4.choice[1] = "b) Private\n";
    q4.choice[2] = "c) Protected\n";

    q4.correct = 'b';
    displayQuestion(q4);
    checkAnswer(q4, p);

    cout << "===========================" << endl;

    q5.question = "Q5: What is the purpose of a destructor?";

    q5.choice[0] = "a) Initialize an object\n";
    q5.choice[1] = "b) Inherite properties\n";
    q5.choice[2] = "c) Destroy an object and release resources\n";

    q5.correct = 'c';
    displayQuestion(q5);
    checkAnswer(q5, p);
    cout << "===== Quiz Results =====" << endl;
    cout << "Player name: " << p.name << endl;
    cout <<"Score: " << p.score << "/5" << endl;
    cout << "Percentage: " << (p.score / 5.0) * 100 << "%" << endl;
    if(p.score == 5){
        cout << "Excellent! You got all answers correct!" << endl;
    }
    else if(p.score >= 3){
        cout << "Good job! You passed the quiz." << endl;
    }
    else{
        cout << "Better luck next time!" << endl;
    }
    cout << "===========================" << endl;
    
    return 0;
}
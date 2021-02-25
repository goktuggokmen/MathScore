
#include <iostream>
#include <cmath>
#include<stdlib.h>
#include<time.h>
using namespace std;
#include "Mathscoreclass.h"

Mathscoreclass:: Mathscoreclass() {


}

int Mathscoreclass:: rastgeleSayi(int alt_limit,int ust_limit){
	int rnd;
	srand(time(0));
	rnd=alt_limit+rand()%(ust_limit-alt_limit);
	return rnd;
}

bool Mathscoreclass::toplama(){
	int cevap;
	int alt_limit = 0;
	int ust_limit = 100;
	int x = rastgeleSayi(alt_limit,ust_limit),y = rastgeleSayi(alt_limit,ust_limit+1);
	cout << x << "+" << y << "=";
	cin >> cevap;
	if(cevap == (x+y)){
		sayac +=10;
		cout << "Right answer. You earned 10 points......" <<"TOTAL POINTS =" << sayac << endl;
		return true;
	}else{
		sayac -=5;
		cout << " Wrong answer. You lost 5 points..." << " RIGHT ANSWER  = " << x+y << " \n"  "TOTAL POINTS=" << sayac << endl;
		return false;
	}
}

bool Mathscoreclass::cikarma(){
	int cevap;
	int alt_limit = 0;
	int ust_limit = 100;
	int x = rastgeleSayi(alt_limit,ust_limit),y = rastgeleSayi(alt_limit,ust_limit+1);
	cout << x << "-" << y << "=";
	cin >> cevap;
	if(cevap == (x-y)){
		sayac +=10;
		cout << "Right answer. You earned 10 points......" <<"TOTAL POINTS =" << sayac << endl;
		return true;
	}else{
		sayac -=5;
		cout << "Wrong answer .You lost 5 points..." << " RIGHT ANSWER  = " << x-y << " \n"  "TOTAL POINTS =" << sayac << endl;
		return false;
	}
}

bool Mathscoreclass:: carpma(){
	int cevap;
	int alt_limit = 0;
	int ust_limit = 20;
	int x = rastgeleSayi(alt_limit,ust_limit),y = rastgeleSayi(alt_limit,ust_limit+1);
	cout << x << "*" << y << "=";
	cin >> cevap;
	if(cevap == (x*y)){
		sayac +=10;
		cout << "Right answer. You earned 10 points......" <<"TOTAL POINTS =" << sayac << endl;
		return true;
	}else{
		sayac -=5;
		cout << "Wrong answer . You lost 5 points ...." << "RIGHT ANSWER = " << x*y << " \n"  "TOTAL POINTS=" << sayac << endl;

		return false;
	}
}

bool Mathscoreclass:: kare(){
	int cevap;
	int alt_limit = 0;
	int ust_limit = 17;
	int x = rastgeleSayi(alt_limit,ust_limit);
	cout << x <<"² =";
	cin >> cevap;
	if(cevap == (x*x)){
		sayac +=10;
		cout << "Right answer. You earned 10 points....." <<"TOTAL POINTS =" << sayac << endl;
		return true;
	}else{
		sayac -=5;
		cout << "Wrong answer.You lost  5 points.." <<"RIGHT ANSWER  = " << x*x << " \n"  "TOTAL POINTS =" << sayac << endl;
		return false;
	}
}

bool Mathscoreclass::karekok(){

	int cevap;
	int alt_limit = 0;
	int ust_limit = 17;
	int x = rastgeleSayi(alt_limit,ust_limit);
	int limit[]={1,4,9,16,25,36,49,64,81,100,121,144,169,196,225,256,400,900};
	cout << "√ " << limit[x] << "=";
	cin >> cevap;
	if(cevap == (sqrt(limit[x]))){
		sayac +=10;
		cout << "Right answer. You earned 10 points....." << "\n" << "TOTAL POINT =" << sayac << endl;
		return true;
	}else{
		sayac -=5;
		cout << ".Wrong answer . You lost 5 points.." << "RIGHT ANSWER = " << sqrt(x)<< " \n" << "TOTAL POINT = " << sayac << endl;
		return false;
	}

}
bool  Mathscoreclass::bolme(){

	int cevap;
	int alt_limit =0;
	int ust_limit = 5;
	int r = rastgeleSayi(0,13);
	int katlar[] = {1,2,3,5,7,11,13,17,19,23,29,31,37};
	int x = rastgeleSayi(alt_limit*katlar[r],ust_limit*katlar[r]),y = rastgeleSayi(alt_limit,ust_limit);
	cout << x << "/" << y << "=";
	cin >> cevap;
	if(cevap == (x/y)){
		sayac +=10;
		cout << "Right answer. You earned 10 points....." << "\n" << "TOTAL POINT =" << sayac << endl;
		return true;
	}else{
		sayac -=5;
		cout << ".Wrong answer . You lost 5 points..." << " RIGHT ANSWER = " << x/y << " \n" << "TOTAL POINT = " << sayac << endl;
		return false;
	}


}

bool Mathscoreclass::kup(){
	int cevap;
	int alt_limit = 0;
	int ust_limit = 6;
	int x = rastgeleSayi(alt_limit,ust_limit);
	cout << x <<"^3 =";
	cin >> cevap;
	if(cevap == (x*x*x)){
		sayac +=10;
		cout << "Right answer. You earned 10 points....." << "\n" << "TOTAL POINT =" << sayac << endl;
		return true;
	}else{
		sayac -=5;
		cout << "Wrong answer . You lost 5 points..." << "RIGHT ANSWER = " << x*x*x << " \n" << "TOTAL POINT= " << sayac << endl;
		return false;
	}

}

void Mathscoreclass:: details(){
	cout << "Welcome to the MathScore game. " << endl;
	cin.ignore();
	cout <<" In this game, your goal is to reach 100 points or higher by correctly answering the mathematical "
			" operations,you will lose the game when you fall below -50 points." << endl;
	cin.ignore();
	cout <<"You earn 10 points for every question you answered correctly"
			" and you lose 5 points for the questions you answered wrong." << endl;
	cin.ignore();

}

int  Mathscoreclass:: rastgeleFonksiyon(int sayi){
	int rnd;
	srand(time(0));
	rnd=1+rand()%(sayi);
	return rnd;
}


void Mathscoreclass::basla(){
	while(sayac <=99 || sayac <= -49){
		int fonksiyon_sayisi = 7;
		int r = rastgeleFonksiyon(fonksiyon_sayisi);
		switch(r){
		case 1: toplama(); break;
		case 2: cikarma(); break;
		case 3: carpma(); break;
		case 4: bolme(); break;
		case 5: kare(); break;
		case 6: kup(); break;
		case 7: karekok(); break;

		}
	}
}



#ifndef MATHSCORECLASS_H_
#define MATHSCORECLASS_H_

class Mathscoreclass {
public:
	Mathscoreclass();
	bool toplama();
	bool cikarma();
	bool carpma();
	bool bolme();
	bool karekok();
	bool kare();
	bool kup();
	int rastgeleSayi(int,int);
	int rastgeleFonksiyon(int);
	void basla();
	void details();
private :
	int sayac=0;

};

#endif /* MATHSCORECLASS_H_ */

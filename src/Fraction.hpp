/*
 * Fraction.hpp
 *
 *  Created on: 16 mai 2014
 *      Author: xxx
 */

#ifndef FRACTION_HPP_
#define FRACTION_HPP_

#include <string>
#include <vector>

using namespace std;

class Fraction {
public:
	Fraction();
	Fraction(int n, int d);
	virtual ~Fraction();
	void setn(const int n);
	void setd(const int d);
	const int getn();
	const int getd();
	string Afficher();
	string toString(const int nb);
	void addition(int add);
	void addition(const Fraction&);


private:
	int numerateur;
	int denominateur;
};





#endif /* FRACTION_HPP_ */

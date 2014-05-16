/*
 * Fraction.cpp
 *
 *  Created on: 16 mai 2014
 *      Author: xxx
 */

#include "Fraction.hpp"

#include <string>
#include <sstream>

Fraction::Fraction() {
	// TODO Auto-generated constructor stub

}

Fraction::Fraction(int n,int d){
}

Fraction::~Fraction() {
	// TODO Auto-generated destructor stub
}


const int Fraction::getn()const
{
    return numerateur;
}

const int Fraction::getd()const
{
    return denominateur;
}

void Fraction::setn(const int n){
    numerateur = n;
}

void Fraction::setd(const int d){
    denominateur = d;
}

string Fraction::toString(const int nb)
{
   std::ostringstream oss;
   oss << nb;
   return oss.str();
}

string Fraction::Afficher()
{
	string toto = "" + toString(this->numerateur) + "/" + toString(this->denominateur);

	return toto;
}


void Fraction::addition(const int add)
{
	int n_fraction = add;
	    int d_fraction = 1;
	    int n_result = this->numerateur*this->denominateur+n_fraction*d_fraction;
	    int d_result = this->denominateur*d_fraction;
	    setn(n_result);
	    setd(d_result);
}
void Fraction::addition(const Fraction& ma_fraction)
{
    int n_fraction = ma_fraction.getn();
    int d_fraction = ma_fraction.getd();
    int n_result = this->numerateur*this->denominateur+n_fraction*d_fraction;
    int d_result = this->denominateur*d_fraction;
    setn(n_result);
    setd(d_result);

}
void Fraction::operator+(const Fraction& ma_fraction)
{
	addition(ma_fraction);
}
void Fraction::operator+(int ope)
{
	addition(ope);
}






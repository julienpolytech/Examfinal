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


const int Fraction::getn(){
    return numerateur;
}

const int Fraction::getd(){
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

void Fraction::addition(int add)
{

}
void Fraction::addition(const Fraction&)
{

}






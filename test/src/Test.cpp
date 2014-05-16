#include <iostream>
#include <string>
#include <vector>

#include <gtest/gtest.h>
#include "../../src/Fraction.hpp"

TEST(stringAfficher, testLineContent) {
	Fraction *fraction = new Fraction(3,2);
	EXPECT_EQ("3/2",fraction->Afficher());
	//EXPECT_EQ(0,aCsv->testLineContent("mauvaise ligne 0000"));
}

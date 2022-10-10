#ifndef Degree_h
#define Degree_h
#pragma once
#include <string>

enum DegreeType { SECURITY, NETWORK, SOFTWARE };

/*Parralell array pops out a string for each degree type; use degree type as an index*/
static const std::string degreeTypeStrings[] = { "SECURITY", "NETWORK", "SOFTWARE" };

#endif
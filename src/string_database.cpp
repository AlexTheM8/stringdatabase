//============================================================================
// Name        : data_store.cpp
// Author      : Alex Rhodes
// Version     :
// Copyright   :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "../includes/string_database.h"

String_Database::String_Database(void) {

}

String_Database::~String_Database(void) {

}

void String_Database::add(std::string &myString) {

}

int String_Database::getCount(std::string &myString) {
	return 0;
}

void String_Database::clear() {
	myStrings.clear();
}

bool String_Database::load(DataStore *myDataStore) {
	if (myDataStore == 0) {
		return false;
	}


	return true;
}

bool String_Database::save(DataStore *myDataStore) {
	if (myDataStore == 0) {
		return false;
	}

	return true;
}


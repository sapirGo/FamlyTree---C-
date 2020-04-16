#include "FamilyTree.hpp"
#include "doctest.h"
#include <iostream>
#include <string>
using namespace std;
using namespace family;


//Test.cpp -> to test our functions





Tree buildTree(){
    Tree T ("Yosef"); // buliding tree same as demo.cpp -> Yosef root
	T.addFather("Yosef", "Yaakov")   //Yakov dad of Yosef
	 .addMother("Yosef", "Rachel")   //Rachel mom of Yosef
	 .addFather("Yaakov", "Isaac")
	 .addMother("Yaakov", "Rivka")
	 .addFather("Isaac", "Avraham")
	 .addFather("Avraham", "Terah");
     return T;

}

TEST_CASE("AddFather function"){ 
	Tree T = buildTree();
T.addFather("Rivka", "david");
	CHECK(T.find("father") == string("david"));
	CHECK(T.relation("david") == string("father"));
	T.addFather("david", "si");
	CHECK(T.find("father") == string("si"));
	CHECK(T.relation("si") == string("father"));
	T.addFather("si", "don");
	CHECK(T.find("father") == string("don"));
	CHECK(T.relation("don") == string("father"));
	T.addFather("don", "aric");
	CHECK(T.find("father") == string("aric"));
	CHECK(T.relation("aric") == string("father"));
	T.addFather("aric", "bob");
	CHECK(T.find("father") == string("bob"));
	CHECK(T.relation("bob") == string("father"));
	T.addFather("bob", "sap");
	CHECK(T.find("father") == string("sap"));
	CHECK(T.relation("sap") == string("father"));
	CHECK_THROWS(T.addFather("yaakov", "frank"));
	CHECK_THROWS(T.addFather("yaakov", "franka"));
	CHECK_THROWS(T.addFather("yaakov", "frankb"));
	CHECK_THROWS(T.addFather("yaakov", "frankc"));
	CHECK_THROWS(T.addFather("yaakov", "frankd"));
	CHECK_THROWS(T.addFather("yaakov", "franke"));
	CHECK_THROWS(T.addFather("yaakov", "frankf"));
	CHECK_THROWS(T.addFather("yaakov", "frankg"));
	CHECK_THROWS(T.addFather("yaakov", "frankh"));
	CHECK_THROWS(T.addFather("yaakov", "oscari"));
	CHECK_THROWS(T.addFather("yaakov", "oscarj"));
	CHECK_THROWS(T.addFather("yaakov", "oscark"));
	CHECK_THROWS(T.addFather("yaakov", "oscarl"));
	CHECK_THROWS(T.addFather("yaakov", "oscarm"));
	CHECK_THROWS(T.addFather("yaakov", "oscarn"));
	CHECK_THROWS(T.addFather("yaakov", "oscaro"));
	CHECK_THROWS(T.addFather("yaakov", "oscarp"));
	CHECK_THROWS(T.addFather("yaakov", "oscarq"));
	CHECK_THROWS(T.addFather("yaakov", "oscarr"));
	CHECK_THROWS(T.addFather("yaakov", "oscarx"));
	CHECK_THROWS(T.addFather("yaakov", "oscart"));
	
}
TEST_CASE("AddMother function"){
	Tree T = buildTree();
	T.addMother("Isaac", "Lia");
	CHECK(T.find("mother") == string("Lia"));
	CHECK(T.relation("Lia") == string("mother"));
	T.addMother("Lia", "daniel");
	CHECK(T.find("mother") == string("daniel"));
	CHECK(T.relation("daniel") == string("mother"));
	T.addMother("daniel", "roni");
	CHECK(T.find("mother") == string("roni"));
	CHECK(T.relation("roni") == string("mother"));
	CHECK_THROWS(T.addMother("Isaac", "Drake1"));
	CHECK_THROWS(T.addMother("Isaac", "Drake2"));
	CHECK_THROWS(T.addMother("Isaac", "Drake3"));
	CHECK_THROWS(T.addMother("Isaac", "Drake5"));
	CHECK_THROWS(T.addMother("Isaac", "Drake4"));
	CHECK_THROWS(T.addMother("Isaac", "Drake6"));
	CHECK_THROWS(T.addMother("Isaac", "Drake7"));
	CHECK_THROWS(T.addMother("Isaac", "Drake8"));
	CHECK_THROWS(T.addMother("Isaac", "Drake9"));
	CHECK_THROWS(T.addMother("Isaac", "Drakea"));
	CHECK_THROWS(T.addMother("Isaac", "Drakeb"));
	CHECK_THROWS(T.addMother("Isaac", "Drakec"));
	CHECK_THROWS(T.addMother("Isaac", "Draked"));
	CHECK_THROWS(T.addMother("Isaac", "Drakee"));
	CHECK_THROWS(T.addMother("Isaac", "Drakef"));
	CHECK_THROWS(T.addMother("Isaac", "Drakeg"));
	CHECK_THROWS(T.addMother("Isaac", "Drakeh"));
	CHECK_THROWS(T.addMother("Isaac", "Drakei"));
	CHECK_THROWS(T.addMother("Isaac", "Drakej"));
	CHECK_THROWS(T.addMother("Isaac", "Drakek"));
	CHECK_THROWS(T.addMother("Isaac", "Drakel"));
	CHECK_THROWS(T.addMother("Isaac", "Drakem"));
	CHECK_THROWS(T.addMother("Isaac", "Draken"));
	CHECK_THROWS(T.addMother("Isaac", "Drakeo"));
	CHECK_THROWS(T.addMother("Isaac", "Drakep"));
	CHECK_THROWS(T.addMother("Isaac", "Drakeaa"));
	CHECK_THROWS(T.addMother("Isaac", "Drakebb"));
	CHECK_THROWS(T.addMother("Isaac", "Drakecc"));
	CHECK_THROWS(T.addMother("Isaac", "Drakedd"));
	CHECK_THROWS(T.addMother("Isaac", "Drakeee"));
	CHECK_THROWS(T.addMother("Isaac", "Drakedd"));




}

TEST_CASE("Related function"){
    Tree T = buildTree();
    CHECK( T.relation("Yaakov") == string("father"));
    CHECK( T.relation("Isaac") == string("father"));
    CHECK( T.relation("Rachel") == string("mother"));
    CHECK_THROWS(T.relation("i") == string("great-great-grandfather"));
    CHECK_THROWS(T.relation("t") == string("grandfather"));
    CHECK_THROWS(T.relation("a") == string("great-grandfather"));
    CHECK_THROWS(T.relation("t") == string("great-grandfather"));
    CHECK_THROWS(T.relation("c") == string("great-great-grandfather"));
    CHECK_THROWS(T.relation("r") == string("great-great-grandmother"));
    CHECK_THROWS(T.relation("a") == string("great-great-grandfather"));
	
}

TEST_CASE("Find function"){
    Tree T = buildTree();
	CHECK_THROWS(T.find("uncle"));
	CHECK_THROWS(T.find("mom"));
	CHECK_THROWS(T.find("dad"));
    CHECK(T.find("father") == string("Avraham"));
    CHECK(T.find("mother") == string("Rachel"));
 
 
}

TEST_CASE("Remove function"){
    Tree T = buildTree();
    T.remove("Yosef");
    CHECK( T.relation("Yaakov") == string("unrelated"));
    CHECK( T.relation("Rachel") == string("unrelated"));
    CHECK( T.relation("Isaac") == string("unrelated"));
    CHECK( T.relation("Rivka") == string("unrelated"));
    CHECK( T.relation("Avraham") == string("unrelated"));
    CHECK( T.relation("Terah") == string("unrelated"));





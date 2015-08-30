//============================================================================
// Name        : hello_zigbee.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
//#include "../../../EmberZnet5.4.2/EmberZNet5.4.2-GA/app/util/serial/linux-serial.h"
//#include "../../../EmberZnet5.4.2/EmberZNet5.4.2-GA/app/builder/ledhost/ledhost.h"
#include "../../../EmberZnet5.4.2/EmberZNet5.4.2-GA/app/util/serial/linux-serial.h"
#include "../../../EmberZnet5.4.2/EmberZNet5.4.2-GA/app/builder/ledhost/ledhost.h"
#include "../../../EmberZnet5.4.2/EmberZNet5.4.2-GA/hal/micro/unix/compiler/gcc.h"
using namespace std;
//extern "C" {
//#include "linux-serial.h"
//void emberSerialCleanup(void);
//`}
int main() {
  emberSerialCleanup();
  //simple-main();

	cout << "!zogbee hello!!!" << endl; // prints !!!Hello World!!!
	return 0;
}//

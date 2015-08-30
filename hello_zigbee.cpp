//

// This callback file is created for your convenience. You may add application
// code to this file. If you regenerate this file over a previous version, the
// previous version will be overwritten and any code you have added will be
// lost.

//#include "../../../app/framework/include/af.h"

//#include "../../../app/ncp/sample-app/xncp-led/led-protocol.h"

/* This sample application demostrates an NCP using a custom protocol to
 * communicate with the host. As an example protocol, the NCP has defined
 * commands so that the host can control an LED on the NCP's RCM.  See
 * led-protocol.h for details.
 *
 * The host sends custom EZSP commands to the NCP, and the NCP acts on them
 * based on the functionality in the code found below.
 * This sample application is meant to be paired with the xncp-led
 * sample application in the NCP Application Framework.
 */

//============================================================================
// Name        : hello_zigbee.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
//#include PLATFORM_HEADER

//#include "../../framework/include/af.h"
//#include "../../../EmberZnet5.4.2/EmberZNet5.4.2-GA/app/util/serial/linux-serial.h"
//#include "../../../EmberZnet5.4.2/EmberZNet5.4.2-GA/app/builder/ledhost/ledhost.h"
//#include "../../../app/util/serial/linux-serial.h"
//#include "../../../app/builder/ledhost/ledhost.h"
//#include "../../../hal/micro/unix/compiler/gcc.h"
using namespace std;
extern "C" {
//#include "linux-serial.h"a
void emberSerialInit();
void emberSerialCleanup(void);
void halInit(void);
 void processSerialInput(void);
void halInternalResetWatchdog();
//int emberAFMain(MAIN_FUNCTION_PARAMETERS);
}





int main() {
emberSerialInit();
  emberSerialCleanup();
 halInit();
//halResetWatchdog();
//processSerialInput();
	cout << "!zigbee hello!!!" << endl; // prints !!!Hello World!!!
 // return emberAfMain(MAIN_FUNCTION_ARGUMENTS);a
return 0;
}//

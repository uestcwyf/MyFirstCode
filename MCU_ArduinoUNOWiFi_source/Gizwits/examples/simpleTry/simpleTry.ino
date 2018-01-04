/**************************************************************

Name:		  Gizwits + ArduinoUnoWiFi Library 
Author:		tli@gizwits.com / bing@arduino.org.cn 
Version:	V03030000
Init:		  2016-12-23
Modify:   2017-08-01
****************************************************************/
#include <Gizwits.h>
#include <Wire.h>
#include <SoftwareSerial.h>

SoftwareSerial mySerial(A2, A3); // A2 -> RX, A3 -> TX

Gizwits myGizwits;

/**
* Serial Init , Gizwits Init  
* @param none
* @return none
*/
void setup() {
  // put your setup code here, to run once:

  mySerial.begin(115200);
  
  myGizwits.begin();

  mySerial.println(F("GoKit init  OK!"));

}

/**
* Arduino loop 
* @param none
* @return none
*/
void loop() {  
  
  //Configure network
  //if(XXX) //Trigger Condition
  //myGizwits.setBindMode(0x02);  //0x01:Enter AP Mode;0x02:Enter Airlink Mode
    /*


  bool varR_LED_ONOFF = 0;
  if(myGizwits.hasBeenSet(EVENT_LED_ONOFF))
  {
    myGizwits.read(EVENT_LED_ONOFF,&varR_LED_ONOFF);//Address for storing data
    mySerial.println(F("EVENT_LED_ONOFF"));
    mySerial.println(varR_LED_ONOFF,DEC);

  }


  //binary datapoint handle
  */

  myGizwits.process();
}
// Code generated by Arduino IoT Cloud, DO NOT EDIT.


#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>


const char THING_ID[]           = "6a55877e-3882-4138-9efa-adaa00f47860";  //Enter THING ID
const char DEVICE_LOGIN_NAME[]  = "b196100a-d7d1-4095-98ac-f1fc694429c4"; //Enter DEVICE ID

const char SSID[]               = SECRET_SSID;    // Network SSID (name)
const char PASS[]               = SECRET_PASS;    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]  = SECRET_DEVICE_KEY;    // Secret device password

void onSwitch1Change();
void onSwitch2Change();


CloudSwitch switch1;
CloudSwitch switch2;


void initProperties(){

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.setThingId(THING_ID);
  ArduinoCloud.addProperty(switch1, READWRITE, ON_CHANGE, onSwitch1Change);
  ArduinoCloud.addProperty(switch2, READWRITE, ON_CHANGE, onSwitch2Change);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
void setup() {
  Serial1.begin(9600);    // 9600 is the default baud rate for the serial Bluetooth module
}

void loop() {
//   Serial1.println("ae caraio");
//   delay(2000);
  int sensor[10];
  sensor[0] = analogRead(A0);
  sensor[1] = analogRead(A1);
  sensor[2] = analogRead(A2);
  sensor[3] = analogRead(A3);
  sensor[4] = analogRead(A4);
  sensor[5] = analogRead(A5);
  sensor[6] = analogRead(A6);
  sensor[7] = analogRead(A7);
  sensor[8] = analogRead(A8);
  sensor[9] = analogRead(A9);

  //Print the values to serial
  for(int i = 0; i < 9; i++)
  {
    Serial1.print(i); Serial1.print(","); Serial1.print(sensor[i]); Serial1.print("\n");
//    Serial1.print(">"); Serial1.print(i); Serial1.print("-"); Serial1.print(sensor[i]); Serial1.print("<"); Serial1.print("\n");
  }


  
//   // listen for the data
//   if ( Serial1.available() > 0 ) {
//     // read a numbers from serial port
//     int count = Serial1.parseInt();
//    
//      // print out the received number
//     if (count > 0) {
//         Serial1.print("You have input: ");
//         Serial1.println(String(count));
//         // blink the LED
//         blinkLED(count);
//     }
//   }
// }
//
// void blinkLED(int count) {
//   for (int i=0; i< count; i++) {
//     digitalWrite(LED_BUILTIN, HIGH);
//     delay(1000);
//     digitalWrite(LED_BUILTIN, LOW);
//     delay(1000);
//   } 
}

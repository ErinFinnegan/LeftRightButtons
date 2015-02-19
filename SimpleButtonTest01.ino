//const int xAxis = A3;         //analog sensor for X axis
//const int yAxis = A2;         // analog sensor for Y axis

//int range = 12;               // output range of X or Y movement
//int responseDelay = 2;       // response delay of the mouse, in ms
//int threshold = range/4;      // resting threshold
//int center = range/2;         // resting position value
//int minima[] = {
//  0, 0};                // actual analogRead minima for {x, y}
//int maxima[] = {
//  1023,1023};                       // actual analogRead maxima for {x, y}
//int axis[] = {
//  xAxis, yAxis};              // pin numbers for {x, y}
//int mouseReading[2];          // final mouse readings for {x, y}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //pinMode(2, INPUT_PULLUP);
  //pinMode(3, INPUT_PULLUP);
  pinMode(2, INPUT);
  pinMode(3, INPUT);

  Keyboard.begin();
  //Mouse.begin();
}

void loop() {

  // read and scale the two axes:
  //  int xReading = readAxis(0);
  //  int yReading = readAxis(1);
  // put your main code here, to run repeatedly:
  //   Mouse.move(xReading, -yReading, 0);
  //    delay(responseDelay);


  if (digitalRead(2) == HIGH) { //originally LOW

//    Keyboard.press('L');
    Keyboard.press(KEY_LEFT_ARROW);
    //   Mouse.click();
    Serial.print(0);
    delay(10);
//    Keyboard.release('L');
    Keyboard.release(KEY_LEFT_ARROW);
    // Mouse.release();

  }

  //if(analogRead(A0) < 500){
  //  Keyboard.press(KEY_UP_ARROW);
  //}
  //else{
  //  Keyboard.release(KEY_UP_ARROW);
  //}
  //
  //if(analogRead(A0) > 510){
  //
  //  Keyboard.press(KEY_DOWN_ARROW);
  //}
  //else{
  //  Keyboard.release(KEY_DOWN_ARROW);
  //}
  //
  //if(analogRead(A1) < 500){
  //  Keyboard.press(KEY_LEFT_ARROW);
  //}
  //else{
  //  Keyboard.release(KEY_LEFT_ARROW);
  //}
  //
  //if(analogRead(A1) > 520){
  //
  //  Keyboard.press(KEY_RIGHT_ARROW);
  //}
  //else{
  //  Keyboard.release(KEY_RIGHT_ARROW);
  //}

  if (digitalRead(3) == HIGH) { //orginially LOW
   // Keyboard.press('R');
   Keyboard.press(KEY_RIGHT_ARROW);
    Serial.print(1);
    delay(10);
    Keyboard.release(KEY_RIGHT_ARROW);
  //  Keyboard.release('R');

  }
  /*
  Serial.print("A0: ");
  Serial.print(analogRead(A0));
  Serial.print(" A1: ");
  Serial.print(analogRead(A1));
  Serial.print(" A2: ");
  Serial.print(analogRead(A2));
  Serial.print(" A3: ");
  Serial.println(analogRead(A3));
  */
}



//int readAxis(int axisNumber) {
//  int distance = 0;    // distance from center of the output range
//
//  // read the analog input:
//  int reading = analogRead(axis[axisNumber]);
//
//  // of the current reading exceeds the max or min for this axis,
//  // reset the max or min:
//  if (reading < minima[axisNumber]) {
//    minima[axisNumber] = reading;
//  }
//  if (reading > maxima[axisNumber]) {
//    maxima[axisNumber] = reading;
//  }
//
//  // map the reading from the analog input range to the output range:
//  reading = map(reading, minima[axisNumber], maxima[axisNumber], 0, range);
//
//  // if the output reading is outside from the
//  if (abs(reading - center) > threshold) {
//    distance = (reading - center);
//  }
//
//  // the Y axis needs to be inverted in order to
//  // map the movemment correctly:
//  if (axisNumber == 1) {
//    distance = -distance;
//  }
//
//  // return the distance for this axis:
//  return distance;
//}

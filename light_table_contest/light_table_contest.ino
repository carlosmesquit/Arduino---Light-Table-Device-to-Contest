/*
SISTEMA DE CONTROLO DE MESA DE LUZ PARA CONCURSOS
AUTOR: CARLOS ALEXANDRE ANTUNES MESQUITA
ANO: 2016

*/

// digital pin 2 has a pushbutton attached to it. Give it a name:
String readString; //modo de leitura
int pushButton1 = 2, pushButton2 = 3, pushButton3 = 4, pushButton4 = 5, pushButton5 = 6, pushButton_reset = 13;
int led1 = 7, led2 = 8, led3 = 9, led4 = 10,  led5 = 11;


// the setup routine runs once when you press reset:
void setup() {

  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);

  // make the pushbutton's pin an input:
  pinMode(pushButton1, INPUT);
    pinMode(pushButton2, INPUT);
     pinMode(pushButton3, INPUT);
       pinMode(pushButton4, INPUT);
         pinMode(pushButton5, INPUT);
          pinMode(pushButton_reset, INPUT);

  pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
       pinMode(led3, OUTPUT);
          pinMode(led4, OUTPUT);
             pinMode(led5, OUTPUT);

  // turn on pullup resistors
  digitalWrite(pushButton1, HIGH);
    digitalWrite(pushButton2, HIGH);
      digitalWrite(pushButton3, HIGH);
        digitalWrite(pushButton4, HIGH);
          digitalWrite(pushButton5, HIGH);

  digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
          digitalWrite(led5, LOW);
}

// the loop routine runs over and over again forever:
void loop() {

 // read the input pin:
  int buttonState1 = digitalRead(pushButton1);
    int buttonState2 = digitalRead(pushButton2);
      int buttonState3 = digitalRead(pushButton3);
        int buttonState4 = digitalRead(pushButton4);
          int buttonState5 = digitalRead(pushButton5);
            int reset = digitalRead(pushButton_reset);

  // print out the state of the button:
  Serial.println(buttonState1);
    Serial.println(buttonState2);
     Serial.println(buttonState3);
      Serial.println(buttonState4);
        Serial.println(buttonState5);



            if(buttonState1==0){
              digitalWrite(led1, HIGH);
              delay(3000);

                }else{

                      if(buttonState2==0){
                        digitalWrite(led2, HIGH);
                        delay(3000);

                     }else{

                          if(buttonState3==0){
                           digitalWrite(led3, HIGH);
                           delay(3000);

                          }else{

                               if(buttonState4==0){
                                  digitalWrite(led4, HIGH);
                                  delay(3000);

                               }else{

                                  if(buttonState5==0){
                                  digitalWrite(led5, HIGH);
                                  //delay(3000);

                                  }else{

                                    //reset of the lights in the table
                                    if(reset==0){
                                      digitalWrite(led1, LOW);
                                      digitalWrite(led2, LOW);
                                      digitalWrite(led3, LOW);
                                      digitalWrite(led4, LOW);
                                      digitalWrite(led5, LOW);

                                                }
                                       }
                                     }
                                   }
                                }

                            }
                      }

//Seven Segment display with PUSH Button
const int push_button = 13;
const int RED_LED = 12;
const int SS_DP = 4;
const int SS_A = 5;
const int SS_B = 6;
const int SS_C = 7;
const int SS_D = 8;
const int SS_E = 9;
const int SS_F = 10;
const int G = 11;

const int status;
void setup() {
  pinMode(push_button,INPUT_PULLUP);
  pinMode(RED_LED,OUTPUT);
}
const int count = 0;
void loop() {
  displayOnSevenSegment(count);
       status = digitalRead(push_button);
       if(status == 1){
         digitalWrite(RED_LED,0);
       } else {
         digitalWrite(RED_LED,1);
         count++;
         if(count > 9){
           count = 0;
         }
       }

void displayOnSevenSegment(unsigned int n){
  //Clear the display
  digitalWrite(SS_DP,0);
  digitalWrite(SS_A,0);
  digitalWrite(SS_B,0);
  digitalWrite(SS_C,0);
  digitalWrite(SS_D,0);
  digitalWrite(SS_E,0);
  digitalWrite(SS_F,0);
  digitalWrite(SS_F,0);

switch(n){
    case 0:
     //For No 0
  digitalWrite(SS_A,1);//A
  digitalWrite(SS_B,1);//B
  digitalWrite(SS_C,1);//C
  digitalWrite(SS_D,1);//D
  digitalWrite(SS_E,1);//E
  digitalWrite(SS_F,1);//F
  break;
  case 1:
  //For No 1
  digitalWrite(SS_B,1);//B
  digitalWrite(SS_C,1);//C
  break;
  case 2:
//For No 2
digitalWrite(SS_A,1);//A
  digitalWrite(SS_B,1);//B
  digitalWrite(SS_D,1);//D
  digitalWrite(SS_E,1);//E
  break;
  case 3:
//For No 3
digitalWrite(SS_A,1);//A
  digitalWrite(SS_B,1);//B
  digitalWrite(SS_C,1);//C
  digitalWrite(SS_D,1);//D
  digitalWrite(SS_G,1);//G
  break;
 case 4:
//For No 4
 digitalWrite(SS_B,1);//B
  digitalWrite(SS_C,1);//C
  digitalWrite(SS_D,1);//D
  digitalWrite(SS_E,1);//E
  digitalWrite(SS_F,1);//F
 break;
 case 5:
//For No 5
  digitalWrite(SS_A,1);//A
  digitalWrite(SS_C,1);//C
  digitalWrite(SS_D,1);//D
  digitalWrite(SS_F,1);//F
  break;
  case 6:
//For No SS_E
digitalWrite(SS_A,1);//A
  digitalWrite(SS_C,1);//C
  digitalWrite(SS_D,1);//D
  digitalWrite(SS_E,1);//E
  digitalWrite(SS_F,1);//F
  break;
  case 7:
//For No SS_F
digitalWrite(SS_A,1);//A
  digitalWrite(SS_B,1);//B
  digitalWrite(SS_C,1);//C
  break;
  case 8:
//For No SS_G
digitalWrite(SS_A,1);//A
  digitalWrite(SS_B,1);//B
  digitalWrite(SS_C,1);//C
  digitalWrite(SS_D,1);//D
  digitalWrite(SS_E,1);//E
  digitalWrite(SS_F,1);//F
  digitalWrite(SS_G,1);//G
  break;
case 9:
//For No 9
digitalWrite(SS_A,1);//A
  digitalWrite(SS_B,1);//B
  digitalWrite(SS_C,1);//C
  digitalWrite(SS_D,1);//D
  digitalWrite(SS_E,0);//E
  digitalWrite(SS_F,1);//F
  digitalWrite(SS_G,0);//G
  break;
  default : digitalWrite(SS_DP,0);
  }
  

}

}

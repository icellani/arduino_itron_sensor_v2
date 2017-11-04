int val = 0;
int contZero = 0;
int ciclo = 0;

const int analogInPin = A0;

void setup() {

  Serial.begin( 9600 );
}

void loop(){

  val = analogRead( analogInPin );

  if ( contZero == 5 ) {

    ciclo = ciclo + 1;

    Serial.println();
    Serial.print( "Ciclo: " );
    Serial.print( ciclo );

    contZero = 0;
  }

  if ( val == 0 ) {

    contZero = contZero + 1;

  } else {

    contZero = 0;
  }

  delay( 10 );
}
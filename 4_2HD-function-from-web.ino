int RED = 0;
int GREEN = 1;
int BLUE = 2;

int toggle_led(String led) {
    
    int ledPin;
    if(led == "RED") {
        ledPin = RED;
    } else if(led == "GREEN"){
        ledPin = GREEN;
    } else if(led == "BLUE"){
        ledPin = BLUE;
    }
    else return -1;
    
    
    if(digitalRead(ledPin)) {
        digitalWrite(ledPin, LOW);
        return 1;
    } else {
        digitalWrite(ledPin, HIGH);
        return 1;
    }
    return 0;
}

void setup() {
pinMode(RED, OUTPUT);
pinMode(GREEN, OUTPUT);
pinMode(BLUE, OUTPUT);
Particle.function("toggle", toggle_led);
}

void loop() {
}

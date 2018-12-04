int relay_agua = 7;
int relay_luz = 8;
void setup()
{
  pinMode(relay_agua, OUTPUT);
  pinMode(relay_luz, OUTPUT);

    digitalWrite(relay_agua, LOW);  //Liga rele agua
    digitalWrite(relay_luz, LOW);  //Liga rele agua
    delay(10000);
    digitalWrite(relay_agua, HIGH);  //Desliga rele luz
    digitalWrite(relay_luz, HIGH);  //Desliga rele luz

}

  int dia=0;
  int noite=0;

void loop()
{

  //noite 20h-06h
  while(noite<4){
    digitalWrite(relay_luz, HIGH);  //Desliga rele luz
    digitalWrite(relay_agua, LOW);  //Liga rele agua
    delay(900000);
    digitalWrite(relay_agua, HIGH); //Desliga rele agua
    delay(8100000);
    noite++;
  }
  noite=0;

  //dia 06h-20h
  while(dia<28){
    digitalWrite(relay_luz, LOW);  //Liga rele luz
    digitalWrite(relay_agua, LOW); //Liga rele agua
    delay(900000);
    digitalWrite(relay_agua, HIGH); //Desliga rele agua
    delay(900000);
    dia++;
  }
  dia=0;


}

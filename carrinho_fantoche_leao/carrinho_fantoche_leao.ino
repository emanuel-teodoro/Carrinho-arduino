/*
void setup() {
  // put your setup code here, to run once:

}
*/

void loop() {
int motor1 = 8;
int motor2 = 9;

int tempo = 5000;// 5 segundos

  //definindo motores
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);

  //andar para frente
  digitalWrite(motor1, HIGH);
  digitalWrite(motor2, HIGH);
  //definido tempo para andar para frente
  delay(4000);// 1000ms = 1 segundo

  //Desliga motores vira para o lado
  digitalWrite(motor1, LOW);
  digitalWrite(motor2, LOW);
  //Espera antes de andar novamente
  delay(1000);

  //virar
  digitalWrite(motor1, HIGH);
  digitalWrite(motor2, LOW);  
  delay(500);//tempo de movimento motor 1

  //desliga motor antes de iniciar movimento
  digitalWrite(motor1, LOW);
  digitalWrite(motor2, LOW);
  delay(1000);

  //inicia movimento
  digitalWrite(motor1, HIGH);
  digitalWrite(motor2, HIGH);
  delay(1000);

  //desliga motores antes de virar
  digitalWrite(motor1, LOW);
  digitalWrite(motor2, LOW);
  delay(1000);

  //inicia virada
  digitalWrite(motor1, HIGH);
  digitalWrite(motor2, LOW);
  delay(1000);

  //desliga motor antes de iniciar movimento
  digitalWrite(motor1, LOW);
  digitalWrite(motor2, LOW);
  delay(1000);

  //inicia movimento
  digitalWrite(motor1, HIGH);
  digitalWrite(motor2, HIGH);
  delay(1000);

/*
  //desliga todos os motores ao final
  digitalWrite(motor1, LOW)
  digitalWrite(motor2, LOW)
  digitalWrite(motor3, LOW)
*/
}
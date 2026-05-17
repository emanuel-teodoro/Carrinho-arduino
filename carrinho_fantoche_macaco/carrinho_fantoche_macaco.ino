int motor1 = 8;
int motor2 = 9;
int motor3 = 10;

int tempo = 5000; // 5 segundos

void setup() {

  //definindo motores
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(motor3, OUTPUT);

  //Liga motores 1 e 2
  digitalWrite(motor1, HIGH);
  digitalWrite(motor2, HIGH);
  digitalWrite(motor3, LOW);

  //definido tempo para andar para frente
  delay(1000);// 1000ms = 1 segundo

  // Desliga motores levanta o braço
  digitalWrite(motor1, LOW);
  digitalWrite(motor2, LOW);
  digitalWrite(motor3, HIGH);
  //Espera antes de voltar
  delay(3000);
  digitalWrite(motor3, LOW)

  //meia volta
  digitalWrite(motor1, HIGH);
  digitalWrite(motor2, LOW);  
  delay(500);//tempo de movimento motor 1

  //desliga motor antes de iniciar volta
  digitalWrite(motor1, LOW);
  digitalWrite(motor2, LOW);

  //inicia volta
  digitalWrite(motor1, HIGH);
  digitalWrite(motor2, HIGH);
  delay(1000);

  //desliga todos os motores ao final
  digitalWrite(motor1, LOW)
  digitalWrite(motor2, LOW)
  digitalWrite(motor3, LOW)
}
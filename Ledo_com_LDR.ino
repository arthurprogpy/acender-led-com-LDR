const int LDR = A0; // Pino analógico que o sensor está conectado
const int led = 13; // Pino Referente ao led
int valorsensor ; // valor que sera armazenado o valor do LDR
void setup() {
pinMode(led, OUTPUT); // Coloca variavel led como sinal de saida
pinMode(LDR, INPUT); // Coloca a variavel LDR como entrada
Serial.begin(9600); // inicializa a comunicação serial com a taxa de 9600
}
void loop() {
valorsensor = analogRead(LDR); // armazena o valor na variavel valorsensor Serial.print("LDR : " ); // Mostra o valor no monitor serial
Serial.println(valorsensor);
if (valorsensor < 500) { // Se o valor de VALORSENSOR for menos que 500
 digitalWrite(led, HIGH); // Ligar led
} else { // Se não
 digitalWrite(led, LOW); // Desligar led
}
delay(100); // Aguarda 100 milisegundosvoid setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

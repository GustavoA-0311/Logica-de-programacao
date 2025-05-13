void setup()
{
  Serial.begin(9600);
}
int numero1;
int resultado;
void loop()
{
  Serial.println("Bem vindo(a)");
  Serial.println("Digite a tabuada que voce quer saber:");
  while(! Serial.available()) {} //Aguarde o usuario digitar
  numero1 = Serial.parseInt();
  
  for(int contador = 1; contador <= 10; contador++){
  resultado = numero1 * contador;
  Serial.println(String(numero1) + "x" + String(contador) + "=" + String(resultado));  
  }
  
}
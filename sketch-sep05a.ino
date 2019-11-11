
#define T_C 262
#define T_D 294
#define T_E 330
#define T_F 349
#define T_G 392
#define T_A 440
#define T_B 493
#define T_X 524
#define T_Y 588
#define T_Z 660
#define T_W 698
#define T_V 784
#define T_U 880
#define T_I 986
#define T_J 1045


const int C = 10;
const int D = 9;
const int E = 8;
const int F = 7;
const int G = 6;
const int A = 5;
const int B = 4;
const int X = 3;
const int Y = 2;
const int Z = 12;
const int W = 1;
const int V = 13;
const int U = A0;
const int I = A1;
const int J = A2;


const int Buzz = 11;
const int LED = 13;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(C, INPUT);
  digitalWrite(C, HIGH);

  pinMode(D, INPUT);
  digitalWrite(D, HIGH);

  pinMode(E, INPUT);
  digitalWrite(E, HIGH);

  pinMode(F, INPUT);
  digitalWrite(F, HIGH);

  pinMode(G, INPUT);
  digitalWrite(G, HIGH);

  pinMode(A, INPUT);
  digitalWrite(A, HIGH);

  pinMode(B, INPUT);
  digitalWrite(B, HIGH);

  
  pinMode(X, INPUT);
  digitalWrite(X, HIGH);

  pinMode(Y, INPUT);
  digitalWrite(Y, HIGH);

  pinMode(Z, INPUT);
  digitalWrite(Z, HIGH);

    pinMode(W, INPUT);
  digitalWrite(W, HIGH);

  pinMode(V, INPUT);
  digitalWrite(V, HIGH);

  
  pinMode(U, INPUT);
  digitalWrite(U, HIGH);

    pinMode(I, INPUT);
  digitalWrite(I, HIGH);

    pinMode(J, INPUT);
  digitalWrite(J, HIGH);

  digitalWrite(LED, LOW);
}

void loop()
{
  while (digitalRead(C) == LOW)
  {
    tone(Buzz, T_C);
    digitalWrite(LED, HIGH);
  }

  while (digitalRead(D) == LOW)
  {
    tone(Buzz, T_D);
    digitalWrite(LED, HIGH);
  }

  while (digitalRead(E) == LOW)
  {
    tone(Buzz, T_E);
    digitalWrite(LED, HIGH);
  }

  while (digitalRead(F) == LOW)
  {
    tone(Buzz, T_F);
    digitalWrite(LED, HIGH);
  }

  while (digitalRead(G) == LOW)
  {
    tone(Buzz, T_G);
    digitalWrite(LED, HIGH);
  }

  while (digitalRead(A) == LOW)
  {
    tone(Buzz, T_A);
    digitalWrite(LED, HIGH);
  }

  while (digitalRead(B) == LOW)
  {
    tone(Buzz, T_B);
    digitalWrite(LED, HIGH);
  }

   while (digitalRead(X) == LOW)
  {
    tone(Buzz, T_X);
    digitalWrite(LED, HIGH);
  }

 while (digitalRead(Y) == LOW)
  {
    tone(Buzz, T_Y);
    digitalWrite(LED, HIGH);
  }

   while (digitalRead(Z) == LOW)
  {
    tone(Buzz, T_Z);
    digitalWrite(LED, HIGH);
  }

    while (digitalRead(W) == LOW)
  {
    tone(Buzz, T_W);
    digitalWrite(LED, HIGH);
  }

    while (digitalRead(V) == LOW)
  {
    tone(Buzz, T_V);
    digitalWrite(LED, HIGH);
  }

    while (digitalRead(U) == LOW)
  {
    tone(Buzz, T_U);
    digitalWrite(LED, HIGH);
  }

    while (digitalRead(I) == LOW)
  {
    tone(Buzz, T_I);
    digitalWrite(LED, HIGH);
  }

   while (digitalRead(J) == LOW)
  {
    tone(Buzz, T_J);
    digitalWrite(LED, HIGH);
  }

  
  noTone(Buzz);
  digitalWrite(LED, LOW);

}

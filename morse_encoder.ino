#define LED 13
#define LED_ON digitalWrite(LED, HIGH);
#define LED_OFF digitalWrite(LED, LOW);
#define T1 150
#define T2 150
#define T3 500
#define T4 7*T2
#define DT 4000


void kropka()
{
  LED_ON
  delay(T1);
  LED_OFF
  delay(T2);
}

void kreska()
{
  LED_ON
  delay(T3);
  LED_OFF
  delay(T2);
}
void przerwa()
{
  LED_OFF
  delay(T4);
}
void koniec()
{
  LED_OFF
  delay(DT);
}

void Alfabet(char x)
{


  switch (x)
  {
    case 'a':
      { kropka();
        kreska();
        przerwa();
      } break;

    case 'b':
      {
        kreska();
        kropka();
        kropka();
        kropka();
        przerwa();
      } break;

    case 'c':
      {
        kreska();
        kropka();
        kreska();
        kropka();
        przerwa();

      } break;

    case 'd':
      {
        kreska();
        kropka();
        kropka();
        przerwa();

      } break;
    case 'e':
      {
        kropka();
        przerwa();

      } break;
    case 'f':
      {
        kropka();
        kropka();
        kreska();
        kropka();
        przerwa();

      } break;
    case 'g':
      {
        kreska();
        kreska();
        kropka();
        przerwa();

      } break;
    case 'h':
      {
        kropka();
        kropka();
        kropka();
        kropka();
        przerwa();

      } break;

    case 'i':
      {
        kropka();
        kropka();
        przerwa();

      } break;

    case 'j':
      {
        kropka();
        kreska();
        kreska();
        kreska();
        przerwa();
      } break;

    case 'k':
      {
        kreska();
        kropka();
        kreska();
        przerwa();

      } break;

    case 'l':
      {
        kropka();
        kreska();
        kropka();
        kropka();
        przerwa();

      } break;
    case 'm':
      {
        kreska();
        kreska();
        przerwa();

      } break;
    case 'n':
      {
        kreska();
        kropka();
        przerwa();

      } break;

    case 'o':
      {
        kreska();
        kreska();
        kreska();
        przerwa();

      } break;

    case 'p':
      {
        kropka();
        kreska();
        kreska();
        kropka();
        przerwa();
      } break;

    case 'q':
      {

        kreska();
        kreska();
        kropka();
        kreska();
        przerwa();
      } break;

    case 'r':
      {
        kropka();
        kreska();
        kropka();
        przerwa();
      } break;


    case 's':
      {
        kropka();
        kropka();
        kropka();
        przerwa();
      } break;

    case 't':
      {
        kreska();
        przerwa();
      } break;

    case 'u':
      {
        kropka();
        kropka();
        kreska();
        przerwa();
      } break;

    case 'v':
      {
        kropka();
        kropka();
        kropka();
        kreska();
        przerwa();
      } break;

    case 'w':
      {
        kropka();
        kreska();
        kreska();
        przerwa();
      } break;
    case 'x':
      {
        kreska();
        kropka();
        kropka();
        kreska();
        przerwa();
        break;
      }

    case 'y':
      {
        kreska();
        kropka();
        kreska();
        kreska();
        przerwa();
      } break;

    case 'z':
      {
        kreska();
        kreska();
        kropka();
        kropka();
        przerwa();
        break;
      }
    case '1':
      {
        kropka();
        kreska();
        kreska();
        kropka();
        break;
      }
    case '2':
      {
        kropka();
        kropka();
        kreska();
        kropka();
        kropka();
        break;
      }
    case '3':
      {
        kropka();
        kropka();
        kropka();
        kreska();
        kropka();
        break;
      }
    case '4':
      {
        kropka();
        kropka();
        kropka();
        kropka();
        kreska();
        break;
      }
    case '5':
      {
        kreska();
        kreska();
        kreska();
        break;
      }
    case '6':
      {
        kropka();
        kropka();
        kropka();
        kropka();
        kropka();
        kropka();
        break;
      }
    case '7':
      {
        kreska();
        kreska();
        kropka();
        kropka();
        break;
      }
    case '8':
      {
        kreska();
        kropka();
        kropka();
        kropka();
        break;
      }
    case '9':
      {
        kreska();
        kropka();
        kropka();
        kreska();
        break;
      }
    case '0':
      {
        kreska();
        kreska();
        kreska();
        kreska();
        break;
      }
    case ' ':
      {
        koniec();
        break;
      }

  }
}

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  if (Serial.available() > 0)
  {
    char x = Serial.read();
    Alfabet(x);
  }

}

byte led[5] = {2, 3, 4};
int sens[3] = {0, 512, 682};
#define DW(x, y)
#define digitalWrite(x, y)

void setup()
{
  for (int i = 0; i < 5; i++)
  {
    pinMode(led[i], OUTPUT);
  }
}

void loop()
{
  switch (analogRead(A0))
  {
    case 0: DW(led[0], HIGH);
    break;
    case 512: DW(led[1], HIGH);
    break;
    case 682: DW(led[2], HIGH);
    break;
    default:
      for (int i = 0; i < 5; i++)
      {
        DW(led[i], LOW);
      }
  }
}

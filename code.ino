// make an array to save Sev Seg pin configuration of numbers
int DataNum[16][7] = {  {1, 1, 1, 1, 1, 1, 0},
                        {0, 1, 1, 0, 0, 0, 0},
                        {1, 1, 0, 1, 1, 0, 1},
                        {1, 1, 1, 1, 0, 0, 1},
                        {0, 1, 1, 0, 0, 1, 1},
                        {1, 0, 1, 1, 0, 1, 1}, 
                        {1, 0, 1, 1, 1, 1, 1},
                        {1, 1, 1, 0, 0, 0, 0}, 
                        {1, 1, 1, 1, 1, 1, 1},
                        {1, 1, 1, 1, 0, 1, 1},
                        {1, 1, 1, 0, 1, 1, 1},
                        {0, 0, 1, 1, 1, 1, 1},
                        {1, 0, 0, 1, 1, 1, 0},
                        {0, 1, 1, 1, 1, 0, 1},
                        {1, 0, 0, 1, 1, 1, 1},
                        {1, 0, 0, 0, 1, 1, 1}};                                       



                                   


void setup() 
{ 
  // set pin modes
  for (int i = 8; i <= 11; i++) pinMode(i, INPUT);
  for (int i = 0; i <= 6; i++)pinMode(i, OUTPUT);

}

void loop() 
{

   int number = 0 ;   
    //counter loop
  int d0 = digitalRead(8);
  int d1 = digitalRead(9);
  int d2 = digitalRead(10);
  int d3 = digitalRead(11);
  if(d0 == 1)
      number += 1 ;
  if(d1 == 1)
      number += 2 ;
  if(d2 == 1)
      number += 4 ;
  if(d3 == 1)
      number += 8 ;
   Num_Write(number); 
}

// this functions writes values to the sev seg pins  
void Num_Write(int number) 
{
  int pin= 0;
  for (int j=0; j < 7; j++) {
   digitalWrite(pin, DataNum[number][j]);
   pin++;
  }
}




#include <MPU6050_tockn.h>
#include <Wire.h>
MPU6050 mpu6050(Wire);

int x, y, z;
int val, valservo, gocservo;

void setup() 
{
  Serial.begin(9600);
  
  Wire.begin();
  mpu6050.begin();
  mpu6050.calcGyroOffsets(true);


}

void loop() 
{
  mpu6050.update();
  x = mpu6050.getAngleX();
  y = mpu6050.getAngleY();
  z = mpu6050.getAngleZ();
  Serial.print("X: "); Serial.println(x); 
  Serial.print("Y: "); Serial.println(y);
  Serial.print("Z: "); Serial.print(z);

}

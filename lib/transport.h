#ifndef _TRANSPORT_H_
#define _TRANSPORT_H_

/*Start of I2C Function*/

void Soft_I2c_Init();

// Master generate Start signal
void Soft_I2c_Start();

// Master generate Stop signal
void Soft_I2c_Stop();

// Write data to Slaver, and get ACK/NACK from Slaver
bit Soft_I2c_Write(unsigned char dat);

// Read data from Slaver
unsigned char Soft_I2c_Read(bit ack);

/*End of I2C Function*/

#endif

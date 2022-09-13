#include <mbed.h>

DigitalOut led(LED1);

int main()
{
  while (true)
  {
    led = !led;
    ThisThread::sleep_for(1000ms);
  }
}
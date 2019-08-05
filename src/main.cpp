#include <Arduino.h>
#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveformSine sine1; //xy=172,509
AudioMixer4 mixer1;           //xy=354,524
AudioOutputI2S i2s1;          //xy=541,525
AudioConnection patchCord1(sine1, 0, mixer1, 0);
AudioConnection patchCord2(mixer1, 0, i2s1, 0);
AudioConnection patchCord3(mixer1, 0, i2s1, 1);
// GUItool: end automatically generated code

AudioControlSGTL5000 audioShield;

void setup()
{
	AudioMemory(2);

	sine1.amplitude(0.5);
	sine1.frequency(110);

	audioShield.enable();
  	audioShield.volume(0.5);
}

void loop()
{
}

class MySineWave : public AudioSynthWaveformSine
{

}
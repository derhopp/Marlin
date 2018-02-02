#include "music.h"
#include "Marlin.h"

int FL[]=
{
//NOTE_CS6,
//NOTE_C6,
//NOTE_DS6,

NOTE_G7,
NOTE_FS7,
NOTE_A7,

0,
};
int timercount[]=
{
10,10,10,8
};

int printdone[]={
NOTE_F7,
NOTE_C7,
NOTE_D7,
NOTE_E7,
NOTE_D7,
NOTE_C7,
NOTE_B6,
0,  
};

int melody[] = {
NOTE_F7,
NOTE_C7,
NOTE_D7,
NOTE_E7,
NOTE_D7,
NOTE_G7,
NOTE_A7,
0,
};

int noteDurations[] = {

  10,10,8,8,4,4,1,4,
};

void PowerOnMusic()
{
	for (int thisNote = 0; thisNote <8; thisNote++) {
    int noteDuration = 1000/noteDurations[thisNote];
    tone(Beeper_pin, melody[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration * 2;
	delay(pauseBetweenNotes);
	noTone(8);
	}
}

void PowerOFFMusic()
{
	for (int thisNote = 0; thisNote <8; thisNote++) {
    int noteDuration = 1000/noteDurations[thisNote];
    tone(Beeper_pin, printdone[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration*2 ;
	delay(pauseBetweenNotes);
	noTone(8);
	}
}

void FilamentLack()
{
for (int thisNote = 0; thisNote <4; thisNote++) {
    int noteDuration = 1000/timercount[thisNote];
    tone(Beeper_pin, FL[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration*2 ;
	delay(pauseBetweenNotes);
	noTone(8);
	}
}

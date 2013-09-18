#include <stdio.h>
// Audio synthesizer: http://www.commandlinefu.com/commands/view/12452/guitar-synthesizer-in-one-line-of-c

int main (int i, char **a)
{
/* Accepts integer and char arguments and then returns a waveform representation of the integer
   as a decaying sound, much like a plucked electric guitar string.
   */
  // math; 16 bit raise to the power of 3??? input char
  int s=16e3 / atoi(a[1]);
  //
  unsigned char v[s];
  // loads stdin to v as buffer of length s
  if(read(0,v,s) < 0) {
    write(2, "FATAL: could not read input.\n\n", 31);
    return 1;
  }
  // infinite loop
  for(;;){
    //
    putchar(v[i%s]=( v[i%s] + v[++i%s] ) / 2);
  }
}


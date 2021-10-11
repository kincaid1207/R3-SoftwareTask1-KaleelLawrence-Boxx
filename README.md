# R3-SoftwareTask1-KaleelLawrence-Boxx

the code works by using a lot of if statements
I tried to make a code that would convert decimal numbers into binary by using a set of equations to append values to a list which would be displayed in the output for each pin

currently, the potentiometer reading has been mapped to a value from 0 ot 99
for the first 7-segment display, i made the map values divided by 10 so that they would round down to the lowest number
example if the number was "17" 17/10 would be 1 and thus the first display would stay at 1

the second display uses the modulus operator to find the remainder
the display is then set to this remainder value

the code i tried to make work (presented in python format):

// start of code

n = 4
int list[]

while (n != 0):
 list.append(n%2)
 n = (n-n%2)/2
 
 len = len(list)
 
 while (len<4):
  list.append(0)
  len = len + 1
  
  list.reverse()
  
 //end of code
 
 I had just tried to recreate the way we change decimal to binary on paper into code, but couldn't seem to make it work in tinkercad, so i went with a whole lota if statements

Tinkercad: https://www.tinkercad.com/things/lJnq6SJheWX

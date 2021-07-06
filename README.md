# contact-mic-comparator-trigger
Short Version: Whenever motion is detected a doorbell is rung.

Long Version: The system detects motion via sound. The piezo microphone is pressed against a solid surface. When something touches that surface with enough force the resulting voltage exceeds the value set in the source code. When this happens a logical HIGH enables a solid-state switch. The switch grounds the doorbell remote, so motion is translated into a doorbell ring alert.
A 741 op-amp brings the piezo signal to the level of the Arduino and 1/4 of a CD4066 acts as the solid-state switch. 

A Video of the system at work: https://photos.app.goo.gl/AoQv6Wi8R6cSjUGC9

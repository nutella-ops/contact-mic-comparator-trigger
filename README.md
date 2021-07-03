# contact-mic-comparator-trigger
The system detects motion via sound. The piezo microphone is pressed against a solid surface. When something touches that surface with enough force the resulting voltage exceeds the value set in the source code. When this happens a logical HIGH enables a solid-state switch. The switch grounds the doorbell remote, which is the same as a person pressing the doorbell button. 

A 741 op-amp brings the piezo signal to the level of the Arduino and 1/4 of a CD4066 acts as the solid-state switch. 

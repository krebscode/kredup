# flash on 32u4

## usage

* connect the reset pin to the mainboard reset connector.
* connect ground to any ground pin on the mainboard.

    stty -F /dev/ttyACM0 9600
    echo "dickbutt" > /dev/ttyUSB0
    # the pin will be toggled to reset 


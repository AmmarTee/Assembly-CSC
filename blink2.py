import RPi.GPIO as GPIO # Import Raspberry Pi GPIO library
from time import sleep # Import the sleep function from the time module
GPIO.setwarnings(False)
GPIO.setmode(GPIO.BOARD)
GPIO.setup(12, GPIO.OUT, initial=GPIO.LOW)
GPIO.output(12, GPIO.HIGH)
sleep(1)
GPIO.output(12, GPIO.LOW)
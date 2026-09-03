# Arduino-Mini-Astronomy-Observatory
This Arduino-based observatory system monitors environmental conditions (such as light intensity, humidity, and temperature) to determine whether external conditions are appropriate for observation. Using this criteria, the observatory controls a servo representing a physical automated observatory enclosure. The purpose is also to assess the reliability and accuracy of using cheaper, affordable sensors using scientific techniques for photometer calibration, leading to my main research question:

\textbf{How effectively can a low-cost Arduino-based photometer monitor changes in light intensity and, when combined with environmental measurements, determine suitable observing conditions?}

## Hardware
### Current Components:
\begin{itemize}
  \item Arduino
  \item LDR/photoresistor
  \item DHT22 temperature/humidity sensor
  \item Servo motor
  \item Breadboard
  \item Resistors
  \item Jumper wires
  \item LED/light source for photometer calibration
\end{itemize}
\
### Optional Future Components:
\begin{itemize}
  \item Dedicated photodiode/light sensor
  \item Rain sensor
  \item Real-time clock
  \item SD card module
  \item Camera
  \item Stepper motor
  \item Telescope mount
  \end{itemize}
\
## Software
### Arduino:
\begin{itemize}
  \item C/C++
  \item Arduino IDE
  \item Sensor interfacing
  \item Analog-to-digital conversion
  \item Servo control
  \item Serial communication
\
### Python:
\begin{itemize}
  \item NumPy
  \item Matplotlib
  \item Astropy
  \item SciPy (planned for curve fitting)

## blinkscreen

The purpose of blinkscreen is to, at login, cause a laptop display to sleep, then after a short delay, wakeup.  This action is a work around for a problem with brightness adjustment on mackintosh laptops using HD3000 or HD4000 Intel graphics.


### How to Install:

Copy org.rehabman.blinkscreen.plist to /Library/LaunchAgents
Copy blink screen to /usr/bin

```
	cp blinkscreen /usr/bin
	cp org.rehabman.blinkscreen.plist /Library/LaunchAgents
```

Or, if you have the Xcode command line tools installed, use 'make install'


### Downloads:

Downloads (for the binary) are available here:

https://github.com/RehabMan/OS-X-blinkscreen/raw/master/blinkscreen


### Build Environment

My build environment is currently Xcode 4.6.3 (command line tools), using SDK 10.8, targeting OS X 10.6.

No other build environment is supported.


### Feedback/Information:

Please use the following threads on tonymacx86.com for feedback, questions, and help:

http://www.tonymacx86.com/hp-probook/96785-work-around-4x30s-screen-brightness.html



blinkscreen: blinkscreen.c
	gcc -Wall -mmacosx-version-min=10.6 -o blinkscreen blinkscreen.c -framework IOKit -framework Foundation

.PHONY: clean
clean:
	rm blinkscreen

.PHONY: install
install:
	cp blinkscreen /usr/bin
	cp org.rehabman.blinkscreen.plist /Library/LaunchAgents

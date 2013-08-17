#include <CoreFoundation/CoreFoundation.h>
#include <IOKit/IOKitLib.h>
#include <unistd.h>
int main(int argc, char** argv) 
{
    int sleep_before = 0;
    int sleep_during = 500;
    if (argc >= 3)
        sleep_before = atoi(argv[2]);
    if (argc >= 2)
        sleep_during = atoi(argv[1]);
    io_registry_entry_t entry = IORegistryEntryFromPath(kIOMasterPortDefault, "IOService:/IOResources/IODisplayWrangler");
    if (entry) 
    {
        if (sleep_before) 
            usleep(sleep_before*1000);
        IORegistryEntrySetCFProperty(entry, CFSTR("IORequestIdle"), kCFBooleanTrue);
        usleep(sleep_during*1000); // sleep 100 ms
        IORegistryEntrySetCFProperty(entry, CFSTR("IORequestIdle"), kCFBooleanFalse);
        IOObjectRelease(entry);
    }
    return 0;
}

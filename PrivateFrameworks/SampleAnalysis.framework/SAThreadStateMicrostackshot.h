
@interface SAThreadStateMicrostackshot : SAThreadState {
    unsigned short  _cpuSpeed100Mhz;
    unsigned char  _microstackshotFlags;
}

+ (id)stateWithMicrostackshot:(const struct micro_snapshot { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned long long x4; unsigned char x5; unsigned short x6; }*)arg1 thread:(const struct thread_snapshot { unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; int x9; int x10; int x11; int x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18[3]; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; unsigned long long x23[4]; unsigned long long x24[4]; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; BOOL x35[64]; }*)arg2 startTimestamp:(id)arg3 endTimestamp:(id)arg4 startSampleIndex:(unsigned long long)arg5 endSampleIndex:(unsigned long long)arg6 leafUserFrame:(id)arg7 leafOfCRootFramesReplacedBySwiftAsync:(id)arg8 leafKernelFrame:(id)arg9 machTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg10;

- (unsigned int)cpuSpeedMhz;
- (bool)isBatteryAndUserActivityValid;
- (bool)isIORecord;
- (bool)isInterruptRecord;
- (bool)isMicrostackshot;
- (bool)isOnBattery;
- (bool)isTimerArmingRecord;
- (bool)isUserActive;
- (bool)isUserMode;
- (unsigned char)microstackshotFlags;

@end

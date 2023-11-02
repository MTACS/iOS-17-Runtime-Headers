
@interface MXMResourceProbe : MXMProbe {
    NSThread * _pollingThread;
}

@property (retain) NSThread *pollingThread;

+ (int)_processIdentifierWithProcessName:(const char *)arg1 error:(id*)arg2;
+ (id)probe;

- (void).cxx_destruct;
- (void)_beginUpdates;
- (void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 mach_space_basicinfo:(struct ipc_info_space_basic { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5[2]; }*)arg3;
- (void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 pm_networking_stats:(struct { int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; }*)arg3;
- (void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 rusage:(struct rusage_info_v6 { unsigned char x1[16]; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned long long x35; unsigned long long x36; unsigned long long x37; unsigned long long x38; unsigned long long x39; unsigned long long x40; unsigned long long x41; unsigned long long x42; unsigned long long x43; unsigned long long x44[14]; }*)arg3;
- (void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 taskinfo:(struct proc_taskinfo { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; int x7; int x8; int x9; int x10; int x11; int x12; int x13; int x14; int x15; int x16; int x17; int x18; }*)arg3;
- (void)_pollAllProcesses:(id)arg1;
- (void)_pollBasicTaskInformation:(id)arg1 pid:(int)arg2;
- (id)_pollMainBody;
- (void)_pollProcessNetworkingStatsWithData:(id)arg1 pid:(int)arg2 task:(unsigned int)arg3;
- (void)_pollProcessResourceUsageWithData:(id)arg1 pid:(int)arg2;
- (void)_pollProcessWithData:(id)arg1 pid:(int)arg2;
- (void)_pollTaskMachPortInformation:(id)arg1 task:(unsigned int)arg2;
- (void)_stopUpdates;
- (id)init;
- (bool)performPreIterationActions;
- (id)pollingThread;
- (id)sampleWithTimeout:(double)arg1 stopReason:(unsigned long long*)arg2;
- (void)setPollingThread:(id)arg1;

@end


@interface MXMSystemProbe : MXMProbe {
    MXMMutableSampleData * _data;
    NSThread * _updateThread;
}

+ (id)probe;

- (void).cxx_destruct;
- (void)_beginUpdates;
- (void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 cpuInfo:(struct processor_basic_info { int x1; int x2; int x3; int x4; union { int x_5_1_1; int x_5_1_2; } x5; }*)arg3;
- (void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 cpuLoad:(struct processor_cpu_load_info { unsigned int x1[4]; }*)arg3;
- (void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 hostInfo:(struct vm_statistics64 { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned int x14; unsigned int x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned long long x24; }*)arg3;
- (void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 loadInfo:(struct processor_set_load_info { int x1; int x2; int x3; int x4; }*)arg3;
- (void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 processorCount:(unsigned int)arg3;
- (void)_gatherConstantSystemProperties;
- (void)_pollProcessorLoadInformationWithData:(id)arg1;
- (void)_pollSystemBatteryWithData:(id)arg1;
- (void)_pollSystemHostProcessorInfoWithData:(id)arg1;
- (void)_pollSystemLoadInformationWithData:(id)arg1;
- (void)_pollSystemLoop;
- (void)_pollSystemMainBody;
- (void)_pollSystemThermalsWithData:(id)arg1;
- (void)_prepareData;
- (void)_stopUpdates;
- (id)init;

@end

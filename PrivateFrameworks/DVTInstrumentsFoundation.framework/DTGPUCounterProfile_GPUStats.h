
@interface DTGPUCounterProfile_GPUStats : DTGPUCounterProfile {
    unsigned long long  _currentIORegSamplingInterval;
    struct EMA<unsigned long long> { 
        unsigned long long currentValue; 
        double coefficient; 
    }  _deviceUtilization;
}

+ (id)create:(id)arg1;

- (id)initWithProfile:(unsigned long long)arg1 device:(id)arg2;
- (void)sampleCounters:(unsigned long long)arg1 callback:(id /* block */)arg2;
- (bool)start:(unsigned long long)arg1;

@end

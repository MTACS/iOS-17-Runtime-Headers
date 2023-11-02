
@interface DTGPUCounterProfile_GPURawCountersAPS : DTGPUCounterProfile {
    DTGPUAGXCounterSourceGroup * _agxSource;
    NSMutableArray * _apsSelects;
    <MTLDevice> * _device;
    NSDictionary * _gpuConfig;
    NSMutableArray * _rdeSelects;
    <GPURawCounterSourceGroup> * _sourceGroup;
}

+ (id)create:(id)arg1 profile:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)_validateAndConfigureRawCounters;
- (id)counterProfileForHost;
- (id)initWithDevice:(id)arg1 profile:(unsigned long long)arg2;
- (bool)isAPS;
- (bool)prepare;
- (id)ringBufferCounts;
- (void)sampleAPS:(id /* block */)arg1;
- (void)sampleCounters:(unsigned long long)arg1 callback:(id /* block */)arg2;
- (id)sampleSizes;
- (void)setAPSCounterConfig:(id)arg1;
- (bool)start:(unsigned long long)arg1 vendorFeatures:(id)arg2;
- (void)stop;

@end

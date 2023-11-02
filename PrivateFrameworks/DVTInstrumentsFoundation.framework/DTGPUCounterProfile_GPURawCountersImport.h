
@interface DTGPUCounterProfile_GPURawCountersImport : DTGPUCounterProfile {
    DTGPUAPSDataContainer * _container;
    bool  _sampled;
}

+ (id)create:(id)arg1;

- (void).cxx_destruct;
- (bool)_validateAndConfigureRawCounters;
- (id)counterProfileForHost;
- (id)initWithImportAPSDataPath:(id)arg1;
- (bool)isAPS;
- (bool)prepare;
- (id)ringBufferCounts;
- (void)sampleAPS:(id /* block */)arg1;
- (void)sampleCounters:(unsigned long long)arg1 callback:(id /* block */)arg2;
- (id)sampleSizes;
- (bool)start:(unsigned long long)arg1 vendorFeatures:(id)arg2;
- (void)stop;

@end

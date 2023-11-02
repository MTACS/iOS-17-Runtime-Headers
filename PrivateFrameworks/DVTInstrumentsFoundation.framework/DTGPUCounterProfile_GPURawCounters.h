
@interface DTGPUCounterProfile_GPURawCounters : DTGPUCounterProfile {
    DTGPUAGXCounterSourceGroup * _agxSource;
    unsigned long long  _currentIORegSamplingInterval;
    <MTLDevice> * _device;
    struct EMA<unsigned long long> { 
        unsigned long long currentValue; 
        double coefficient; 
    }  _deviceUtilization;
    unsigned long long  _firstGpuTime;
    NSMutableDictionary * _gpuConfigurationVariables;
    long long  _gpuTimeIndex;
    NSArray * _rawCounters;
    <GPURawCounterSource> * _source;
    <GPURawCounterSourceGroup> * _sourceGroup;
    NSString * _sourceName;
    unsigned long long  _startTime;
    struct mach_timebase_info { 
        unsigned int numer; 
        unsigned int denom; 
    }  _timeBaseInfo;
    unsigned int  _vendor;
}

+ (id)_sourceNameFromProfile:(unsigned long long)arg1;
+ (id)_supportedProfileNameFromEnum:(unsigned long long)arg1 vendor:(unsigned int)arg2;
+ (id)create:(id)arg1 profile:(unsigned long long)arg2;
+ (unsigned int)vendorFromDevice:(id)arg1;

- (void).cxx_destruct;
- (void)_releaseCounterSource;
- (void)_releaseDataSource;
- (bool)_validateAndConfigureRawCounters;
- (id)counterProfileForHost;
- (id)initWithDevice:(id)arg1 profile:(unsigned long long)arg2;
- (id)initWithDevice:(id)arg1 sourceName:(id)arg2 profile:(unsigned long long)arg3;
- (id)initWithLimitersProfile:(id)arg1;
- (bool)prepare;
- (id)ringBufferCounts;
- (void)sampleCounters:(unsigned long long)arg1 callback:(id /* block */)arg2;
- (id)sampleSizes;
- (bool)start:(unsigned long long)arg1 vendorFeatures:(id)arg2;
- (void)stop;

@end

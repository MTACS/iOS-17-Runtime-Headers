
@protocol DTGPUServiceAuthorizedAPI <DTXAllowedRPC>

@required

- (void)configureAPS:(NSDictionary *)arg1;
- (void)configureCounters:(unsigned long long)arg1 counterProfile:(unsigned int)arg2 interval:(unsigned long long)arg3 windowLimit:(unsigned long long)arg4 tracingPID:(int)arg5;
- (NSDictionary *)disableConsistentGPUPerformanceState:(unsigned long long)arg1;
- (bool)enableConsistentGPUPerformanceState:(unsigned long long)arg1 acceleratorID:(unsigned long long)arg2;
- (void)enableMultiSourceCounters;
- (void)enableShaderProfiler;
- (NSArray *)flushRemainingData;
- (void)importAPSData:(NSString *)arg1;
- (NSArray *)requestDeviceGPUInfo;
- (void)setAPSCounterConfig:(NSDictionary *)arg1;
- (void)startCollectingCounters;
- (NSNumber *)stopCollectingCounters;

@end

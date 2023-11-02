
@protocol GPURawCounterSourceGroup <NSObject>

@required

- (unsigned int)acceleratorPort;
- (unsigned long long)availableCounterTriggers;
- (NSDictionary *)features;
- (NSString *)name;
- (NSDictionary *)options;
- (unsigned long long)sampleMarker;
- (unsigned long long)samplingPeriodInMicroseconds;
- (unsigned long long)samplingTriggers;
- (void)setOptions:(NSDictionary *)arg1;
- (void)setSamplingPeriodInMicroseconds:(unsigned long long)arg1;
- (void)setSamplingTriggers:(unsigned long long)arg1;
- (void)setVendorOptions:(NSDictionary *)arg1;
- (NSArray *)sourceList;
- (bool)startSampling;
- (bool)stopSampling;
- (NSDictionary *)subDivideCounterList:(NSArray *)arg1 withOptions:(NSDictionary *)arg2;
- (NSDictionary *)vendorOptions;

@end


@interface _GPURawCounterSourceGroup : NSObject <GPURawCounterSourceGroup> {
    unsigned int  _acceleratorPort;
    NSDictionary * _features;
    NSString * _name;
    NSDictionary * _options;
    unsigned long long  _samplingPeriodInMicroseconds;
    unsigned long long  _samplingTriggers;
    NSArray * _sourceList;
}

@property (readonly) unsigned int acceleratorPort;
@property (readonly) unsigned long long availableCounterTriggers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *features;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (copy) NSDictionary *options;
@property (readonly) unsigned long long sampleMarker;
@property unsigned long long samplingPeriodInMicroseconds;
@property unsigned long long samplingTriggers;
@property (readonly) NSArray *sourceList;
@property (readonly) Class superclass;
@property (copy) NSDictionary *vendorOptions;

- (unsigned int)acceleratorPort;
- (unsigned long long)availableCounterTriggers;
- (void)dealloc;
- (id)features;
- (id)initWithAcceleratorPort:(unsigned int)arg1;
- (id)name;
- (id)options;
- (unsigned long long)sampleMarker;
- (unsigned long long)samplingPeriodInMicroseconds;
- (unsigned long long)samplingTriggers;
- (void)setOptions:(id)arg1;
- (void)setSamplingPeriodInMicroseconds:(unsigned long long)arg1;
- (void)setSamplingTriggers:(unsigned long long)arg1;
- (void)setVendorOptions:(id)arg1;
- (id)sourceList;
- (bool)startSampling;
- (bool)stopSampling;
- (id)subDivideCounterList:(id)arg1 withOptions:(id)arg2;
- (id)vendorOptions;

@end

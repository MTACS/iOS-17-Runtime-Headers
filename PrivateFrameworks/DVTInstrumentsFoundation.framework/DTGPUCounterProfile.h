
@interface DTGPUCounterProfile : NSObject {
    NSMutableArray * _counters;
    unsigned long long  _defaultSampleInterval;
    NSString * _derivedCounterScriptPath;
    <MTLDevice> * _device;
    bool  _isAPS;
    unsigned long long  _profile;
    NSString * _profileName;
}

@property (nonatomic, retain) NSArray *counters;
@property (nonatomic) unsigned long long defaultSampleInterval;
@property (nonatomic, retain) NSString *derivedCounterScriptPath;
@property (nonatomic, retain) <MTLDevice> *device;
@property (nonatomic) bool isAPS;
@property (nonatomic, readonly) unsigned long long profile;
@property (nonatomic, retain) NSString *profileName;

- (void).cxx_destruct;
- (void)addCounter:(id)arg1;
- (id)counterProfileForHost;
- (id)counters;
- (unsigned long long)defaultSampleInterval;
- (id)derivedCounterScriptPath;
- (id)device;
- (id)initWithProfile:(unsigned long long)arg1 device:(id)arg2;
- (bool)isAPS;
- (bool)prepare;
- (unsigned long long)profile;
- (id)profileName;
- (id)ringBufferCounts;
- (void)sampleAPS:(id /* block */)arg1;
- (void)sampleCounters:(unsigned long long)arg1 callback:(id /* block */)arg2;
- (id)sampleSizes;
- (void)setCounters:(id)arg1;
- (void)setDefaultSampleInterval:(unsigned long long)arg1;
- (void)setDerivedCounterScriptPath:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setIsAPS:(bool)arg1;
- (void)setProfileName:(id)arg1;
- (bool)start:(unsigned long long)arg1 vendorFeatures:(id)arg2;
- (void)stop;

@end

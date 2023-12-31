
@interface SignpostCAStallAggregationBuilder : NSObject {
    SignpostCAInstrumentationProcessor * _caInstrumentationProcessor;
    unsigned long long  _commitCount;
    unsigned long long  _frameLifetimeCount;
    float  _maxDurationSec;
    SignpostCAStallAggregation * _stallAggregation;
    NSObject<OS_dispatch_queue> * _syncQueue;
    unsigned long long  _transactionLifetimeCount;
}

@property (nonatomic, readonly) SignpostCAInstrumentationProcessor *caInstrumentationProcessor;
@property (nonatomic) float maxDurationSec;
@property (nonatomic, readonly) SignpostCAStallAggregation *stallAggregation;
@property (nonatomic, readonly, copy) SignpostCAStallAggregation *stallAggregationSnapshot;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *syncQueue;

- (void).cxx_destruct;
- (void)_handleLongCommit:(id)arg1;
- (void)_handleLongFrameLifetime:(id)arg1;
- (void)_handleLongTransactionLifetime:(id)arg1;
- (void)_initializeCAInstrumentationProcessor;
- (bool)_isOverThreshold:(id)arg1;
- (void)_processDurationNs:(unsigned long long)arg1 type:(unsigned char)arg2 processExecutablePath:(id)arg3 pid:(int)arg4 aggregateForSystem:(bool)arg5;
- (void)addSubsystemCategoriesOfInterestToAllowlist:(id)arg1;
- (void)addSubsystemCategoriesOfInterestToWhitelist:(id)arg1;
- (id)caInstrumentationProcessor;
- (void)handleDeviceReboot;
- (void)handleSignpostEvent:(id)arg1;
- (void)handleSignpostInterval:(id)arg1;
- (void)handleSignpostIntervalBegin:(id)arg1;
- (id)init;
- (float)maxDurationSec;
- (id)newConfiguredExtractor;
- (void)setMaxDurationSec:(float)arg1;
- (id)stallAggregation;
- (id)stallAggregationSnapshot;
- (id)syncQueue;

@end

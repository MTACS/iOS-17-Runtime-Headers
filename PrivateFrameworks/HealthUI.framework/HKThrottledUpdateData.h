
@interface HKThrottledUpdateData : NSObject {
    long long  _incomingUpdateCountSinceLastDrain;
    double  _lastDrainTime;
    NSMutableArray * _throttledDeletedObjects;
    NSHashTable * _throttledObservers;
    HKSampleType * _throttledSampleType;
    NSMutableArray * _throttledSamplesAdded;
}

@property (nonatomic, readonly) long long incomingUpdateCountSinceLastDrain;
@property (nonatomic, readonly) double lastDrainTime;
@property (nonatomic, readonly) NSMutableArray *throttledDeletedObjects;
@property (nonatomic, readonly) NSHashTable *throttledObservers;
@property (nonatomic, readonly) HKSampleType *throttledSampleType;
@property (nonatomic, readonly) NSMutableArray *throttledSamplesAdded;

- (void).cxx_destruct;
- (void)addThrottledObservers:(id)arg1 samplesAdded:(id)arg2 objectsRemoved:(id)arg3;
- (void)clearThrottlingData;
- (long long)incomingUpdateCountSinceLastDrain;
- (id)initWithSampleType:(id)arg1;
- (double)lastDrainTime;
- (id)throttledDeletedObjects;
- (id)throttledObservers;
- (id)throttledSampleType;
- (id)throttledSamplesAdded;
- (void)updateDrainTime;

@end

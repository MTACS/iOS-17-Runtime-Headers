
@interface WDSleepStageSampleBucket : NSObject <WDDataListDataObjectSource> {
    HKDevice * _device;
    long long  _sleepStage;
    HKSortedSampleArray * _sortedSamples;
    HKSourceRevision * _sourceRevision;
    WDTimePeriod * _timePeriod;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HKDevice *device;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long numberOfSamples;
@property (nonatomic, readonly) NSPredicate *predicate;
@property (nonatomic, readonly) NSArray *samples;
@property (nonatomic, readonly) long long sleepStage;
@property (nonatomic, readonly) unsigned long long sortNumber;
@property (nonatomic, readonly) HKSortedSampleArray *sortedSamples;
@property (nonatomic, readonly) HKSourceRevision *sourceRevision;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WDTimePeriod *timePeriod;
@property (nonatomic, readonly) double totalDuration;

- (void).cxx_destruct;
- (void)addSample:(id)arg1;
- (id)device;
- (id)initWithSleepStage:(long long)arg1 timePeriod:(id)arg2 sourceRevision:(id)arg3 device:(id)arg4;
- (unsigned long long)numberOfSamples;
- (id)predicate;
- (void)removeAllSamples;
- (void)removeSample:(id)arg1;
- (id)samples;
- (long long)sleepStage;
- (unsigned long long)sortNumber;
- (id)sortedSamples;
- (id)source;
- (id)sourceRevision;
- (id)timePeriod;
- (double)totalDuration;

@end

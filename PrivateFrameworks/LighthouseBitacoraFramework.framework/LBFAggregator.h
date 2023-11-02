
@interface LBFAggregator : NSObject {
    NSMutableArray * _buckets;
    NSString * _lastAggregationDateKey;
    bool  _setMLHostMarkerInStateID;
    NSMutableDictionary * _stateDict;
    bool  _strictDictChecks;
    LBFTrialStatusDetector * _trialStatusDetector;
}

@property (nonatomic, readonly) NSMutableArray *buckets;
@property (nonatomic, readonly) NSString *lastAggregationDateKey;
@property (nonatomic, readonly) bool setMLHostMarkerInStateID;
@property (nonatomic, readonly) NSMutableDictionary *stateDict;
@property (nonatomic) bool strictDictChecks;
@property (nonatomic, readonly) LBFTrialStatusDetector *trialStatusDetector;

- (void).cxx_destruct;
- (id)buckets;
- (id)dateToStringInUTCAndLocal:(id)arg1;
- (id)dumpAggregate;
- (bool)dumpFetchedEvents;
- (void)dumpTimestamps;
- (id)ensureDeploymentEventsHolderInBucket:(id)arg1 bucketIndex:(unsigned long long)arg2;
- (id)ensureExperimentEventsHolderInBucket:(id)arg1 bucketIndex:(unsigned long long)arg2;
- (void)enumerateAggregation:(id /* block */)arg1;
- (bool)fetchBucket:(long long)arg1;
- (bool)fetchBuckets:(id)arg1;
- (bool)fetchEvents;
- (id)fetchedEventsInDictionaries;
- (id)getAggregatedStatesUpdateTimestamp:(bool)arg1 skipNullIdentifiers:(bool)arg2;
- (id)getBucketEndDate;
- (id)getBucketsNotAggregated;
- (id)getTransitionProcessingEventArray:(id)arg1 mlRuntimeInCurrentBucket:(bool)arg2 mlRuntimeInPreviousBucket:(bool)arg3;
- (id)getTrialIdentifierFromBMEvent:(id)arg1;
- (id)init;
- (id)initForMLHost;
- (id)lastAggregationDateKey;
- (bool)setMLHostMarkerInStateID;
- (void)setStrictDictChecks:(bool)arg1;
- (bool)setUpBuckets;
- (id)stateDict;
- (bool)strictDictChecks;
- (id)trialStatusDetector;
- (bool)upload;
- (bool)upload:(bool)arg1 uploadRawEvents:(bool)arg2 skipNullIdentifiers:(bool)arg3;

@end

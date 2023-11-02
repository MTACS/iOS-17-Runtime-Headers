
@interface ADStreamSync : NSObject {
    unsigned long long * _aggregationCounts;
    double * _allowedAggregationIntervals;
    double  _allowedMatchTimeInterval;
    unsigned long long * _historySizes;
    double * _matchedTimestampsArray;
    NSMutableArray * _streamsHistory;
}

@property double allowedMatchTimeInterval;

- (void).cxx_destruct;
- (double)allowedMatchTimeInterval;
- (bool)areOldestMatchingObjectsInAllowedInterval:(unsigned long long)arg1;
- (id)checkForMatch;
- (bool)checkOnceForMatch:(id*)arg1;
- (id)createAndPopulateMatch;
- (void)dealloc;
- (void)dropOldFramesFromStream:(unsigned long long)arg1 belowTimestampThreshold:(double)arg2;
- (id)initWithStreamCount:(unsigned long long)arg1 allowedMatchTimeInterval:(double)arg2;
- (double)oldestAverageTimestampForStream:(unsigned long long)arg1;
- (id)pushData:(id)arg1 streamIndex:(unsigned long long)arg2 timestamp:(double)arg3 pose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg4;
- (id)pushData:(id)arg1 streamIndex:(unsigned long long)arg2 timestamp:(double)arg3 pose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg4 calibration:(id)arg5;
- (id)pushData:(id)arg1 streamIndex:(unsigned long long)arg2 timestamp:(double)arg3 pose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg4 calibration:(id)arg5 meta:(id)arg6;
- (id)pushData:(id)arg1 streamIndex:(unsigned long long)arg2 timestamp:(double)arg3 pose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg4 meta:(id)arg5;
- (long long)reset;
- (void)setAllowedMatchTimeInterval:(double)arg1;
- (long long)setStream:(unsigned long long)arg1 queueSize:(unsigned long long)arg2;
- (long long)setStream:(unsigned long long)arg1 queueSize:(unsigned long long)arg2 aggregationCount:(unsigned long long)arg3 allowedAggregationInterval:(double)arg4;
- (bool)streamContainsMinimalFrameCount:(unsigned long long)arg1;

@end


@interface NetworkQualityExecutionsResult : NetworkQualityResult <NSCopying> {
    NSMutableDictionary * _idleLatencyResults;
    NSMutableDictionary * _mutableURLSessionMetrics;
    NSMutableDictionary * _workingLatencyResults;
}

@property (retain) NSMutableDictionary *idleLatencyResults;
@property (retain) NSMutableDictionary *mutableURLSessionMetrics;
@property (retain) NSMutableDictionary *workingLatencyResults;

- (void).cxx_destruct;
- (id)idleLatencyResults;
- (id)init;
- (id)mutableURLSessionMetrics;
- (void)setIdleLatencyResults:(id)arg1;
- (void)setMutableURLSessionMetrics:(id)arg1;
- (void)setWorkingLatencyResults:(id)arg1;
- (id)workingLatencyResults;

@end

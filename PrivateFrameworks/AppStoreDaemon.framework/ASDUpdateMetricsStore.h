
@interface ASDUpdateMetricsStore : NSObject {
    double  _averagePollTime;
    NSDate * _lastAutoPollDate;
    NSLock * _lock;
    NSArray * _metrics;
}

@property (nonatomic, readonly) double averagePollTime;
@property (nonatomic, readonly) NSDate *lastAutoPollDate;
@property (nonatomic, readonly) NSArray *metrics;

- (void).cxx_destruct;
- (void)addPoll:(id)arg1;
- (double)averagePollTime;
- (id)init;
- (id)lastAutoPollDate;
- (id)metrics;
- (void)synchronize;

@end

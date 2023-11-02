
@interface HMDRemoteEventRouterClientRetryIntervals : NSObject <HMETimerIntervalProvider> {
    long long  _currentIndex;
    NSArray * _intervals;
}

@property long long currentIndex;
@property (readonly) NSArray *intervals;

+ (id)retryIntervalsForResidentClient;

- (void).cxx_destruct;
- (long long)currentIndex;
- (id)init;
- (id)initWithIntervals:(id)arg1;
- (id)intervals;
- (double)nextInterval;
- (void)reset;
- (void)setCurrentIndex:(long long)arg1;

@end

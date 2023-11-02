
@interface BPSTimer : BPSPublisher {
    id /* block */  _getTimestamp;
    double  _interval;
    NSDate * _nextIntervalBoundary;
    NSMutableArray * _pendingTimers;
    <BPSPublisher> * _upstream;
}

@property (nonatomic, readonly) id /* block */ getTimestamp;
@property (nonatomic, readonly) double interval;
@property (nonatomic, retain) NSDate *nextIntervalBoundary;
@property (nonatomic, retain) NSMutableArray *pendingTimers;
@property (nonatomic, readonly) <BPSPublisher> *upstream;

- (void).cxx_destruct;
- (bool)completed;
- (id /* block */)getTimestamp;
- (id)initWithUpstream:(id)arg1 interval:(double)arg2 getTimestamp:(id /* block */)arg3;
- (double)interval;
- (id)nextEvent;
- (id)nextIntervalBoundary;
- (id)pendingTimers;
- (void)reset;
- (void)setNextIntervalBoundary:(id)arg1;
- (void)setPendingTimers:(id)arg1;
- (void)subscribe:(id)arg1;
- (id)upstream;
- (id)upstreamPublishers;

@end

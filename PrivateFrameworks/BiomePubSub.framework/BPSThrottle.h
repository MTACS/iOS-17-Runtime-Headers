
@interface BPSThrottle : BPSPublisher {
    id /* block */  _getTimestamp;
    double  _interval;
    id  _intervalEvent;
    bool  _latest;
    NSDate * _nextIntervalBoundary;
    NSDate * _startTimestamp;
    <BPSPublisher> * _upstream;
}

@property (nonatomic, readonly) id /* block */ getTimestamp;
@property (nonatomic, readonly) double interval;
@property (nonatomic, retain) id intervalEvent;
@property (nonatomic, readonly) bool latest;
@property (nonatomic, retain) NSDate *nextIntervalBoundary;
@property (nonatomic, retain) NSDate *startTimestamp;
@property (nonatomic, readonly) <BPSPublisher> *upstream;

- (void).cxx_destruct;
- (id /* block */)getTimestamp;
- (id)initWithUpstream:(id)arg1 interval:(double)arg2 latest:(bool)arg3 getTimestamp:(id /* block */)arg4;
- (double)interval;
- (id)intervalEvent;
- (bool)latest;
- (id)nextEvent;
- (id)nextIntervalBoundary;
- (void)reset;
- (void)setIntervalEvent:(id)arg1;
- (void)setNextIntervalBoundary:(id)arg1;
- (void)setStartTimestamp:(id)arg1;
- (id)startTimestamp;
- (void)subscribe:(id)arg1;
- (id)upstream;
- (id)upstreamPublishers;

@end

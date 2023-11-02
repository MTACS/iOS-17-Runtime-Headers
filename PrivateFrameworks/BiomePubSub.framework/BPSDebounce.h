
@interface BPSDebounce : BPSPublisher {
    double  _dueTime;
    id /* block */  _getTimestamp;
    NSDate * _lastArrivalTimestamp;
    id  _lastEvent;
    <BPSPublisher> * _upstream;
}

@property (nonatomic, readonly) double dueTime;
@property (nonatomic, readonly) id /* block */ getTimestamp;
@property (nonatomic, retain) NSDate *lastArrivalTimestamp;
@property (nonatomic, retain) id lastEvent;
@property (nonatomic, readonly) <BPSPublisher> *upstream;

- (void).cxx_destruct;
- (double)dueTime;
- (id /* block */)getTimestamp;
- (id)initWithUpstream:(id)arg1 for:(double)arg2 getTimestamp:(id /* block */)arg3;
- (id)lastArrivalTimestamp;
- (id)lastEvent;
- (id)nextEvent;
- (void)reset;
- (void)setLastArrivalTimestamp:(id)arg1;
- (void)setLastEvent:(id)arg1;
- (void)subscribe:(id)arg1;
- (id)upstream;
- (id)upstreamPublishers;

@end

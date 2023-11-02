
@interface BPSSlidingWindowAssigner : NSObject <BPSWindowAssigner> {
    BPSAggregator * _aggregator;
    unsigned long long  _identifier;
    double  _interval;
    double  _slide;
    id /* block */  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assignWindow:(id)arg1 input:(id)arg2;
- (id)assignWindowNonOverlappingIntervals:(id)arg1 timestamp:(id)arg2;
- (id)assignWindowOverlappingIntervals:(id)arg1 timestamp:(id)arg2;
- (id)initWithInterval:(double)arg1 slide:(double)arg2 aggregator:(id)arg3;
- (id)initWithInterval:(double)arg1 slide:(double)arg2 timestamp:(id /* block */)arg3 aggregator:(id)arg4;
- (id)updateAndReturnNewWindowStates:(id)arg1 input:(id)arg2;
- (id)updateWindowStateNonOverlappingIntervals:(id)arg1 timestamp:(id)arg2 input:(id)arg3;
- (id)updateWindowStateOverlappingIntervals:(id)arg1 timestamp:(id)arg2 input:(id)arg3;

@end

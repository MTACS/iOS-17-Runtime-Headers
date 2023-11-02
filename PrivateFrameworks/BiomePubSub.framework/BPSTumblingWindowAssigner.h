
@interface BPSTumblingWindowAssigner : NSObject <BPSWindowAssigner> {
    BPSAggregator * _aggregator;
    unsigned long long  _identifier;
    double  _interval;
    id /* block */  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assignWindow:(id)arg1 input:(id)arg2;
- (id)initWithInterval:(double)arg1 aggregator:(id)arg2;
- (id)initWithInterval:(double)arg1 timestamp:(id /* block */)arg2 aggregator:(id)arg3;
- (id)updateAndReturnNewWindowStates:(id)arg1 input:(id)arg2;

@end

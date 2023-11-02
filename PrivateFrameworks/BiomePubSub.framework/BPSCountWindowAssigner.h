
@interface BPSCountWindowAssigner : NSObject <BPSWindowAssigner> {
    BPSAggregator * _aggregator;
    unsigned long long  _capacity;
    unsigned long long  _identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assignWindow:(id)arg1 input:(id)arg2;
- (id)initWithCapacity:(unsigned long long)arg1 aggregator:(id)arg2;
- (id)updateAndReturnNewWindowStates:(id)arg1 input:(id)arg2;

@end

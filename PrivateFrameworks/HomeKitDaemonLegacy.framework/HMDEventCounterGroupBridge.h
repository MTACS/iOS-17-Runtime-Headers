
@interface HMDEventCounterGroupBridge : HMDEventCounterGroup {
    <HMMCounterGroup> * _bridgedCounterGroup;
    id /* block */  _queryDateBlock;
}

@property (nonatomic, readonly) <HMMCounterGroup> *bridgedCounterGroup;
@property (nonatomic, readonly) id /* block */ queryDateBlock;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 forEventName:(id)arg2;
- (id)bridgedCounterGroup;
- (id)eventCounters;
- (unsigned long long)fetchEventCounterForEventName:(id)arg1;
- (void)incrementEventCounterForEventName:(id)arg1 withValue:(unsigned long long)arg2;
- (id)initWithContext:(id)arg1 bridgedCounterGroup:(id)arg2 dateProvider:(id)arg3;
- (id)initWithContext:(id)arg1 bridgedCounterGroup:(id)arg2 groupDate:(id)arg3;
- (id)initWithContext:(id)arg1 bridgedCounterGroup:(id)arg2 queryDateBlock:(id /* block */)arg3;
- (unsigned long long)maxCounterName:(id*)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id /* block */)queryDateBlock;
- (void)resetEventCounterForEventName:(id)arg1;
- (void)resetEventCounters;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (unsigned long long)summedEventCounters;

@end

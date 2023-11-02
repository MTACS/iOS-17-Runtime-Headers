
@interface HMDEventCounterGroup : HMFObject {
    <HMDEventCounterContext> * _context;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _mutableEventCounters;
}

@property (nonatomic, readonly) <HMDEventCounterContext> *context;
@property (nonatomic, readonly) NSDictionary *eventCounters;
@property (nonatomic, readonly) NSMutableDictionary *mutableEventCounters;
@property (nonatomic, readonly) unsigned long long summedEventCounters;

- (void).cxx_destruct;
- (id)_getOrCreateEventCounterForEventName:(id)arg1;
- (bool)_resetEventCounterForEventName:(id)arg1;
- (void)addObserver:(id)arg1 forEventName:(id)arg2;
- (id)context;
- (id)eventCounters;
- (unsigned long long)fetchEventCounterForEventName:(id)arg1;
- (void)forceSave;
- (void)incrementEventCounterForEventName:(id)arg1;
- (void)incrementEventCounterForEventName:(id)arg1 withValue:(unsigned long long)arg2;
- (id)initWithContext:(id)arg1 serializedEventCounters:(id)arg2;
- (unsigned long long)maxCounterName:(id*)arg1;
- (id)mutableEventCounters;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)resetEventCounterForEventName:(id)arg1;
- (void)resetEventCounters;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (unsigned long long)summedEventCounters;

@end


@interface BPSTimeWindowProducer : BPSWindow {
    id  _accumulator;
    id /* block */  _closure;
    NSDateInterval * _dateInterval;
    bool  _downstreamRequested;
    NSString * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BPSSubscriptionStatus * _status;
}

@property (nonatomic, readonly) id accumulator;
@property (nonatomic, readonly) id /* block */ closure;
@property (nonatomic, readonly) NSDateInterval *dateInterval;

- (void).cxx_destruct;
- (id)accumulator;
- (void)cancel;
- (id /* block */)closure;
- (id)dateInterval;
- (id)identifier;
- (id)initWithDateInterval:(id)arg1 aggregator:(id)arg2 identifier:(id)arg3;
- (id)metadata;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;
- (void)requestDemand:(long long)arg1;

@end


@interface BPSSessionWindow : BPSWindow {
    id  _accumulator;
    id /* block */  _closure;
    NSDateInterval * _dateInterval;
    bool  _downstreamRequested;
    double  _gap;
    NSString * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BPSSubscriptionStatus * _status;
    id /* block */  _timestamp;
}

@property (nonatomic, readonly) id accumulator;
@property (nonatomic, readonly) id /* block */ closure;
@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) double gap;

- (void).cxx_destruct;
- (id)accumulator;
- (void)cancel;
- (id /* block */)closure;
- (id)dateInterval;
- (double)gap;
- (id)identifier;
- (id)initWithDateInterval:(id)arg1 gap:(double)arg2 timestamp:(id /* block */)arg3 aggregator:(id)arg4 identifier:(id)arg5;
- (id)metadata;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;
- (void)requestDemand:(long long)arg1;

@end

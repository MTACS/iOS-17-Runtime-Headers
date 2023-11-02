
@interface BPSCountWindow : BPSWindow {
    id  _accumulator;
    unsigned long long  _capacity;
    id /* block */  _closure;
    unsigned long long  _currentCount;
    bool  _downstreamRequested;
    NSString * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BPSSubscriptionStatus * _status;
}

@property (nonatomic, readonly) id accumulator;
@property (nonatomic, readonly) unsigned long long capacity;
@property (nonatomic, readonly) id /* block */ closure;
@property (nonatomic, readonly) unsigned long long currentCount;

- (void).cxx_destruct;
- (id)accumulator;
- (void)cancel;
- (unsigned long long)capacity;
- (id /* block */)closure;
- (unsigned long long)currentCount;
- (id)identifier;
- (id)initWithCapacity:(unsigned long long)arg1 aggregator:(id)arg2 identifier:(id)arg3;
- (id)metadata;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;
- (void)requestDemand:(long long)arg1;

@end


@interface BPSCorrelationProducer : BMBookmarkableSubscription <BPSCorrelateProducer, BPSSubscriber> {
    <BPSSubscriber> * _downstream;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _state;
    BPSSubscription * _subscription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <BPSSubscriber> *downstream;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long state;
@property (nonatomic, retain) BPSSubscription *subscription;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id)downstream;
- (id)initWithDownstream:(id)arg1;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (long long)receiveInput:(id)arg1 source:(long long)arg2;
- (id)receiveNewValue:(id)arg1 source:(long long)arg2;
- (void)receiveSubscription:(id)arg1;
- (void)requestDemand:(long long)arg1;
- (void)setDownstream:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setSubscription:(id)arg1;
- (long long)state;
- (id)subscription;
- (id)upstreamSubscriptions;

@end

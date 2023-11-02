
@interface _BPSSubscribeOnInner : BPSSubscription <BPSSubscriber> {
    <BPSSubscriber> * _downstream;
    BPSSubscriptionStatus * _status;
    <BPSSubscription> * _subscription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <BPSSubscriber> *downstream;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BPSSubscriptionStatus *status;
@property (nonatomic, retain) <BPSSubscription> *subscription;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id)downstream;
- (id)initWithDownstream:(id)arg1;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;
- (void)requestDemand:(long long)arg1;
- (void)setDownstream:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setSubscription:(id)arg1;
- (id)status;
- (id)subscription;

@end


@interface BPSWindow : BPSSubscription <BPSSubscriber> {
    <BPSSubscriber> * _downstream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <BPSSubscriber> *downstream;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id)downstream;
- (id)identifier;
- (id)metadata;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;
- (void)requestDemand:(long long)arg1;
- (void)setDownstream:(id)arg1;

@end

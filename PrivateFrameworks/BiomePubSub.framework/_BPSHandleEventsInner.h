
@interface _BPSHandleEventsInner : BMBookmarkableSubscription <BPSCancellable, BPSSubscriber> {
    <BPSSubscriber> * _downstream;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _receiveCancel;
    id /* block */  _receiveCompletion;
    id /* block */  _receiveOutput;
    id /* block */  _receiveRequest;
    id /* block */  _receiveSubscription;
    BPSSubscriptionStatus * _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <BPSSubscriber> *downstream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id)downstream;
- (id)initWithDownstream:(id)arg1 handleEvents:(id)arg2;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;
- (void)requestDemand:(long long)arg1;
- (void)setDownstream:(id)arg1;
- (id)upstreamSubscriptions;

@end

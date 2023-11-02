
@interface _BMDSLStatePublisherInner : BMBookmarkableSubscription <BPSSubscriber> {
    BMDSLState * _DSLState;
    BMBookmarkNode * _completionBookmark;
    <BPSSubscriber> * _downstream;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _sentInitialState;
    <BMDSLStateValue> * _state;
    BPSSubscriptionStatus * _status;
}

@property (nonatomic, retain) BMDSLState *DSLState;
@property (nonatomic, retain) BMBookmarkNode *completionBookmark;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <BPSSubscriber> *downstream;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool sentInitialState;
@property (nonatomic, retain) <BMDSLStateValue> *state;
@property (nonatomic, readonly) BPSSubscriptionStatus *status;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (id)DSLState;
- (void)cancel;
- (id)completionBookmark;
- (id)downstream;
- (id)init;
- (id)initWithDownstream:(id)arg1 state:(id)arg2 DSLState:(id)arg3;
- (id)newBookmark;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;
- (void)requestDemand:(long long)arg1;
- (bool)sentInitialState;
- (void)setCompletionBookmark:(id)arg1;
- (void)setDSLState:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;
- (id)status;
- (id)upstreamSubscriptions;

@end


@interface BPSReduceProducer : BMBookmarkableSubscription <BPSSubscriber> {
    bool  _cancelled;
    bool  _completed;
    <BPSSubscriber> * _downstream;
    bool  _downstreamRequested;
    bool  _empty;
    id  _initial;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _reduce;
    id  _result;
    BPSSubscriptionStatus * _status;
    bool  _upstreamCompleted;
}

@property (nonatomic) bool cancelled;
@property (nonatomic) bool completed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <BPSSubscriber> *downstream;
@property (nonatomic) bool downstreamRequested;
@property (nonatomic) bool empty;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) id initial;
@property (nonatomic, copy) id /* block */ reduce;
@property (nonatomic, retain) id result;
@property (nonatomic, retain) BPSSubscriptionStatus *status;
@property (readonly) Class superclass;
@property (nonatomic) bool upstreamCompleted;

+ (id)safeMutableCopy:(id)arg1;

- (void).cxx_destruct;
- (void)cancel;
- (bool)cancelled;
- (bool)completed;
- (id)downstream;
- (bool)downstreamRequested;
- (bool)empty;
- (id)initWithDownstream:(id)arg1 initial:(id)arg2 reduce:(id /* block */)arg3;
- (id)initial;
- (id)newBookmark;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (id)receiveNewValue:(id)arg1;
- (void)receiveSubscription:(id)arg1;
- (id /* block */)reduce;
- (void)requestDemand:(long long)arg1;
- (id)result;
- (void)setCancelled:(bool)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setDownstream:(id)arg1;
- (void)setDownstreamRequested:(bool)arg1;
- (void)setEmpty:(bool)arg1;
- (void)setInitial:(id)arg1;
- (void)setReduce:(id /* block */)arg1;
- (void)setResult:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setUpstreamCompleted:(bool)arg1;
- (id)status;
- (bool)upstreamCompleted;
- (id)upstreamSubscriptions;

@end

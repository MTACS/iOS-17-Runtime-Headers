
@interface _BPSBookmarkedInner : BMBookmarkableSubscription <BPSSubscriber> {
    <BPSSubscriber> * _downstream;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id  _state;
    BPSSubscription * _subscription;
    <BMBookmark> * _upstreamBookmark;
    NSString * _upstreamClassName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <BPSSubscriber> *downstream;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) id state;
@property (nonatomic, retain) BPSSubscription *subscription;
@property (readonly) Class superclass;
@property (nonatomic, retain) <BMBookmark> *upstreamBookmark;
@property (nonatomic, copy) NSString *upstreamClassName;

- (void).cxx_destruct;
- (void)_updateBookmarkWhenLocked;
- (void)cancel;
- (id)downstream;
- (id)initWithUpstream:(id)arg1 downstream:(id)arg2 state:(id)arg3;
- (id)newBookmark;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;
- (void)requestDemand:(long long)arg1;
- (void)setDownstream:(id)arg1;
- (void)setState:(id)arg1;
- (void)setSubscription:(id)arg1;
- (void)setUpstreamBookmark:(id)arg1;
- (void)setUpstreamClassName:(id)arg1;
- (id)state;
- (id)subscription;
- (id)upstreamBookmark;
- (id)upstreamClassName;

@end

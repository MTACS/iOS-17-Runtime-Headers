
@interface BPSPassThroughSubject : BMBookmarkablePublisher <BPSSubject, BPSSubscriber> {
    bool  _active;
    bool  _complete;
    BPSCompletion * _completion;
    BPSSubscriberList * _downstreams;
    bool  _hasAnyDownstreamDemand;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _nextEvents;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _rlock;
    BPSSubscription * _sub;
    <BPSSubscriber> * _subscriber;
    NSMutableArray * _upstreamSubscriptions;
}

@property (nonatomic) bool active;
@property (nonatomic) bool complete;
@property (nonatomic, retain) BPSCompletion *completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) BPSSubscriberList *downstreams;
@property (nonatomic) bool hasAnyDownstreamDemand;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *nextEvents;
@property (nonatomic, readonly) struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int x_1_1_1; } x1; unsigned int x2; } rlock;
@property (nonatomic, retain) BPSSubscription *sub;
@property (nonatomic, retain) <BPSSubscriber> *subscriber;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *upstreamSubscriptions;

+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (void).cxx_destruct;
- (void)acknowledgeDownstreamDemand;
- (bool)active;
- (void)applyBookmark:(id)arg1;
- (id)bookmark;
- (id)bookmarkableUpstreams;
- (bool)canStoreInternalStateInBookmark;
- (bool)canStorePassThroughValueInBookmark;
- (void)cancel;
- (bool)complete;
- (bool)completed;
- (id)completion;
- (void)dealloc;
- (void)disassociate:(long long)arg1;
- (id)downstreams;
- (bool)hasAnyDownstreamDemand;
- (id)init;
- (id)nextEvent;
- (id)nextEvents;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;
- (void)reset;
- (struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int x_1_1_1; } x1; unsigned int x2; })rlock;
- (void)sendCompletion;
- (void)sendCompletion:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)sendSubscription:(id)arg1;
- (void)sendValue:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)setComplete:(bool)arg1;
- (void)setCompletion:(id)arg1;
- (void)setDownstreams:(id)arg1;
- (void)setHasAnyDownstreamDemand:(bool)arg1;
- (void)setNextEvents:(id)arg1;
- (void)setSub:(id)arg1;
- (void)setSubscriber:(id)arg1;
- (void)setUpstreamSubscriptions:(id)arg1;
- (id)startWithSubscriber:(id)arg1;
- (id)sub;
- (void)subscribe:(id)arg1;
- (id)subscriber;
- (id)subscription;
- (id)upstreamSubscriptions;
- (id)validateBookmark:(id)arg1;

@end

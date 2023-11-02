
@interface _BPSFlatMapOuter : BMBookmarkableSubscription <BPSSubscriber> {
    NSMutableArray * _buffer;
    bool  _cancelledOrCompleted;
    <BPSSubscriber> * _downstream;
    long long  _downstreamDemand;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _downstreamLock;
    bool  _downstreamRecursive;
    bool  _innerRecursive;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _map;
    long long  _maxPublishers;
    long long  _nextInnerIndex;
    <BMBookmark> * _outerBookmark;
    bool  _outerFinished;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _outerLock;
    BPSSubscription * _outerSubscription;
    long long  _pendingSubscriptions;
    NSMutableDictionary * _subscriptions;
}

@property (nonatomic, retain) NSMutableArray *buffer;
@property (nonatomic) bool cancelledOrCompleted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <BPSSubscriber> *downstream;
@property (nonatomic) long long downstreamDemand;
@property (nonatomic) bool downstreamRecursive;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool innerRecursive;
@property (nonatomic, copy) id /* block */ map;
@property (nonatomic) long long maxPublishers;
@property (nonatomic) long long nextInnerIndex;
@property (nonatomic, retain) <BMBookmark> *outerBookmark;
@property (nonatomic) bool outerFinished;
@property (nonatomic, retain) BPSSubscription *outerSubscription;
@property (nonatomic) long long pendingSubscriptions;
@property (nonatomic, retain) NSMutableDictionary *subscriptions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateBookmarkWhenLocked;
- (id)buffer;
- (void)cancel;
- (bool)cancelledOrCompleted;
- (id)downstream;
- (long long)downstreamDemand;
- (bool)downstreamRecursive;
- (id)initWithDownstream:(id)arg1 maxPublishers:(long long)arg2 map:(id /* block */)arg3;
- (bool)innerRecursive;
- (id /* block */)map;
- (long long)maxPublishers;
- (id)newBookmark;
- (long long)nextInnerIndex;
- (id)outerBookmark;
- (bool)outerFinished;
- (id)outerSubscription;
- (long long)pendingSubscriptions;
- (void)receiveCompletion:(id)arg1;
- (void)receiveInnerCompletion:(id)arg1 index:(long long)arg2;
- (long long)receiveInnerInput:(id)arg1 index:(long long)arg2;
- (void)receiveInnerSubscription:(id)arg1 index:(long long)arg2;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;
- (void)requestDemand:(long long)arg1;
- (void)setBuffer:(id)arg1;
- (void)setCancelledOrCompleted:(bool)arg1;
- (void)setDownstream:(id)arg1;
- (void)setDownstreamDemand:(long long)arg1;
- (void)setDownstreamRecursive:(bool)arg1;
- (void)setInnerRecursive:(bool)arg1;
- (void)setMap:(id /* block */)arg1;
- (void)setMaxPublishers:(long long)arg1;
- (void)setNextInnerIndex:(long long)arg1;
- (void)setOuterBookmark:(id)arg1;
- (void)setOuterFinished:(bool)arg1;
- (void)setOuterSubscription:(id)arg1;
- (void)setPendingSubscriptions:(long long)arg1;
- (void)setSubscriptions:(id)arg1;
- (id)subscriptions;
- (id)upstreamSubscriptions;

@end

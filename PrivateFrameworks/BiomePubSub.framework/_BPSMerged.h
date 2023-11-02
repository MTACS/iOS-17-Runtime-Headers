
@interface _BPSMerged : BMBookmarkableSubscription {
    NSMutableArray * _buffers;
    long long  _count;
    long long  _demand;
    <BPSSubscriber> * _downstream;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _downstreamLock;
    bool  _finished;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _pending;
    bool  _recursive;
    NSMutableArray * _subscriptions;
    bool  _terminated;
    NSMutableArray * _upstreamBookmarks;
    long long  _upstreamFinished;
}

@property (nonatomic, retain) NSMutableArray *buffers;
@property (nonatomic) long long count;
@property (nonatomic) long long demand;
@property (nonatomic, retain) <BPSSubscriber> *downstream;
@property (nonatomic) bool finished;
@property (nonatomic) long long pending;
@property (nonatomic) bool recursive;
@property (nonatomic, retain) NSMutableArray *subscriptions;
@property (nonatomic) bool terminated;
@property (nonatomic, retain) NSMutableArray *upstreamBookmarks;
@property (nonatomic) long long upstreamFinished;

- (void).cxx_destruct;
- (id)applyDownstreamWhileLocked:(bool)arg1 apply:(id /* block */)arg2;
- (id)buffers;
- (void)cancel;
- (long long)count;
- (long long)demand;
- (id)downstream;
- (bool)finished;
- (id)initWithDownstream:(id)arg1 count:(long long)arg2;
- (id)newBookmark;
- (long long)pending;
- (void)receiveCompletion:(id)arg1 atIndex:(long long)arg2;
- (long long)receiveInput:(id)arg1 atIndex:(long long)arg2;
- (void)receiveSubscription:(id)arg1 atIndex:(long long)arg2;
- (bool)recursive;
- (void)requestDemand:(long long)arg1;
- (void)setBuffers:(id)arg1;
- (void)setCount:(long long)arg1;
- (void)setDemand:(long long)arg1;
- (void)setDownstream:(id)arg1;
- (void)setFinished:(bool)arg1;
- (void)setPending:(long long)arg1;
- (void)setRecursive:(bool)arg1;
- (void)setSubscriptions:(id)arg1;
- (void)setTerminated:(bool)arg1;
- (void)setUpstreamBookmarks:(id)arg1;
- (void)setUpstreamFinished:(long long)arg1;
- (id)subscriptions;
- (bool)terminated;
- (void)updateBookmarksWhenLockedForIndex:(unsigned long long)arg1;
- (id)upstreamBookmarks;
- (long long)upstreamFinished;
- (id)upstreamSubscriptions;

@end

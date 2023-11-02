
@interface _BPSAbstractCorrelateOrderedMerge : BMBookmarkableSubscription {
    NSMutableArray * _buffers;
    bool  _cancelled;
    NSMutableSet * _completedUpstreamIndexes;
    long long  _demand;
    <BPSSubscriber> * _downstream;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _downstreamLock;
    bool  _errored;
    unsigned long long  _finishCount;
    bool  _finished;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _recursion;
    NSMutableArray * _requestsPerSubscription;
    NSMutableArray * _subscriptions;
    NSMutableArray * _upstreamBookmarks;
    unsigned long long  _upstreamCount;
}

@property (nonatomic, retain) NSMutableArray *buffers;
@property (nonatomic) bool cancelled;
@property (nonatomic, retain) NSMutableSet *completedUpstreamIndexes;
@property (nonatomic) long long demand;
@property (nonatomic, retain) <BPSSubscriber> *downstream;
@property (nonatomic) bool errored;
@property (nonatomic) unsigned long long finishCount;
@property (nonatomic) bool finished;
@property (nonatomic) bool recursion;
@property (nonatomic, retain) NSMutableArray *requestsPerSubscription;
@property (nonatomic, retain) NSMutableArray *subscriptions;
@property (nonatomic, retain) NSMutableArray *upstreamBookmarks;
@property (nonatomic) unsigned long long upstreamCount;

- (void).cxx_destruct;
- (void)_completeWhileLockedWithCompletion:(id)arg1;
- (void)_guardedBecomeTerminal;
- (bool)_isBuffersEmpty;
- (id)buffers;
- (void)cancel;
- (bool)cancelled;
- (long long)compareFirst:(id)arg1 withSecond:(id)arg2;
- (id)completedUpstreamIndexes;
- (long long)demand;
- (id)downstream;
- (bool)errored;
- (unsigned long long)finishCount;
- (bool)finished;
- (void)flushBufferAndRequestMoreWhileLocked;
- (id)initWithDownstream:(id)arg1 upstreamCount:(unsigned long long)arg2;
- (bool)isWaitingForMoreValues;
- (id)newBookmark;
- (id)nextValueIndex:(id*)arg1;
- (void)receiveCompletion:(id)arg1 atIndex:(unsigned long long)arg2;
- (long long)receiveInput:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)receiveSubscription:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)recursion;
- (void)requestDemand:(long long)arg1;
- (id)requestsPerSubscription;
- (void)setBuffers:(id)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setCompletedUpstreamIndexes:(id)arg1;
- (void)setDemand:(long long)arg1;
- (void)setDownstream:(id)arg1;
- (void)setErrored:(bool)arg1;
- (void)setFinishCount:(unsigned long long)arg1;
- (void)setFinished:(bool)arg1;
- (void)setRecursion:(bool)arg1;
- (void)setRequestsPerSubscription:(id)arg1;
- (void)setSubscriptions:(id)arg1;
- (void)setUpstreamBookmarks:(id)arg1;
- (void)setUpstreamCount:(unsigned long long)arg1;
- (id)subscriptions;
- (void)updateBookmarksWhenLockedForIndex:(unsigned long long)arg1;
- (id)upstreamBookmarks;
- (unsigned long long)upstreamCount;
- (id)upstreamSubscriptions;

@end


@interface _BPSAbstractCombineLatest : BMBookmarkableSubscription <BMBookmarkableSubscription> {
    NSMutableArray * _buffers;
    bool  _cancelled;
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
    NSMutableArray * _subscriptions;
    unsigned long long  _upstreamCount;
}

@property (nonatomic, retain) NSMutableArray *buffers;
@property (nonatomic) bool cancelled;
@property (nonatomic) long long demand;
@property (nonatomic, retain) <BPSSubscriber> *downstream;
@property (nonatomic) bool errored;
@property (nonatomic) unsigned long long finishCount;
@property (nonatomic) bool finished;
@property (nonatomic) bool recursion;
@property (nonatomic, retain) NSMutableArray *subscriptions;
@property (nonatomic) unsigned long long upstreamCount;

- (void).cxx_destruct;
- (id)buffers;
- (void)cancel;
- (bool)cancelled;
- (id)convertValues:(id)arg1;
- (long long)demand;
- (id)downstream;
- (bool)errored;
- (unsigned long long)finishCount;
- (bool)finished;
- (id)initWithDownstream:(id)arg1 upstreamCount:(unsigned long long)arg2;
- (void)receiveCompletion:(id)arg1 atIndex:(unsigned long long)arg2;
- (long long)receiveInput:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)receiveSubscription:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)recursion;
- (void)requestDemand:(long long)arg1;
- (void)setBuffers:(id)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setDemand:(long long)arg1;
- (void)setDownstream:(id)arg1;
- (void)setErrored:(bool)arg1;
- (void)setFinishCount:(unsigned long long)arg1;
- (void)setFinished:(bool)arg1;
- (void)setRecursion:(bool)arg1;
- (void)setSubscriptions:(id)arg1;
- (void)setUpstreamCount:(unsigned long long)arg1;
- (id)subscriptions;
- (unsigned long long)upstreamCount;
- (id)upstreamSubscriptions;

@end

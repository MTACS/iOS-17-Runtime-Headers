
@interface _BPSAbstractZip : BPSSubscription {
    NSMutableArray * _buffers;
    bool  _cancelled;
    <BPSSubscriber> * _downstream;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _downstreamLock;
    bool  _errored;
    bool  _finished;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _pendingDemand;
    bool  _recursive;
    NSMutableArray * _subscriptions;
    long long  _upstreamCount;
    NSMutableArray * _upstreamFinished;
}

@property (nonatomic, retain) NSMutableArray *buffers;
@property (nonatomic) bool cancelled;
@property (nonatomic, retain) <BPSSubscriber> *downstream;
@property (nonatomic) bool errored;
@property (nonatomic) bool finished;
@property (nonatomic) long long pendingDemand;
@property (nonatomic) bool recursive;
@property (nonatomic, retain) NSMutableArray *subscriptions;
@property (nonatomic) long long upstreamCount;
@property (nonatomic, retain) NSMutableArray *upstreamFinished;

- (void).cxx_destruct;
- (id)buffers;
- (void)cancel;
- (bool)cancelled;
- (id)convertValues:(id)arg1;
- (id)downstream;
- (bool)errored;
- (bool)finished;
- (id)initWithDownstream:(id)arg1 upstreamCount:(long long)arg2;
- (void)lockSendCompletion:(id)arg1 index:(long long)arg2;
- (long long)pendingDemand;
- (void)receiveCompletion:(id)arg1 index:(long long)arg2;
- (long long)receiveInput:(id)arg1 index:(long long)arg2;
- (void)receiveSubscription:(id)arg1 index:(long long)arg2;
- (bool)recursive;
- (void)requestDemand:(long long)arg1;
- (void)resolvePendingDemandAndUnlock;
- (void)setBuffers:(id)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setDownstream:(id)arg1;
- (void)setErrored:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)setPendingDemand:(long long)arg1;
- (void)setRecursive:(bool)arg1;
- (void)setSubscriptions:(id)arg1;
- (void)setUpstreamCount:(long long)arg1;
- (void)setUpstreamFinished:(id)arg1;
- (id)subscriptions;
- (long long)upstreamCount;
- (id)upstreamFinished;
- (id)upstreamSubscriptions;

@end


@interface _BPSInnerFutureConduit : BPSSubscription {
    <BPSSubscriber> * _downstream;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _downstreamLock;
    bool  _hasAnyDemand;
    long long  _identifity;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BPSFuture * _parent;
    bool  _released;
}

@property (nonatomic, retain) <BPSSubscriber> *downstream;
@property (nonatomic) bool hasAnyDemand;
@property (nonatomic) long long identifity;
@property (nonatomic, retain) BPSFuture *parent;
@property (nonatomic) bool released;

- (void).cxx_destruct;
- (void)assignIdentity:(long long)arg1;
- (void)cancel;
- (id)downstream;
- (void)fulfill:(id)arg1;
- (bool)hasAnyDemand;
- (long long)identifity;
- (id)initWithParent:(id)arg1 downstream:(id)arg2;
- (id)parent;
- (bool)released;
- (void)requestDemand:(long long)arg1;
- (void)setDownstream:(id)arg1;
- (void)setHasAnyDemand:(bool)arg1;
- (void)setIdentifity:(long long)arg1;
- (void)setParent:(id)arg1;
- (void)setReleased:(bool)arg1;
- (id)upstreamSubscriptions;

@end

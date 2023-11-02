
@interface _BPSInnerConduit : BMBookmarkableSubscription {
    long long  _demand;
    <BPSSubscriber> * _downstream;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _downstreamLock;
    long long  _identity;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BPSPassThroughSubject * _parent;
    bool  _released;
}

@property (nonatomic) long long demand;
@property (nonatomic, retain) <BPSSubscriber> *downstream;
@property (nonatomic) long long identity;
@property (nonatomic, retain) BPSPassThroughSubject *parent;
@property (nonatomic) bool released;

- (void).cxx_destruct;
- (void)assignIdentity:(long long)arg1;
- (void)cancel;
- (long long)demand;
- (id)downstream;
- (void)finishWithCompletion:(id)arg1;
- (long long)identity;
- (id)initWithParent:(id)arg1 downstream:(id)arg2;
- (void)offerInput:(id)arg1;
- (id)parent;
- (bool)released;
- (void)requestDemand:(long long)arg1;
- (void)setDemand:(long long)arg1;
- (void)setDownstream:(id)arg1;
- (void)setIdentity:(long long)arg1;
- (void)setParent:(id)arg1;
- (void)setReleased:(bool)arg1;
- (id)upstreamSubscriptions;

@end


@interface _BPSSequenceInner : BMBookmarkableSubscription {
    <BPSSubscriber> * _downstream;
    NSEnumerator * _enumerator;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id  _next;
    long long  _pendingDemand;
    bool  _recursion;
}

@property (nonatomic, retain) <BPSSubscriber> *downstream;
@property (nonatomic, retain) NSEnumerator *enumerator;
@property (nonatomic, retain) id next;
@property (nonatomic) long long pendingDemand;
@property (nonatomic) bool recursion;

- (void).cxx_destruct;
- (void)cancel;
- (id)downstream;
- (id)enumerator;
- (id)initWithDownstream:(id)arg1 enumerator:(id)arg2;
- (id)next;
- (long long)pendingDemand;
- (bool)recursion;
- (void)requestDemand:(long long)arg1;
- (void)setDownstream:(id)arg1;
- (void)setEnumerator:(id)arg1;
- (void)setNext:(id)arg1;
- (void)setPendingDemand:(long long)arg1;
- (void)setRecursion:(bool)arg1;
- (id)upstreamSubscriptions;

@end

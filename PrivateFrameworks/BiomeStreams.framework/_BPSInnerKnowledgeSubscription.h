
@interface _BPSInnerKnowledgeSubscription : BPSSubscription {
    <BPSSubscriber> * _downstream;
    <_DKKnowledgeQuerying> * _knowledgeStore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id  _next;
    long long  _offset;
    long long  _pendingDemand;
    _DKEventQuery * _query;
    bool  _recursion;
    long long  _remaining;
}

@property (nonatomic, retain) <BPSSubscriber> *downstream;
@property (nonatomic, retain) <_DKKnowledgeQuerying> *knowledgeStore;
@property (nonatomic, retain) id next;
@property (nonatomic) long long offset;
@property (nonatomic) long long pendingDemand;
@property (nonatomic, retain) _DKEventQuery *query;
@property (nonatomic) bool recursion;
@property (nonatomic) long long remaining;

- (void).cxx_destruct;
- (void)cancel;
- (id)downstream;
- (id)initWithQuery:(id)arg1 downstream:(id)arg2 store:(id)arg3;
- (id)knowledgeStore;
- (id)next;
- (long long)offset;
- (long long)pendingDemand;
- (id)query;
- (bool)recursion;
- (long long)remaining;
- (void)requestDemand:(long long)arg1;
- (void)setDownstream:(id)arg1;
- (void)setKnowledgeStore:(id)arg1;
- (void)setNext:(id)arg1;
- (void)setOffset:(long long)arg1;
- (void)setPendingDemand:(long long)arg1;
- (void)setQuery:(id)arg1;
- (void)setRecursion:(bool)arg1;
- (void)setRemaining:(long long)arg1;
- (id)upstreamSubscriptions;

@end

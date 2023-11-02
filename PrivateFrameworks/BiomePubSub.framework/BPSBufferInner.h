
@interface BPSBufferInner : BMBookmarkableSubscription <BPSSubscriber> {
    <BPSSubscriber> * _downstream;
    long long  _downstreamDemand;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _prefetch;
    bool  _recursion;
    unsigned long long  _size;
    BPSSubscriptionStatus * _status;
    BPSCompletion * _terminal;
    NSMutableArray * _values;
    unsigned long long  _whenFull;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <BPSSubscriber> *downstream;
@property (nonatomic) long long downstreamDemand;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long prefetch;
@property (nonatomic) bool recursion;
@property (nonatomic) unsigned long long size;
@property (nonatomic, retain) BPSSubscriptionStatus *status;
@property (readonly) Class superclass;
@property (nonatomic, retain) BPSCompletion *terminal;
@property (nonatomic, retain) NSMutableArray *values;
@property (nonatomic) unsigned long long whenFull;

+ (id)new;

- (void).cxx_destruct;
- (long long)_drain;
- (id)_lockedPopWithDemand:(long long)arg1;
- (void)cancel;
- (id)downstream;
- (long long)downstreamDemand;
- (id)init;
- (id)initWithDownstream:(id)arg1 size:(unsigned long long)arg2 prefetch:(unsigned long long)arg3 whenFull:(unsigned long long)arg4;
- (id)newBookmark;
- (unsigned long long)prefetch;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;
- (bool)recursion;
- (void)requestDemand:(long long)arg1;
- (void)setDownstream:(id)arg1;
- (void)setDownstreamDemand:(long long)arg1;
- (void)setPrefetch:(unsigned long long)arg1;
- (void)setRecursion:(bool)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setStatus:(id)arg1;
- (void)setTerminal:(id)arg1;
- (void)setValues:(id)arg1;
- (void)setWhenFull:(unsigned long long)arg1;
- (unsigned long long)size;
- (id)status;
- (id)terminal;
- (id)upstreamSubscriptions;
- (id)values;
- (unsigned long long)whenFull;

@end

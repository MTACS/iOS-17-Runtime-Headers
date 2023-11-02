
@interface _BPSWindowerInner : BMBookmarkableSubscription <BPSSubscriber> {
    <BPSWindowAssigner> * _assigner;
    NSMutableArray * _buffer;
    long long  _demand;
    <BPSSubscriber> * _downstream;
    id /* block */  _key;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _recursion;
    bool  _sideRecursion;
    BPSSubscriptionStatus * _status;
    NSMutableDictionary * _windows;
    NSMutableDictionary * _windowsBuffer;
    NSMutableDictionary * _windowsDemand;
    NSMutableDictionary * _windowsStatus;
}

@property (nonatomic, readonly) <BPSWindowAssigner> *assigner;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <BPSSubscriber> *downstream;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id /* block */ key;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (id)assigner;
- (void)cancel;
- (void)cancelWithKey:(id)arg1 identifier:(id)arg2;
- (id)downstream;
- (id)init;
- (id)initWithDownstream:(id)arg1 key:(id /* block */)arg2 assigner:(id)arg3;
- (id /* block */)key;
- (void)receiveCompletion:(id)arg1;
- (void)receiveCompletion:(id)arg1 key:(id)arg2 identifier:(id)arg3;
- (long long)receiveInput:(id)arg1;
- (long long)receiveInput:(id)arg1 key:(id)arg2 identifier:(id)arg3;
- (void)receiveSubscription:(id)arg1;
- (void)receiveSubscription:(id)arg1 key:(id)arg2 identifier:(id)arg3;
- (void)requestDemand:(long long)arg1;
- (void)requestDemand:(long long)arg1 key:(id)arg2 identifier:(id)arg3;
- (id)upstreamSubscriptions;

@end

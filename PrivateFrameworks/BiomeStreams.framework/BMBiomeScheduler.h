
@interface BMBiomeScheduler : NSObject <BMDSLScheduler> {
    BMComputeXPCPublisherStorage * _bookmarkStorage;
    BMBookmarkablePublisher * _bpsPublisher;
    BMComputeXPCPublisherClient * _client;
    BMDSL * _graph;
    NSString * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _subscriptionIdentifier;
    bool  _waking;
}

@property (nonatomic, retain) BMBookmarkablePublisher *bpsPublisher;
@property (nonatomic, readonly) BMComputeXPCPublisherClient *client;
@property (nonatomic, retain) BMDSL *graph;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSString *subscriptionIdentifier;
@property (nonatomic, readonly) bool waking;

+ (id)new;

- (void).cxx_destruct;
- (void)_persistBookmarkForPublisher:(id)arg1;
- (id)_publisherWithStreamIdentifier:(id)arg1 storeEvent:(id)arg2;
- (id)_updatedPublisherForSubscription:(id)arg1;
- (id)bpsPublisher;
- (void)cancel;
- (id)client;
- (id)graph;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 targetQueue:(id)arg2;
- (id)initWithIdentifier:(id)arg1 targetQueue:(id)arg2 client:(id)arg3;
- (id)initWithIdentifier:(id)arg1 targetQueue:(id)arg2 client:(id)arg3 storageProvider:(id /* block */)arg4;
- (id)initWithIdentifier:(id)arg1 targetQueue:(id)arg2 client:(id)arg3 waking:(bool)arg4;
- (id)initWithIdentifier:(id)arg1 targetQueue:(id)arg2 client:(id)arg3 waking:(bool)arg4 storageProvider:(id /* block */)arg5;
- (id)initWithIdentifier:(id)arg1 targetQueue:(id)arg2 waking:(bool)arg3;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)queue;
- (void)setBpsPublisher:(id)arg1;
- (void)setGraph:(id)arg1;
- (void)setSubscriptionIdentifier:(id)arg1;
- (void)subscribeWithDSLGraph:(id)arg1 forSubscriber:(id)arg2;
- (void)subscribeWithDSLGraph:(id)arg1 publisherBlock:(id /* block */)arg2;
- (id)subscriptionIdentifier;
- (bool)waking;

@end


@interface _BMBiomeXPCSchedulerInner : BPSSubscription <BPSSubscriber> {
    BMAccessClient * _accessClient;
    BMComputeXPCPublisherStorage * _bookmarkStorage;
    BMBookmarkablePublisher * _bpsPublisher;
    BMComputeXPCPublisherClient * _client;
    long long  _demand;
    <BPSSubscriber> * _downstream;
    BMDSL * _graph;
    NSString * _identifier;
    double  _latestEventTime;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
    BPSSubscriptionStatus * _status;
    bool  _waking;
    BMComputeXPCSubscription * _xpcSubscription;
}

@property (nonatomic, retain) BMAccessClient *accessClient;
@property (nonatomic, retain) BMComputeXPCPublisherStorage *bookmarkStorage;
@property (nonatomic, retain) BMComputeXPCPublisherClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long demand;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <BPSSubscriber> *downstream;
@property (nonatomic, retain) BMDSL *graph;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) BPSSubscriptionStatus *status;
@property (readonly) Class superclass;
@property (nonatomic) bool waking;
@property (nonatomic, retain) BMComputeXPCSubscription *xpcSubscription;

+ (id)streamIdentifierFromGraph:(id)arg1;

- (void).cxx_destruct;
- (id)accessClient;
- (id)bookmarkStorage;
- (void)cancel;
- (id)client;
- (long long)demand;
- (id)downstream;
- (id)graph;
- (id)identifier;
- (id)initWithDownstream:(id)arg1 identifier:(id)arg2 graph:(id)arg3 client:(id)arg4 targetQueue:(id)arg5 waking:(bool)arg6;
- (id)queue;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;
- (void)requestDemand:(long long)arg1;
- (void)setAccessClient:(id)arg1;
- (void)setBookmarkStorage:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setDemand:(long long)arg1;
- (void)setDownstream:(id)arg1;
- (void)setGraph:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setWaking:(bool)arg1;
- (void)setXpcSubscription:(id)arg1;
- (id)status;
- (void)switchToPublisherWithStreamIdentifier:(id)arg1 storeEvent:(id)arg2;
- (void)switchToUpdatedPublisher;
- (bool)waking;
- (id)xpcSubscription;

@end

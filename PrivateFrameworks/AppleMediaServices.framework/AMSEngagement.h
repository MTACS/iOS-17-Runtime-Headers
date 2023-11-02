
@interface AMSEngagement : NSObject <AMSBagConsumer> {
    <AMSBagProtocol> * _bag;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    AMSEngagementConnection * _connection;
    NSMapTable * _observerInfo;
    NSMutableSet * _runningPromises;
}

@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, readonly) AMSEngagementConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMapTable *observerInfo;
@property (nonatomic, retain) NSMutableSet *runningPromises;
@property (readonly) Class superclass;

+ (id)_connection;
+ (id)_engagementQueue;
+ (id)_notifyQueue;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;
+ (id)notificationCenter;

- (void).cxx_destruct;
- (void)_connectionErrorNotification;
- (id)_createCombinedLogKey;
- (void)_failAllRunningPromisesWithError:(id)arg1;
- (void)_handleServiceResponse:(id)arg1;
- (void)_manageRunningPromise:(id)arg1;
- (void)_observeNotifications;
- (id)_parseActions:(id)arg1;
- (void)_pushEventReceived:(id)arg1;
- (void)_removeRunningPromise:(id)arg1;
- (void)_scheduleSyncIfNeeded:(id)arg1;
- (void)addObserver:(id)arg1 placement:(id)arg2 serviceType:(id)arg3;
- (void)addObserver:(id)arg1 placement:(id)arg2 serviceType:(id)arg3 queue:(id)arg4;
- (void)addObserver:(id)arg1 placements:(id)arg2 serviceType:(id)arg3;
- (void)addObserver:(id)arg1 placements:(id)arg2 serviceType:(id)arg3 queue:(id)arg4;
- (id)bag;
- (id)connection;
- (id)contentInfoForApp:(id)arg1 cacheKey:(id)arg2 version:(id)arg3;
- (void)dealloc;
- (id)enqueueData:(id)arg1;
- (id)enqueueEvent:(id)arg1;
- (id)enqueueMessageEvent:(id)arg1;
- (void)handleDialogResult:(id)arg1;
- (void)handlePushEvent:(id)arg1;
- (id)init;
- (id)initWithBag:(id)arg1;
- (id)observerInfo;
- (void)removeObserver:(id)arg1 placement:(id)arg2 serviceType:(id)arg3;
- (id)runningPromises;
- (void)setBag:(id)arg1;
- (void)setObserverInfo:(id)arg1;
- (void)setRunningPromises:(id)arg1;
- (id)sync;
- (id)syncDestinations:(id)arg1;
- (id)syncMetricsIdentifiers;
- (id)treatmentStoreService;

@end

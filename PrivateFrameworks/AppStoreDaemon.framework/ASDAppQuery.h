
@interface ASDAppQuery : NSObject <ASDNotificationCenterNotificationObserver, ASDNotificationCenterProgressObserver> {
    NRDevice * _device;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _hasRunOnce;
    bool  _isForUpdates;
    ASDNotificationCenter * _notificationCenter;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    <ASDAppQueryResultsObserver> * _observer;
    NSPredicate * _predicate;
    ASDAppQueryExecutor * _queryExecutor;
    long long  _queryOptions;
    NSMutableDictionary * _resultCache;
    ASDServiceBroker * _serviceBroker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property <ASDAppQueryResultsObserver> *observer;
@property (readonly) NSPredicate *predicate;
@property (nonatomic) long long queryOptions;
@property (readonly) Class superclass;

+ (void)anyWithPredicate:(id)arg1 withResultHandler:(id /* block */)arg2;
+ (id)queryDefaultPairedWatchForBetaApps;
+ (id)queryForAlmondApps;
+ (id)queryForAppClipWithStoreItemID:(long long)arg1;
+ (id)queryForBeagleApps;
+ (id)queryForBetaApps;
+ (id)queryForBetaAppsOnPairedDevice:(id)arg1;
+ (id)queryForBetaAppsWithStoreItemIDs:(id)arg1;
+ (id)queryForBundleAtPath:(id)arg1;
+ (id)queryForBundleIDs:(id)arg1;
+ (id)queryForStoreApps;
+ (id)queryForStoreItemIDs:(id)arg1;
+ (id)queryForSystemAppsOnPairedDevice:(id)arg1;
+ (id)queryForUpdates;
+ (id)queryWithPredicate:(id)arg1;
+ (id)queryWithPredicate:(id)arg1 onPairedDevice:(id)arg2;

- (void).cxx_destruct;
- (void)_handleBrokerConnectionNotification:(id)arg1;
- (void)_unitTest_setHasRunOnce:(bool)arg1;
- (void)dealloc;
- (void)executeQueryWithResultHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithPredicate:(id)arg1;
- (id)initWithPredicate:(id)arg1 onPairedDevice:(id)arg2;
- (id)initWithPredicate:(id)arg1 queryExecutor:(id)arg2 serviceBroker:(id)arg3 notificationCenter:(id)arg4;
- (void)notificationCenter:(id)arg1 receivedNotifications:(id)arg2;
- (void)notificationCenter:(id)arg1 receivedProgress:(id)arg2;
- (id)observer;
- (id)predicate;
- (long long)queryOptions;
- (void)setObserver:(id)arg1;
- (void)setQueryOptions:(long long)arg1;

@end

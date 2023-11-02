
@interface SCKDatabase : NSObject <SCKDatabaseStoreCoordinatorObserver> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    SCKAsyncSerialQueue * _ckSyncQueue;
    <SCKContainerProxying> * _container;
    NSArray * _mergeHandlers;
    NSMutableDictionary * _observersByZoneName;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    SCKDatabaseSchema * _schema;
    SCKStartupQueue * _startupQueue;
    long long  _status;
    <SCKDatabaseStoreCoordinator> * _storeCoordinator;
    NSMutableDictionary * _zoneSnapshotsByZoneName;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) SCKAsyncSerialQueue *ckSyncQueue;
@property (nonatomic, retain) <SCKContainerProxying> *container;
@property (nonatomic, retain) NSArray *mergeHandlers;
@property (nonatomic, retain) NSMutableDictionary *observersByZoneName;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } observersLock;
@property (nonatomic, retain) SCKDatabaseSchema *schema;
@property (nonatomic, retain) SCKStartupQueue *startupQueue;
@property long long status;
@property (nonatomic, retain) <SCKDatabaseStoreCoordinator> *storeCoordinator;
@property (nonatomic, retain) NSMutableDictionary *zoneSnapshotsByZoneName;

- (void).cxx_destruct;
- (void)_createZoneInContainerWithSchema:(id)arg1 completion:(id /* block */)arg2;
- (void)_deleteAndRecreateAllZonesWithCompletion:(id /* block */)arg1;
- (id)_emptyZonesNeedingFirstSync;
- (void)_enqueueStartupSequenceWithFeatures:(long long)arg1;
- (void)_fetchDatabaseAndZoneChangesWithCompletion:(id /* block */)arg1;
- (void)_fetchDatabaseChangesWithCompletion:(id /* block */)arg1;
- (void)_fetchZoneChangesForZones:(id)arg1 completion:(id /* block */)arg2;
- (void)_recoverFromIdentityLossWithCompletion:(id /* block */)arg1;
- (void)_reloadSnapshotOfZone:(id)arg1 fromStore:(id)arg2;
- (void)_runCKOperation:(id)arg1;
- (id)_sanitizeErrorForClients:(id)arg1;
- (void)_saveZoneToContainer:(id)arg1 allowRecoveryAttempt:(bool)arg2 completion:(id /* block */)arg3;
- (void)_saveZonesToContainer:(id)arg1 allowRecoveryAttempt:(bool)arg2 completion:(id /* block */)arg3;
- (void)_squashZoneForMerge:(id)arg1 zoneStore:(id)arg2;
- (id)_zoneWithSchema:(id)arg1 zoneStore:(id)arg2;
- (id)_zonesNeedingFetch;
- (id)_zonesNeedingSave;
- (void)addObserver:(id)arg1 forZone:(id)arg2;
- (id)callbackQueue;
- (void)checkSyncingEnabledWithCompletion:(id /* block */)arg1;
- (id)ckSyncQueue;
- (id)container;
- (void)handleRemoteNotification:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithSchema:(id)arg1 store:(id)arg2 features:(long long)arg3 containerProxy:(id)arg4;
- (id)initWithSchema:(id)arg1 store:(id)arg2 features:(long long)arg3 mergeHandlers:(id)arg4 containerProxy:(id)arg5;
- (id)initWithSchema:(id)arg1 store:(id)arg2 migrationPlan:(id)arg3 containerProxy:(id)arg4;
- (id)initWithSchema:(id)arg1 store:(id)arg2 migrationPlan:(id)arg3 features:(long long)arg4 containerProxy:(id)arg5;
- (id)mergeHandlers;
- (void)modifyContentsOfZone:(id)arg1 withCommand:(id)arg2;
- (id)observersByZoneName;
- (struct os_unfair_lock_s { unsigned int x1; })observersLock;
- (void)pollForChangesWithCondition:(id)arg1 completion:(id /* block */)arg2;
- (void)readContentsOfZone:(id)arg1 withBlock:(id /* block */)arg2;
- (void)removeObserver:(id)arg1 forZone:(id)arg2;
- (void)savePendingChangesToServerWithCompletion:(id /* block */)arg1;
- (id)schema;
- (void)setCallbackQueue:(id)arg1;
- (void)setCkSyncQueue:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setMergeHandlers:(id)arg1;
- (void)setObserversByZoneName:(id)arg1;
- (void)setObserversLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setSchema:(id)arg1;
- (void)setStartupQueue:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setStoreCoordinator:(id)arg1;
- (void)setZoneSnapshotsByZoneName:(id)arg1;
- (id)startupQueue;
- (long long)status;
- (id)storeCoordinator;
- (void)storeCoordinatorDiscoveredExternalChanges:(id)arg1;
- (void)synchronize;
- (bool)t_flushChangesWithTimeout:(double)arg1;
- (id)zoneSnapshotsByZoneName;

@end

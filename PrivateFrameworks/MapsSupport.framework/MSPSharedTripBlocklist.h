
@interface MSPSharedTripBlocklist : NSObject <MapsSync.MapsSyncStoreControllerDelegate> {
    NSMutableSet * _blockedIdentifiers;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    _TtC8MapsSync13MapsSyncStore * _store;
    _TtC8MapsSync23MapsSyncStoreController * _storeController;
    GCDTimer * _storeLoadTimeoutTimer;
    NSObject<OS_dispatch_queue> * _storeQueue;
    bool  _waitingForStoreToLoad;
}

+ (void)migrateFromiCloudKVSIfNeeded;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_cancelTimeoutTimer;
- (id)_fetchSyncedIdentifiers;
- (void)_purgeExpiredIdentifiersIn:(id)arg1;
- (void)_reloadBlockedIdentifiersFromSync;
- (void)_resumeIsolationQueueIfNeeded;
- (void)blockIdentifier:(id)arg1;
- (void)blockIdentifiers:(id)arg1;
- (void)clearBlockedIdentifiers;
- (bool)containsAnyIdentifiersInArray:(id)arg1;
- (bool)containsIdentifier:(id)arg1;
- (id)description;
- (id)init;
- (void)purgeExpiredIdentifiers;
- (void)storeControllerWithDataChanged:(id)arg1;
- (void)storeControllerWithDidLoad:(id)arg1;
- (void)storeControllerWithFailedToLoad:(id)arg1;
- (void)unblockIdentifiers:(id)arg1;

@end

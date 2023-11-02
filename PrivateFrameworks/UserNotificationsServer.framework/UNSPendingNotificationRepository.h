
@interface UNSPendingNotificationRepository : NSObject {
    UNCBundleLibrarian * _librarian;
    UNSKeyedObservable * _observable;
    NSObject<OS_dispatch_queue> * _queue;
    UNSKeyedDataStoreRepository * _repository;
}

- (void).cxx_destruct;
- (long long)_maxObjectsPerKey;
- (void)_queue_notificationSourcesDidUninstall:(id)arg1;
- (void)_queue_notifyObserversOfChangesFrom:(id)arg1 to:(id)arg2 forBundleIdentifier:(id)arg3;
- (id)_queue_pendingNotificationDictionariesForBundleIdentifier:(id)arg1;
- (id)_queue_pendingNotificationRecordsForBundleIdentifier:(id)arg1;
- (void)_queue_performMigration;
- (void)_queue_performMigrationForBundleIdentifier:(id)arg1;
- (void)_queue_setPendingNotificationDictionaries:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_setPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)allBundleIdentifiers;
- (void)applicationStateDidRestore;
- (void)contentProtectionStateChangedForFirstUnlock:(bool)arg1;
- (id)initWithDataStoreRepository:(id)arg1 observable:(id)arg2 librarian:(id)arg3;
- (id)initWithDirectory:(id)arg1 librarian:(id)arg2 repositoryProtectionStrategy:(id)arg3;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (id)pendingNotificationRecordsForBundleIdentifier:(id)arg1;
- (void)performMigration;
- (void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2;

@end

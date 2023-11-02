
@interface UNSNotificationCategoryRepository : NSObject {
    UNSKeyedObservable * _observable;
    NSObject<OS_dispatch_queue> * _queue;
    UNSKeyedDataStoreRepository * _repository;
}

- (void).cxx_destruct;
- (long long)_maxObjectsPerKey;
- (id)_queue_categoriesForBundleIdentifier:(id)arg1;
- (void)_queue_notificationSourcesDidUninstall:(id)arg1;
- (void)_queue_performMigration;
- (void)_queue_performMigrationForBundleIdentifier:(id)arg1;
- (void)_queue_setCategories:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)allBundleIdentifiers;
- (id)categoriesForBundleIdentifier:(id)arg1;
- (id)categoryWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2;
- (void)contentProtectionStateChangedForFirstUnlock:(bool)arg1;
- (id)initWithDataStoreRepository:(id)arg1 observable:(id)arg2;
- (id)initWithDirectory:(id)arg1 librarian:(id)arg2 repositoryProtectionStrategy:(id)arg3;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (void)performMigration;
- (void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setCategories:(id)arg1 forBundleIdentifier:(id)arg2;

@end

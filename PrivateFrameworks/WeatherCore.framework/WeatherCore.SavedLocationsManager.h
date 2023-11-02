
@interface WeatherCore.SavedLocationsManager : NSObject <WCWeatherSharedPreferencesChangeObserver> {
    void $__lazy_storage_$_forceMigrateToCoherence;
    void $__lazy_storage_$_forceRemoveLocalCoherenceContainer;
    void $__lazy_storage_$_useCoherence;
    void coherenceMigrator;
    void keyValueStoreProvider;
    void localKeyValueStore;
    void locationDataModels;
    void locationMetadataManager;
    void locationsReconciler;
    void lock;
    void nanoSyncManager;
    void nanoSyncTask;
    void notifyQueue;
    void observers;
    void savedLocations;
    void savedLocationsReader;
    void syncedDataManager;
    void testConfigurable;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)sharedPreferencesChangedExternally;

@end

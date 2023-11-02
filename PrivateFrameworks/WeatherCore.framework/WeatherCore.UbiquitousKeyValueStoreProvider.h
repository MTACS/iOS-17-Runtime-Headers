
@interface WeatherCore.UbiquitousKeyValueStoreProvider : _TtCs12_SwiftObject {
    void activeStoreState;
    void activityQueue;
    void iCloudStatusProvider;
    void lazyEncryptedStore;
    void lazyMigrator;
    void lazyUnencryptedStore;
    void lock;
    void notifyQueue;
    void observers;
}

- (void)handleLocationsChangedExternally:(id)arg1;
- (void)migrateToEncryptedStoreIfNeededAndHandleLocationsChangedExternally:(id)arg1;

@end

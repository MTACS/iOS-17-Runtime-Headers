
@interface RemindersUICore.TTRAccountsListsInteractor : NSObject {
    void accountsEligibleForMigration_cached;
    void cloudKitMigrationManager;
    void cloudKitNetworkActivity;
    void cloudKitNetworkActivityMonitor;
    void committer;
    void dataViewMonitor;
    void delegate;
    void isSettingSmartListsDisplayOrderInUserDefaults;
    void isSettingSmartListsVisibilityInUserDefaults;
    void migrationPollingTimer;
    void modelCachablePropertyFetchInitiator;
    void modelCachablePropertyFetchSubscription;
    void perWindowLastSelectedListStorage;
    void smartListsDisplayOrderObservationToken;
    void smartListsVisibilityObservationToken;
    void store;
    void userDefaults;
}

- (void).cxx_destruct;
- (id)init;

@end

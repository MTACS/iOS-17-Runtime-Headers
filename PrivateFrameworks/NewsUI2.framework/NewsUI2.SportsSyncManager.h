
@interface NewsUI2.SportsSyncManager : NSObject <FCAppleAccountObserver, FCSubscriptionObserving, FCUserInfoObserving> {
    void $__lazy_storage_$_operationQueue;
    void _ignoreSyncingNewsChanges;
    void _syncMergedWithWatchlistAtLeastOnce;
    void accessQueue;
    void appConfigurationManager;
    void featureAvailability;
    void iCloudAccountStatusObservable;
    void iTunesAccountStatusObservable;
    void prepareSyncingGroup;
    void sportsDataService;
    void subscriptionController;
    void suspendSyncingGroup;
    void suspendedTokens;
    void suspendedTokensLock;
    void syncService;
    void tagService;
    void userInfo;
}

- (void).cxx_destruct;
- (void)appleAccountChanged;
- (void)handleSyncCompletionNotification;
- (void)handleSyncSettingChangedNotification;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6;
- (void)subscriptionControllerDidStopSyncingRemoteChanges:(id)arg1;
- (void)subscriptionControllerWillStartSyncingRemoteChanges:(id)arg1;
- (void)userInfoDidChangeSportsSyncState:(id)arg1;

@end


@interface SMCatalogStore : NSObject <NLCatalogStoreProtocol> {
    void assetClient;
    void bookmarkClient;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  calendar;
    void catalogClient;
    void contentRestrictionObserver;
    void mediaTagStringBuilder;
    void recommendationClient;
}

- (void).cxx_destruct;
- (void)catalogResetSyncWithCompletion:(id /* block */)arg1;
- (void)handleCatalogResetSyncNotificationWithNotification:(id)arg1;
- (id)init;
- (id)init:(id)arg1;
- (void)queryCatalogWorkoutDetail:(id)arg1 completion:(id /* block */)arg2;
- (void)queryFeaturedCatalogLockupsWithCompletion:(id /* block */)arg1;

@end

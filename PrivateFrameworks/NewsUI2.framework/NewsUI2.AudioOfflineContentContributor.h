
@interface NewsUI2.AudioOfflineContentContributor : NSObject <FCBundleSubscriptionChangeObserver> {
    void audioDataManager;
    void bundleSubscriptionManager;
    void offlineContentRequests;
    void paidBundleConfigManager;
    void scheduledRefreshManager;
    void storageLevelProvider;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidExpire:(id)arg1;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (id)init;

@end

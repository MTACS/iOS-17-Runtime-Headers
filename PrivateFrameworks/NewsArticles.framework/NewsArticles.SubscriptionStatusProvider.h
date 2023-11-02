
@interface NewsArticles.SubscriptionStatusProvider : NSObject <FCBundleSubscriptionChangeObserver, SXSubscriptionStatusProviding> {
    void bundlePurchasePrewarmer;
    void bundleSubscriptionManager;
    void bundleSubscriptionStatus;
    void channelSubscriptionStatus;
    void headline;
    void observers;
    void paidAccessChecker;
}

@property (nonatomic) long long bundleSubscriptionStatus;
@property (nonatomic) long long channelSubscriptionStatus;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)bundleSubscriptionDidExpire:(id)arg1;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (long long)bundleSubscriptionStatus;
- (long long)channelSubscriptionStatus;
- (id)init;
- (void)purchaseListChangedWithNotification:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setBundleSubscriptionStatus:(long long)arg1;
- (void)setChannelSubscriptionStatus:(long long)arg1;

@end

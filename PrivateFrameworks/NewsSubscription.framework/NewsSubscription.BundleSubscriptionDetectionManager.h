
@interface NewsSubscription.BundleSubscriptionDetectionManager : NSObject <FCBundleSubscriptionChangeObserver> {
    void bundleSubscriptionManager;
    void completionEventManager;
    void configurationManager;
    void postPurchaseOnboardingManager;
    void presentationOperationManager;
    void router;
    void userInfo;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidExpire:(id)arg1;
- (void)bundleSubscriptionDidSubscribe:(id)arg1 hideBundleDetectionUI:(bool)arg2;
- (void)dealloc;
- (id)init;

@end

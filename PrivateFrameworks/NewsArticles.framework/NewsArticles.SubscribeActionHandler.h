
@interface NewsArticles.SubscribeActionHandler : NSObject <FCBundleSubscriptionChangeObserver, SXSubscribeActionHandler> {
    void $__lazy_storage_$_purchasingSpinnerViewController;
    void $__lazy_storage_$_verifyingSpinnerViewController;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  actionModel;
    void bundlePurchasePrewarmer;
    void bundleSubscriptionDetectionManager;
    void bundleSubscriptionManager;
    void configurationManager;
    void familySharingLandingPageLauncher;
    void headline;
    void networkReachability;
    void offerManager;
    void onboardingPrewarmer;
    void paidBundleViaOfferFeatureAvailability;
    void postPurchaseOnboardingManager;
    void postPurchaseRoutingInProgress;
    void presenter;
    void purchaseStarter;
    void purchasingSpinnerViewControllerFactory;
    void router;
    void tracker;
    void urlHandler;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (void)handleAMSPurchaseCompletion;
- (void)handleSubscribeActionOnPresenter:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)init;

@end


@interface NewsSubscription.PurchasePresenter : NSObject <FCBundleSubscriptionChangeObserver> {
    void $__lazy_storage_$_spinnerViewController;
    void bundlePurchasePrewarmer;
    void bundleSubscriptionDetectionManager;
    void bundleSubscriptionManager;
    void familySharingLandingPageLauncher;
    void featureAvailability;
    void isPresenting;
    void networkReachability;
    void offerManager;
    void onboardingPrewarmer;
    void postPurchaseOnboardingManager;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  purchaseContext;
    void purchaseController;
    void purchaseStarter;
    void purchasingSpinnerViewControllerFactory;
    void router;
    void urlHandler;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (void)handlePurchaseAddedNotificationWithNotification:(id)arg1;
- (id)init;

@end


@interface NewsSubscription.DynamicViewControllerDelegate : NSObject <AMSUIDynamicViewControllerDelegate> {
    void bundleSubscriptionManager;
    void paidBundleViaOfferHandler;
    void postPurchaseOnboardingManager;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  purchaseContext;
    void resultDelegate;
    void router;
}

- (void).cxx_destruct;
- (void)dynamicViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3;
- (bool)dynamicViewControllerShouldDismiss:(id)arg1;
- (id)init;

@end

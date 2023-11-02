
@interface NewsUI2.PaidBundleViaOfferUIHandler : NSObject <AMSPushHandlerDelegate, FCBundleSubscriptionChangeObserver> {
    void $__lazy_storage_$_paidBundleViaOfferConfig;
    void appConfigurationManager;
    void appIconBadgeIdentifierBase;
    void bundleSubscriptionManager;
    void featureAvailability;
    void notificationService;
    void offerManager;
    void paidBundleViaOfferHandler;
    void presentationOperationManager;
    void router;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sessionBadgeSource;
    void sessionBadgeState;
    void tracker;
    void userInfo;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (id)init;
- (void)pushPayload:(id)arg1 withBadgeRequest:(id)arg2;

@end

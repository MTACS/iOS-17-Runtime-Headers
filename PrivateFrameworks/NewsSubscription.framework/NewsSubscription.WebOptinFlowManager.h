
@interface NewsSubscription.WebOptinFlowManager : NSObject <SXPostActionHandler> {
    void $__lazy_storage_$_verifyingSpinnerViewController;
    void appConfigurationManager;
    void hideMyEmailService;
    void networkReachability;
    void postActionHandlerManager;
    void postUpsellAction;
    void purchaseController;
    void purchasingSpinnerViewControllerFactory;
    void receiptRefresher;
    void router;
    void sceneProvider;
    void siwaCredentialUploader;
    void subscriptionController;
    void tagController;
    void tracker;
    void webAccessOptInProvider;
}

- (void).cxx_destruct;
- (void)handledAction:(id)arg1 state:(unsigned long long)arg2;
- (id)init;

@end

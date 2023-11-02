
@interface VideosUI.OpenURLHandler : NSObject <AMSUIDynamicViewControllerDelegate, VUIOpenURLHandling> {
    void _isFinished;
    void _isLoadingSharedWatchURL;
    void amsURLParser;
    void contextData;
    void currentAMSDynamicViewController;
    void deferredAMSDynamicURLCompletion;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  deferredOpenURL;
    void deferredOpenURLCompletion;
    void isFinishedLock;
    void isLoadingSharedWatchURLLock;
    void isPresentingMultiOfferModal;
    void offerURLString;
    void openedByDeeplink;
    void purchaseOrLinkingAdamID;
    void subscriptionChannelLink;
    void subscriptionChannelTitle;
}

@property (nonatomic, copy) NSURL *deferredOpenURL;
@property (nonatomic) bool isFinished;
@property (nonatomic) bool isLoadingSharedWatchURL;
@property (nonatomic) bool openedByDeeplink;

- (void).cxx_destruct;
- (id)deferredOpenURL;
- (void)dynamicViewController:(id)arg1 didFinishCarrierLinkingWithResult:(id)arg2 error:(id)arg3;
- (void)dynamicViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3;
- (bool)dynamicViewControllerShouldDismiss:(id)arg1;
- (void)handleDeferredURLWithAppContext:(id)arg1;
- (id)init;
- (bool)isFinished;
- (bool)isLoadingSharedWatchURL;
- (bool)isRedeemURL:(id)arg1;
- (void)openSharedWatchURL:(id)arg1 appContext:(id)arg2 completion:(id /* block */)arg3;
- (bool)openedByDeeplink;
- (void)parseURL:(id)arg1 appContext:(id)arg2 completion:(id /* block */)arg3;
- (void)processDeeplink:(id)arg1 appContext:(id)arg2 completion:(id /* block */)arg3;
- (void)processEngagementResult:(id)arg1 error:(id)arg2;
- (void)processEntityWithContextData:(id)arg1 appContext:(id)arg2;
- (void)processNonDeeplinkURL:(id)arg1 contextData:(id)arg2 completion:(id /* block */)arg3;
- (void)processRouterDeeplink:(id)arg1 completion:(id /* block */)arg2;
- (id)queryParameterStringfromURL:(id)arg1 parameter:(id)arg2;
- (void)saveDeferredURL:(id)arg1 completion:(id /* block */)arg2;
- (void)setDeferredOpenURL:(id)arg1;
- (void)setIsFinished:(bool)arg1;
- (void)setIsLoadingSharedWatchURL:(bool)arg1;
- (void)setOpenedByDeeplink:(bool)arg1;

@end

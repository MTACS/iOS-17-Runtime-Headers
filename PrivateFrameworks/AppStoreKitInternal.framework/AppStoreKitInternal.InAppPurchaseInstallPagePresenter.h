
@interface AppStoreKitInternal.InAppPurchaseInstallPagePresenter : AppStoreKitInternal.BasePresenter {
    void appStateController;
    void currentState;
    void didAutoDownload;
    void fetchedPage;
    void initialInstallState;
    void installAction;
    void mode;
    void offerDisplayProperties;
    void pageTitle;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  pageUrl;
    void sidepack;
    void stateMachine;
    void view;
}

- (void)didAcceptPreInstallOffer;
- (void)offerButtonTapped;

@end

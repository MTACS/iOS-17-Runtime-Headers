
@interface AppStoreKitInternal.CommerceDialogHandler : NSObject <ASDNotificationCenterDialogObserver> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  bag;
    void presentingViewController;
    void sheetPresentationViewController;
}

- (void).cxx_destruct;
- (void)handleAuthenticateRequest:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)handleDialogRequest:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)handleEngagementRequest:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)handleViewPresentationRequest:(id)arg1 resultHandler:(id /* block */)arg2;
- (id)init;

@end


@protocol ASDNotificationCenterDialogObserver <NSObject>

@required

- (void)handleAuthenticateRequest:(void *)arg1 resultHandler:(void *)arg2; // needs 2 arg types, found 8: AMSAuthenticateRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSAuthenticateResult *, NSError *, void*
- (void)handleDialogRequest:(void *)arg1 resultHandler:(void *)arg2; // needs 2 arg types, found 8: AMSDialogRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSDialogResult *, NSError *, void*

@optional

- (void)handleEngagementRequest:(void *)arg1 resultHandler:(void *)arg2; // needs 2 arg types, found 8: AMSEngagementRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSEngagementResult *, NSError *, void*
- (void)handlePurchase:(void *)arg1 resultHandler:(void *)arg2; // needs 2 arg types, found 8: AMSPurchaseSIWA *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSPurchaseSIWAResult *, NSError *, void*
- (void)handleViewPresentationRequest:(void *)arg1 resultHandler:(void *)arg2; // needs 2 arg types, found 8: ASDViewPresentationRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ASDViewPresentationResult *, NSError *, void*

@end

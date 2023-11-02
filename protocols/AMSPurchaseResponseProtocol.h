
@protocol AMSPurchaseResponseProtocol <NSObject>

@optional

- (void)handleAuthenticateRequest:(void *)arg1 purchase:(void *)arg2 purchaseQueue:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: AMSAuthenticateRequest *, AMSPurchase *, AMSPurchaseQueue *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSAuthenticateResult *, NSError *, void*
- (void)handleDialogRequest:(void *)arg1 purchase:(void *)arg2 purchaseQueue:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: AMSDialogRequest *, AMSPurchase *, AMSPurchaseQueue *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSDialogResult *, NSError *, void*
- (void)handleEngagementRequest:(void *)arg1 purchase:(void *)arg2 purchaseQueue:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: AMSEngagementRequest *, AMSPurchase *, AMSPurchaseQueue *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSEngagementResult *, NSError *, void*

@end

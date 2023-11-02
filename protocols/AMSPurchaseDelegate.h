
@protocol AMSPurchaseDelegate <NSObject>

@required

- (void)purchase:(void *)arg1 handleAuthenticateRequest:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: AMSPurchase *, AMSAuthenticateRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSAuthenticateResult *, NSError *, void*
- (void)purchase:(void *)arg1 handleDialogRequest:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: AMSPurchase *, AMSDialogRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSDialogResult *, NSError *, void*
- (void)purchase:(void *)arg1 handleEngagementRequest:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: AMSPurchase *, AMSEngagementRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSEngagementResult *, NSError *, void*

@end

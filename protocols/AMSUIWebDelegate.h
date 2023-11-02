
@protocol AMSUIWebDelegate <NSObject>

@optional

- (void)webViewController:(AMSUIWebViewController *)arg1 didEncodeNetworkRequest:(NSMutableURLRequest *)arg2;
- (void)webViewController:(AMSUIWebViewController *)arg1 didFinishPurchaseWithResult:(AMSPurchaseResult *)arg2 error:(NSError *)arg3;
- (void)webViewController:(void *)arg1 didResolveWithResult:(void *)arg2 error:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: AMSUIWebViewController *, NSDictionary *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)webViewController:(void *)arg1 handleAuthenticateRequest:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: AMSUIWebViewController *, AMSAuthenticateRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSAuthenticateResult *, NSError *, void*
- (bool)webViewController:(void *)arg1 handleDelegateAction:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: AMSUIWebViewController *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)webViewController:(void *)arg1 handleDialogRequest:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: AMSUIWebViewController *, AMSDialogRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSDialogResult *, NSError *, void*

@end

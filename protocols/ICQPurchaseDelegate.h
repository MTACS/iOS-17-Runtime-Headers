
@protocol ICQPurchaseDelegate <NSObject>

@required

- (void)handleAuthenticateRequest:(void *)arg1 purchase:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: AMSAuthenticateRequest *, ICQPurchase *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSAuthenticateResult *, NSError *, void*
- (void)handleDialogRequest:(void *)arg1 purchase:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: AMSDialogRequest *, ICQPurchase *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSDialogResult *, NSError *, void*
- (void)handleEngagementRequest:(void *)arg1 purchase:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: AMSEngagementRequest *, ICQPurchase *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSEngagementResult *, NSError *, void*
- (bool)isLiftUIFlow;

@optional

- (void)enableCloudPhotoLibraryWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)registerForDarwinNotifications;
- (void)stopActivityIndicator;

@end

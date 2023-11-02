
@protocol AppleMediaServicesUIDynamic.ClientConnectionProtocol

@required

- (void)handleWithAuthenticateRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AMSAuthenticateRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSAuthenticateResult *, NSError *, void*
- (void)handleWithDialogRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AMSDialogRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSDialogResult *, NSError *, void*
- (void)handleWithEngagementRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AMSEngagementRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSEngagementResult *, NSError *, void*

@end

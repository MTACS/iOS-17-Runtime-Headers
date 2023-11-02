
@protocol ASDNotificationServiceProtocol

@required

- (void)deliverAuthenticateRequest:(void *)arg1 withResultHandler:(void *)arg2; // needs 2 arg types, found 8: AMSAuthenticateRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSAuthenticateResult *, NSError *, void*
- (void)deliverDialogRequest:(void *)arg1 withResultHandler:(void *)arg2; // needs 2 arg types, found 8: AMSDialogRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSDialogResult *, NSError *, void*
- (void)deliverEngagementRequest:(void *)arg1 withResultHandler:(void *)arg2; // needs 2 arg types, found 8: AMSEngagementRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSEngagementResult *, NSError *, void*
- (void)deliverNotifications:(NSArray *)arg1;
- (void)deliverProgress:(NSArray *)arg1;
- (void)deliverViewPresentationRequest:(void *)arg1 resultHandler:(void *)arg2; // needs 2 arg types, found 8: ASDViewPresentationRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ASDViewPresentationResult *, NSError *, void*
- (void)isDialogObserverAvailableWithReplyHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end

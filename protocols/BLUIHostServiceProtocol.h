
@protocol BLUIHostServiceProtocol

@required

- (void)handleAuthenticateRequest:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 8: AMSAuthenticateRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSAuthenticateResult *, NSError *, void*
- (void)handleDialogRequest:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 8: AMSDialogRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSDialogResult *, NSError *, void*
- (void)handleEngagementRequest:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 8: AMSEngagementRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSEngagementResult *, NSError *, void*

@end


@interface BLUIHostServiceNonUI : NSObject <BLUIHostServiceProtocol>

- (void)handleAuthenticateRequest:(id)arg1 withReply:(id /* block */)arg2;
- (void)handleDialogRequest:(id)arg1 withReply:(id /* block */)arg2;
- (void)handleEngagementRequest:(id)arg1 withReply:(id /* block */)arg2;

@end

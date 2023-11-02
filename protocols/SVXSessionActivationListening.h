
@protocol SVXSessionActivationListening <NSObject>

@optional

- (void)sessionManager:(SVXSessionManager *)arg1 didActivateWithContext:(SVXActivationContext *)arg2;
- (void)sessionManager:(SVXSessionManager *)arg1 didDeactivateWithContext:(SVXDeactivationContext *)arg2;
- (void)sessionManager:(SVXSessionManager *)arg1 didNotActivateWithContext:(SVXActivationContext *)arg2 error:(NSError *)arg3;
- (void)sessionManager:(SVXSessionManager *)arg1 willActivateWithContext:(SVXActivationContext *)arg2;
- (void)sessionManager:(SVXSessionManager *)arg1 willDeactivateWithContext:(SVXDeactivationContext *)arg2;

@end


@protocol LAAuthenticationMethodObserver <NSObject>

@optional

- (void)authenticationMethod:(LAAuthenticationMethod *)arg1 didAuthenticateWithResult:(LAAuthenticationMethodResult *)arg2;
- (void)authenticationMethod:(LAAuthenticationMethod *)arg1 didChangeState:(LAAuthenticationMethodState *)arg2;
- (void)authenticationMethod:(LAAuthenticationMethod *)arg1 didStartWithState:(LAAuthenticationMethodState *)arg2;
- (void)authenticationMethodWillTerminate:(LAAuthenticationMethod *)arg1;

@end

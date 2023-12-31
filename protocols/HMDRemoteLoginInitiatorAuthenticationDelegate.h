
@protocol HMDRemoteLoginInitiatorAuthenticationDelegate <NSObject>

@required

- (void)didCompleteAuthentication:(HMDRemoteLoginInitiatorAuthentication *)arg1 error:(NSError *)arg2 loggedInAccount:(ACAccount *)arg3;

@end

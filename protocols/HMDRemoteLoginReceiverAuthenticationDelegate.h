
@protocol HMDRemoteLoginReceiverAuthenticationDelegate <NSObject>

@required

- (void)didCompleteAuthentication:(HMDRemoteLoginAuthentication *)arg1 response:(HMDRemoteLoginAuthenticationResponse *)arg2;

@end

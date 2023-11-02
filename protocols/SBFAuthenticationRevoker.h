
@protocol SBFAuthenticationRevoker <NSObject>

@required

- (void)revokeAuthenticationIfNecessaryForPublicReason:(NSString *)arg1;
- (void)revokeAuthenticationImmediatelyForPublicReason:(NSString *)arg1;
- (void)revokeAuthenticationImmediatelyIfNecessaryForPublicReason:(NSString *)arg1;

@end

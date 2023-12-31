
@protocol SBFAuthenticationStatusProvider <NSObject, SBFAuthenticationRevoker>

@required

- (bool)hasAuthenticatedAtLeastOnceSinceBoot;
- (bool)hasPasscodeSet;
- (bool)isAuthenticated;
- (bool)isAuthenticatedCached;

@end

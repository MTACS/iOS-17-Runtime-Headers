
@protocol PGBackgroundPIPClientToServerInterface <NSObject>

@required

- (oneway void)grantAuthorizationForActivitySessionWithIdentifier:(NSString *)arg1 bundleIdentifier:(NSString *)arg2;
- (oneway void)revokeAuthorization;

@end

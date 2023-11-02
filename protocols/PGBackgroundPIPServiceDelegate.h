
@protocol PGBackgroundPIPServiceDelegate <NSObject>

@required

- (bool)backgroundPIPService:(PGBackgroundPIPService *)arg1 canAuthorizeBackgroundPIPForActivitySessionWithIdentifier:(NSString *)arg2 appBundleIdentifier:(NSString *)arg3;
- (void)backgroundPIPService:(PGBackgroundPIPService *)arg1 didGrantBackgroundPIPAuthorizationForActivitySessionWithIdentifier:(NSString *)arg2;
- (void)backgroundPIPService:(PGBackgroundPIPService *)arg1 didRevokeBackgroundPIPAuthorizationForActivitySessionWithIdentifier:(NSString *)arg2;

@end

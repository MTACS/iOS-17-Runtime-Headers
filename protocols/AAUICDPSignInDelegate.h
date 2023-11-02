
@protocol AAUICDPSignInDelegate <NSObject>

@optional

- (CDPLocalSecret *)cdpLocalSecret;
- (bool)isAttemptingBackupRestore;

@end

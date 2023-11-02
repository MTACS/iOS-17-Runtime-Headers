
@protocol ACAccountStoreClientProtocol <NSObject>

@required

- (void)accountCredentialsDidChangeForAccountWithIdentifier:(NSString *)arg1;
- (void)accountDidChange:(ACAccount *)arg1 withChangeType:(int)arg2;

@end

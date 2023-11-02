
@interface MFGmailClientTokenAuthScheme : ECAuthenticationScheme

- (Class)authenticatorClass;
- (id)authenticatorForAccount:(id)arg1 connection:(id)arg2;
- (bool)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2;
- (id)humanReadableName;
- (id)name;

@end

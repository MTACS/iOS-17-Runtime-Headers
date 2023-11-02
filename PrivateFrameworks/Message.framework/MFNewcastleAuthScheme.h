
@interface MFNewcastleAuthScheme : ECAuthenticationScheme

+ (void)initialize;

- (Class)authenticatorClass;
- (bool)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2;
- (id)humanReadableName;
- (id)name;
- (bool)requiresPassword;

@end

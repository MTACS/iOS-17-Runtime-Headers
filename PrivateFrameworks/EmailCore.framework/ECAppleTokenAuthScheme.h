
@interface ECAppleTokenAuthScheme : ECAuthScheme

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)appleTokenAuthScheme;

- (unsigned int)applescriptScheme;
- (void)dealloc;
- (id)humanReadableName;
- (id)name;
- (bool)requiresPassword;
- (bool)requiresUsername;
- (id)supportedSASLMechanisms;

@end

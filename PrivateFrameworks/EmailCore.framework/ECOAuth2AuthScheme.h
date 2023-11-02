
@interface ECOAuth2AuthScheme : ECAuthScheme

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)oauth2AuthScheme;

- (unsigned int)applescriptScheme;
- (void)dealloc;
- (id)humanReadableName;
- (id)name;
- (bool)requiresPassword;
- (bool)requiresUsername;
- (id)supportedSASLMechanisms;

@end

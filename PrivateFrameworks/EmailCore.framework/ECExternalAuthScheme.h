
@interface ECExternalAuthScheme : ECAuthScheme

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)externalAuthScheme;

- (unsigned int)applescriptScheme;
- (void)dealloc;
- (id)humanReadableName;
- (id)name;
- (bool)requiresPassword;
- (bool)requiresUsername;
- (id)supportedSASLMechanisms;

@end

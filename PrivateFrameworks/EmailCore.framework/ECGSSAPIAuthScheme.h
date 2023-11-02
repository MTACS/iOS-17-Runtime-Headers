
@interface ECGSSAPIAuthScheme : ECAuthScheme

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)gssapiAuthScheme;

- (unsigned int)applescriptScheme;
- (void)dealloc;
- (id)humanReadableName;
- (id)name;
- (bool)requiresPassword;
- (id)supportedSASLMechanisms;

@end

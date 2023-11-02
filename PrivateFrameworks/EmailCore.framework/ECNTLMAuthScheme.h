
@interface ECNTLMAuthScheme : ECAuthScheme

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)ntlmAuthScheme;

- (unsigned int)applescriptScheme;
- (void)dealloc;
- (id)humanReadableName;
- (id)name;
- (id)supportedSASLMechanisms;

@end

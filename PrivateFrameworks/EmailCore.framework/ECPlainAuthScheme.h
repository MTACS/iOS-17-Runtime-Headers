
@interface ECPlainAuthScheme : ECAuthScheme

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)plainAuthScheme;

- (unsigned int)applescriptScheme;
- (void)dealloc;
- (id)humanReadableName;
- (id)name;
- (id)supportedSASLMechanisms;

@end

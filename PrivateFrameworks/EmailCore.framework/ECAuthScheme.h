
@interface ECAuthScheme : NSObject

@property (nonatomic, readonly) unsigned int applescriptScheme;
@property (nonatomic, readonly, copy) NSString *humanReadableName;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) bool requiresPassword;
@property (nonatomic, readonly) bool requiresUsername;
@property (nonatomic, readonly, copy) NSSet *supportedSASLMechanisms;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)knownSchemes;
+ (id)schemeWithApplescriptScheme:(unsigned int)arg1;
+ (id)schemeWithName:(id)arg1;

- (unsigned int)applescriptScheme;
- (id)humanReadableName;
- (id)name;
- (bool)requiresPassword;
- (bool)requiresUsername;
- (id)supportedSASLMechanisms;

@end

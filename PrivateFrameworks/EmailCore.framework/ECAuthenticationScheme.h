
@interface ECAuthenticationScheme : NSObject

@property (nonatomic, readonly) bool hasEncryption;
@property (nonatomic, readonly) NSString *humanReadableName;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool requiresPassword;

+ (id)authenticationSchemesForAccount:(id)arg1 connection:(id)arg2;
+ (void)initialize;
+ (id)knownSchemes;
+ (void)registerSchemeClass:(Class)arg1;
+ (id)schemeWithName:(id)arg1;

- (Class)authenticatorClass;
- (id)authenticatorForAccount:(id)arg1 connection:(id)arg2;
- (bool)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2;
- (Class)connectionClassForAccountClass:(Class)arg1;
- (bool)hasEncryption;
- (id)humanReadableName;
- (id)name;
- (bool)requiresPassword;

@end

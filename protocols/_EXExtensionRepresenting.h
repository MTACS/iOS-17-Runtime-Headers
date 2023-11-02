
@protocol _EXExtensionRepresenting <NSObject>

@required

- (NSDictionary *)attributes;
- (NSString *)bundleIdentifier;
- (id)entitlementNamed:(NSString *)arg1 ofClass:(Class)arg2;
- (NSString *)extensionPointIdentifier;
- (ISIcon *)icon;
- (NSString *)localizedName;
- (NSXPCConnection *)makeXPCConnectionWithError:(id*)arg1;
- (bool)presentsUserInterface;
- (bool)requiresLegacyInfrastructure;
- (bool)requiresMacCatalystBehavior;
- (bool)requiresSceneHosting;
- (NSArray *)roles;
- (NSUUID *)uniqueIdentifier;

@end


@protocol LNMetadataProviderInterface <NSObject>

@required

- (LNActionMetadata *)actionForBundleIdentifier:(NSString *)arg1 andActionIdentifier:(NSString *)arg2 error:(id*)arg3;
- (NSDictionary *)actionsAndSystemProtocolDefaultsForBundleIdentifier:(NSString *)arg1 error:(id*)arg2;
- (NSDictionary *)actionsConformingToSystemProtocol:(LNSystemProtocol *)arg1 withParametersOfTypes:(NSDictionary *)arg2 bundleIdentifier:(NSString *)arg3 error:(id*)arg4;
- (NSDictionary *)actionsConformingToSystemProtocols:(NSSet *)arg1 logicalType:(unsigned long long)arg2 bundleIdentifier:(NSString *)arg3 error:(id*)arg4;
- (NSArray *)actionsForBundleIdentifier:(NSString *)arg1 andActionIdentifier:(NSString *)arg2 error:(id*)arg3;
- (NSArray *)actionsForBundleIdentifier:(NSString *)arg1 error:(id*)arg2;
- (NSDictionary *)actionsWithError:(id*)arg1;
- (NSDictionary *)actionsWithFullyQualifiedIdentifiers:(NSArray *)arg1 error:(id*)arg2;
- (NSString *)appShortcutsProviderMangledTypeNameForBundleIdentifier:(NSString *)arg1 error:(id*)arg2;
- (NSArray *)bundlesWithError:(id*)arg1;
- (NSArray *)entitiesForBundleIdentifier:(NSString *)arg1 error:(id*)arg2;
- (NSDictionary *)entitiesWithError:(id*)arg1;
- (NSArray *)enumsForBundleIdentifier:(NSString *)arg1 error:(id*)arg2;
- (NSDictionary *)enumsWithError:(id*)arg1;
- (long long)metadataVersionForBundleIdentifier:(NSString *)arg1 error:(id*)arg2;
- (NSArray *)queriesForBundleIdentifier:(NSString *)arg1 ofType:(NSString *)arg2 error:(id*)arg3;
- (NSDictionary *)queriesWithError:(id*)arg1;

@end

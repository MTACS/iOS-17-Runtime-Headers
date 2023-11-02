
@protocol DESBundleRegistryManaging <NSObject>

@required

- (NSArray *)allBundleIds;
- (NSArray *)allUnrestrictedBundleIds;
- (NSArray *)allUnrestrictedExtensionIds;
- (bool)containsBundleId:(NSString *)arg1;
- (long long)pluginTypeForBundleId:(NSString *)arg1;

@end

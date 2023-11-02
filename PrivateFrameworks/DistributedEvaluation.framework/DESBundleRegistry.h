
@interface DESBundleRegistry : NSObject <DESBundleRegistryManaging> {
    NSDictionary * _bundleMap;
    NSSet * _highMemoryExtensions;
    NSSet * _lowMemoryExtensions;
    NSSet * _restrictedExtensions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionsWithEndpointName:(id)arg1;
+ (void)initialize;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)allBundleIds;
- (id)allUnrestrictedBundleIds;
- (id)allUnrestrictedExtensionIds;
- (bool)containsBundleId:(id)arg1;
- (id)infoDictionaryForBundleID:(id)arg1;
- (id)init;
- (long long)pluginTypeForBundleId:(id)arg1;

@end

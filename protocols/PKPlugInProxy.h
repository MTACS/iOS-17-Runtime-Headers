
@protocol PKPlugInProxy <PKBundleProxy>

@required

- (<PKBundleProxy> *)containingBundle;
- (<PKExtensionPointProxy> *)extensionPoint;
- (NSDictionary *)infoPlist;
- (bool)isOnSystemPartition;
- (NSArray *)launchPersonas;
- (id)objectForInfoDictionaryKey:(NSString *)arg1 ofClass:(Class)arg2 inScope:(unsigned long long)arg3;
- (NSString *)originalIdentifier;
- (NSNumber *)platform;
- (NSString *)pluginIdentifier;
- (NSDictionary *)pluginKitDictionary;
- (NSUUID *)pluginUUID;
- (NSDate *)registrationDate;

@end

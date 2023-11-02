
@protocol NLAsset <NSObject, NSSecureCoding>

@required

- (void)appendPathWithServiceAssetFolder:(NSString *)arg1;
- (NSString *)description;
- (NSString *)getAssetLocale;
- (NSDictionary *)getAssetMetadata;
- (NSString *)getAssetPath;
- (NSString *)getAssetSetName;
- (long long)getAssetType;
- (NSString *)getAssetVersion;
- (NSDictionary *)toDictionary;

@end

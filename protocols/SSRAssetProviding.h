
@protocol SSRAssetProviding <NSObject>

@required

- (unsigned long long)getAssetProviderType;
- (CSAsset *)installedAssetOfType:(unsigned long long)arg1 forLanguageCode:(NSString *)arg2;

@optional

- (NSArray *)allInstalledAssetsOfType:(unsigned long long)arg1 forLanguage:(NSString *)arg2;

@end

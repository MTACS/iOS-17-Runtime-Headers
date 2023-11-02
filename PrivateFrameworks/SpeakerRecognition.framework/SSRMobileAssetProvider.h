
@interface SSRMobileAssetProvider : NSObject <SSRAssetProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_buildAssetQueryForAssetType:(unsigned long long)arg1;
- (id)_filteredAssets:(id)arg1 forLanguage:(id)arg2;
- (id)_findLatestInstalledAsset:(id)arg1;
- (unsigned long long)_getEndpointAssetCurrentCompatibilityVersion;
- (id)_getEndpointAssetTypeString;
- (unsigned long long)_getSSRAssetCurrentCompatibilityVersion;
- (id)_getSSRAssetTypeString;
- (unsigned long long)_getVoiceTriggerAssetCurrentCompatibilityVersion;
- (id)_getVoiceTriggerAssetTypeString;
- (id)_installedMobileAssetOfType:(unsigned long long)arg1 forLanguage:(id)arg2;
- (id)allInstalledAssetsOfType:(unsigned long long)arg1 forLanguage:(id)arg2;
- (unsigned long long)getAssetProviderType;
- (id)installedAssetOfType:(unsigned long long)arg1 forLanguageCode:(id)arg2;

@end

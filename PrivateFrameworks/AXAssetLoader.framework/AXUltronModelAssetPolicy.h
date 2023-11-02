
@interface AXUltronModelAssetPolicy : AXAssetPolicy

+ (bool)_isUltronAssetCompatible:(id)arg1;
+ (id)assetsToDownloadFromAssets:(id)arg1;
+ (id)compatibleAssetsFromRefreshedAssets:(id)arg1;
+ (long long)maximumCompatibilityVersion;
+ (long long)minimumCompatibilityVersion;
+ (id)newestCompatiableAssetsFromAssets:(id)arg1;
+ (id)ultronAssetType;

- (bool)_assetUsedRecently;
- (id)assetType;
- (id)assetsToDownloadFromRefreshedAssets:(id)arg1;
- (id)assetsToPurgeFromInstalledAssets:(id)arg1;
- (bool)daemonShouldDownloadInBackgroundIfNeeded;
- (id)launchActivityIdentifier;
- (bool)shouldCopyLocally;

@end

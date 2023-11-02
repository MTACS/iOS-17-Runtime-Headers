
@interface AXTTSResourceAssetPolicy : AXAssetPolicy

- (id)_voiceIdentifierForAsset:(id)arg1;
- (id)assetType;
- (id)assetsToPurgeFromInstalledAssets:(id)arg1 withRefreshedAssets:(id)arg2;
- (id)compatibilityVersion;
- (bool)daemonShouldDownloadInBackgroundIfNeeded;
- (id)downloadOptionsForOperation:(unsigned long long)arg1 userInitiated:(bool)arg2;
- (id)launchActivityIdentifier;
- (bool)shouldDownloadAsset:(id)arg1 withInstalledAssets:(id)arg2;

@end

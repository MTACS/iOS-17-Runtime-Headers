
@interface AXImageCaptionModelAssetPolicy : AXAssetPolicy

+ (id)assertionForNewsestCompatibleImageCaptionModelAssetWithStage:(id)arg1 language:(id)arg2 clientIdentifier:(id)arg3;
+ (long long)maximumCompatibilityVersion;
+ (long long)minimumCompatibilityVersion;

- (void)_partitionAssets:(id)arg1 intoValidAssets:(id)arg2 invalidAssets:(id)arg3;
- (id)assetType;
- (id)assetsToDownloadFromRefreshedAssets:(id)arg1;
- (id)assetsToPurgeFromInstalledAssets:(id)arg1;
- (bool)daemonShouldDownloadInBackgroundIfNeeded;
- (id)launchActivityIdentifier;

@end

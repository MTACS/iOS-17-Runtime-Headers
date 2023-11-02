
@interface AXAudiogramIngestionAssetPolicy : AXAssetPolicy

- (bool)_assetsUsedInLastSixMonths;
- (id)assetType;
- (id)assetsToPurgeFromInstalledAssets:(id)arg1;
- (bool)daemonShouldDownloadInBackgroundIfNeeded;
- (id)launchActivityIdentifier;
- (id)maxSupportedFormatVersion;
- (id)minSupportedFormatVersion;
- (bool)shouldCopyLocally;

@end

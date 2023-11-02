
@interface AXVoiceTriggerAssetPolicy : AXAssetPolicy

+ (bool)_assetsUsedInLastSixMonths;
+ (bool)_soundSwitchesEnabled;

- (id)assetType;
- (id)assetsToPurgeFromInstalledAssets:(id)arg1;
- (bool)daemonShouldDownloadInBackgroundIfNeeded;
- (id)launchActivityIdentifier;
- (id)maxSupportedFormatVersion;
- (id)minSupportedFormatVersion;
- (bool)shouldCopyLocally;

@end

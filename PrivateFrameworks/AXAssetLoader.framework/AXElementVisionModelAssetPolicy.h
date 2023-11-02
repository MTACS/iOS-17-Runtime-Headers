
@interface AXElementVisionModelAssetPolicy : AXAssetPolicy

- (id)assetType;
- (id)launchActivityIdentifier;
- (id)maxSupportedFormatVersion;
- (id)minSupportedFormatVersion;
- (bool)shouldDownloadAsset:(id)arg1 withInstalledAssets:(id)arg2;

@end

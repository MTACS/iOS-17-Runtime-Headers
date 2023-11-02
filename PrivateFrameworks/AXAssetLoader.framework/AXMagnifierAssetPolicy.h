
@interface AXMagnifierAssetPolicy : AXAssetPolicy

- (id)assetType;
- (id)launchActivityIdentifier;
- (id)maxSupportedFormatVersion;
- (id)minSupportedFormatVersion;
- (bool)shouldCopyLocally;
- (bool)shouldUseProductionServerForInternalBuilds;

@end

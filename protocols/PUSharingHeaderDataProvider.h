
@protocol PUSharingHeaderDataProvider <NSObject>

@required

- (struct PXAssetMediaTypeCount { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; })assetTypeCount;
- (bool)excludeAccessibilityDescription;
- (bool)excludeCaption;
- (bool)excludeLiveness;
- (bool)excludeLocation;
- (bool)isActionSheet;
- (<PXDisplayAsset> *)keyAsset;
- (NSString *)localizedSubtitle;
- (NSString *)localizedTitle;
- (NSOrderedSet *)orderedSelectedAssets;
- (PHPerson *)person;
- (long long)preferredExportFormat;
- (bool)sendAsAssetBundles;
- (bool)sendAsUnmodifiedOriginals;
- (bool)shareAsCMM;
- (long long)sourceOrigin;

@end


@protocol PXGAssetBadgeDecorationSource <PXGLayoutContentSource>

@required

- (struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; })assetBadgeInfoForAsset:(id <PXDisplayAsset>)arg1 atSpriteIndex:(unsigned int)arg2 inLayout:(PXGLayout *)arg3;
- (bool)wantsAssetBadgeDecorationsInLayout:(PXGLayout *)arg1;
- (bool)wantsFileSizeBadgesInLayout:(PXGLayout *)arg1;
- (bool)wantsInteractiveFavoriteBadgesInLayout:(PXGLayout *)arg1;

@optional

- (PXOperationStatus *)loadStatusForAsset:(id <PXDisplayAsset>)arg1 atSpriteIndex:(unsigned int)arg2 inLayout:(PXGLayout *)arg3;
- (bool)shouldShowSavedToLibraryBadgeForAsset:(id <PXDisplayAsset>)arg1 inLayout:(PXGLayout *)arg2;

@end

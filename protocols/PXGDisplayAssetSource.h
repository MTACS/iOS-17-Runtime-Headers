
@protocol PXGDisplayAssetSource <PXGLayoutContentSource>

@required

- (unsigned long long)desiredPlaceholderStyleInLayout:(PXGLayout *)arg1;
- (<PXDisplayAssetFetchResult> *)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 inLayout:(PXGLayout *)arg2;

@optional

- (<PXGDisplayAssetAdjustment> *)adjustmentForDisplayAsset:(id <PXDisplayAsset>)arg1 spriteIndex:(unsigned int)arg2 inLayout:(PXGLayout *)arg3;
- (PXMediaProvider *)customMediaProviderForDisplayAssetsInLayout:(PXGLayout *)arg1;
- (<PXGDisplayAssetPixelBufferSourcesProvider> *)customPixelBufferSourcesProviderForDisplayAssetsInLayout:(PXGLayout *)arg1;
- (<PXGDisplayAssetRequestObserver> *)displayAssetRequestObserverForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 inLayout:(PXGLayout *)arg2;
- (struct CGSize { double x1; double x2; })minSpriteSizeForPresentationStyle:(unsigned long long)arg1;
- (unsigned long long)presentationIntentForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 inLayout:(PXGLayout *)arg2;
- (bool)shouldApplyCleanApertureCropToStillImagesInLayout:(PXGLayout *)arg1;
- (unsigned long long)supportedDisplayAssetPresentationStylesInLayout:(PXGLayout *)arg1;
- (bool)useLowMemoryDecodeInLayout:(PXGLayout *)arg1;
- (PXGDisplayAssetVideoPresentationController *)videoPresentationControllerForDisplayAsset:(id <PXDisplayAsset>)arg1 spriteIndex:(unsigned int)arg2 inLayout:(PXGLayout *)arg3;

@end

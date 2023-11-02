
@protocol PXGDisplayAssetPixelBufferSourcesProvider <NSObject>

@required

- (<PXGDisplayAssetPixelBufferSource> *)pixelBufferSourceForDisplayAsset:(id <PXDisplayAsset>)arg1 mediaProvider:(PXMediaProvider *)arg2 spriteReference:(PXGSpriteReference *)arg3;
- (void)recyclePixelBufferSourceForDisplayAssets:(NSArray *)arg1;
- (bool)shouldDisplayPreviousNonNullPixelBufferForPixelBufferSource:(id <PXGDisplayAssetPixelBufferSource>)arg1;

@end

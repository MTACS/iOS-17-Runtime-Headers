
@protocol PXMediaViewControllerEventTracker <PXViewControllerEventTracker>

@required

- (<PXDisplayAsset> *)displayedAsset;
- (<PXDisplayAssetCollection> *)displayedAssetCollection;
- (void)setDisplayedAsset:(id <PXDisplayAsset>)arg1;
- (void)setDisplayedAssetCollection:(id <PXDisplayAssetCollection>)arg1;

@end

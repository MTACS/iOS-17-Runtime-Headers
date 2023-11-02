
@protocol PBFPosterGalleryAssetHelperDelegate <NSObject>

@required

- (void)assetHelper:(PBFPosterGalleryAssetHelper *)arg1 didUpdateAssetsForPosterPreview:(id <PBFPosterPreview>)arg2;
- (void)assetHelper:(PBFPosterGalleryAssetHelper *)arg1 posterPreview:(id <PBFPosterPreview>)arg2 teardownLiveViewController:(UIViewController *)arg3;
- (void)assetHelper:(PBFPosterGalleryAssetHelper *)arg1 prepareForPosterPreview:(id <PBFPosterPreview>)arg2 movingToLive:(UIViewController *)arg3;

@end

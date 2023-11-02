
@protocol PXAssetCollectionActionPerformerDelegate <PXActionPerformerDelegate>

@optional

- (void)assetCollectionActionPerformer:(PXAssetCollectionActionPerformer *)arg1 playMovieForAssetCollection:(id <PXDisplayAssetCollection>)arg2;
- (void)assetCollectionActionPerformer:(PXAssetCollectionActionPerformer *)arg1 showMapWithAssetsFetchResult:(id <PXDisplayAssetFetchResult>)arg2;

@end

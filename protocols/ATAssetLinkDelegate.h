
@protocol ATAssetLinkDelegate <NSObject>

@required

- (void)assetLink:(id <ATAssetLink>)arg1 didCloseWithOutstandingAssets:(NSArray *)arg2;
- (void)assetLink:(id <ATAssetLink>)arg1 didFinishAsset:(ATAsset *)arg2 error:(NSError *)arg3 retryable:(bool)arg4;
- (void)assetLink:(id <ATAssetLink>)arg1 didFinishAsset:(ATAsset *)arg2 error:(NSError *)arg3 retryable:(bool)arg4 cancelPendingAssetsInBatch:(bool)arg5;
- (void)assetLink:(id <ATAssetLink>)arg1 didOpenWithPendingAssets:(NSArray *)arg2;
- (void)assetLink:(id <ATAssetLink>)arg1 didPauseAsseDownload:(ATAsset *)arg2 error:(NSError *)arg3;
- (void)assetLink:(id <ATAssetLink>)arg1 didTransitionAssetStates:(NSArray *)arg2;
- (void)assetLink:(id <ATAssetLink>)arg1 didUpdateAsset:(ATAsset *)arg2 progress:(double)arg3;
- (void)assetLink:(id <ATAssetLink>)arg1 didUpdateDownloadPauseReasonForAssets:(NSArray *)arg2;
- (void)assetLinkDidChange:(id <ATAssetLink>)arg1;

@end

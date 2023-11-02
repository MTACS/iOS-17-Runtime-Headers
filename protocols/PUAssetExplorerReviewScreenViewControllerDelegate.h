
@protocol PUAssetExplorerReviewScreenViewControllerDelegate <NSObject>

@required

- (void)assetExplorerReviewScreenViewController:(PUAssetExplorerReviewScreenViewController *)arg1 didPerformCompletionAction:(unsigned long long)arg2 withSelectedAssetUUIDs:(NSSet *)arg3 livePhotoDisabledAssetUUIDs:(NSSet *)arg4 substituteAssetsByUUID:(NSDictionary *)arg5;
- (void)assetExplorerReviewScreenViewControllerDidPressCancel:(PUAssetExplorerReviewScreenViewController *)arg1;

@optional

- (bool)assetExplorerReviewScreenViewController:(PUAssetExplorerReviewScreenViewController *)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id <PUDisplayAsset>)arg3 inAssetCollection:(id <PUDisplayAssetCollection>)arg4;
- (UIMenu *)assetExplorerReviewScreenViewController:(PUAssetExplorerReviewScreenViewController *)arg1 fileSizeMenuForSelectedUUIDs:(NSSet *)arg2;
- (bool)assetExplorerReviewScreenViewController:(PUAssetExplorerReviewScreenViewController *)arg1 shouldEnableActionType:(unsigned long long)arg2 onAsset:(id <PUDisplayAsset>)arg3 inAssetCollection:(id <PUDisplayAssetCollection>)arg4;
- (void)assetExplorerReviewScreenViewController:(PUAssetExplorerReviewScreenViewController *)arg1 willTransitionToSize:(struct CGSize { double x1; double x2; })arg2 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
- (void)assetExplorerReviewScreenViewControllerDidPressRetake:(PUAssetExplorerReviewScreenViewController *)arg1;

@end

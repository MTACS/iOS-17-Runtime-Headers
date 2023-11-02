
@protocol PXPhotosContentControllerDelegate <NSObject>

@required

- (void)dismissPresentedViewControllerForContentController:(PXPhotosContentController *)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })maskPaddingForContentController:(PXPhotosContentController *)arg1;
- (bool)photosContentController:(PXPhotosContentController *)arg1 presentViewController:(NSObject<PXAnonymousViewController> *)arg2;
- (bool)photosContentController:(PXPhotosContentController *)arg1 pushViewController:(NSObject<PXAnonymousViewController> *)arg2;
- (NSObject<PXAnonymousViewController> *)presentingViewControllerForContentController:(PXPhotosContentController *)arg1;
- (NSUndoManager *)undoManagerForContentController:(PXPhotosContentController *)arg1;

@optional

- (void)needsUpdateForContentController:(PXPhotosContentController *)arg1;
- (bool)photosContentController:(PXPhotosContentController *)arg1 canPlayAssetInline:(id <PXDisplayAsset>)arg2;
- (bool)photosContentController:(PXPhotosContentController *)arg1 isDisplayAssetEligibleForAutoPlayback:(id <PXDisplayAsset>)arg2;
- (bool)photosContentController:(PXPhotosContentController *)arg1 isDisplayAssetEligibleForPlaybackWithSettlingEffect:(id <PXDisplayAsset>)arg2;
- (unsigned long long)photosContentControllerFilterSortedRecordsStrategy:(PXPhotosContentController *)arg1;
- (<PXPresentationEnvironment> *)presentationEnvironmentForActionPerformer:(PXActionPerformer *)arg1;

@end

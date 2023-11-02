
@protocol PXPhotosDragControllerDelegate <NSObject>

@required

- (PXAssetReference *)dragController:(PXPhotosDragController *)arg1 draggableAssetReferenceAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)dragController:(PXPhotosDragController *)arg1 draggedAssetReferencesDidChange:(NSSet *)arg2;
- (void)dragController:(PXPhotosDragController *)arg1 dropTargetAssetReferenceDidChange:(PXAssetReference *)arg2;
- (PXAssetReference *)dragController:(PXPhotosDragController *)arg1 dropTargetAssetReferenceForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)dragController:(PXPhotosDragController *)arg1 isDragSessionActiveDidChange:(bool)arg2;
- (PXRegionOfInterest *)dragController:(PXPhotosDragController *)arg1 regionOfInterestForAssetReference:(PXAssetReference *)arg2 image:(id*)arg3;
- (UIScrollView *)dragController:(PXPhotosDragController *)arg1 scrollViewForAssetReference:(PXAssetReference *)arg2;
- (bool)dragController:(PXPhotosDragController *)arg1 shouldResizeCancelledPreviewForAssetReference:(PXAssetReference *)arg2;
- (bool)dragController:(PXPhotosDragController *)arg1 shouldSelectRearrangedAssetReferences:(NSArray *)arg2;
- (PXAssetReference *)dragControllerAssetReferenceForBeginningSession:(PXPhotosDragController *)arg1;
- (NSUndoManager *)dragControllerUndoManager:(PXPhotosDragController *)arg1;
- (NSObject<PXAnonymousViewController> *)dragControllerViewControllerForPresentation:(PXPhotosDragController *)arg1;

@optional

- (NSItemProvider *)dragController:(PXPhotosDragController *)arg1 itemProviderForAssetReference:(PXAssetReference *)arg2;

@end

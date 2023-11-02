
@protocol PXPhotosDetailsActionMenuDelegate <NSObject>

@required

- (bool)actionMenu:(void *)arg1 actionPerformer:(void *)arg2 dismissViewController:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 8: PXActionMenuController *, PXActionPerformer *, UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)actionMenu:(PXActionMenuController *)arg1 actionPerformer:(PXActionPerformer *)arg2 presentViewController:(UIViewController *)arg3;
- (NSUndoManager *)undoManagerForActionMenuController:(PXActionMenuController *)arg1;

@optional

- (void)actionMenu:(PXActionMenuController *)arg1 actionPerformer:(PXActionPerformer *)arg2 didChangeState:(unsigned long long)arg3;
- (void)actionMenu:(PXPhotoDetailsActionMenuController *)arg1 assetCollectionActionPerformer:(PXAssetCollectionActionPerformer *)arg2 playMovieForAssetCollection:(id <PXDisplayAssetCollection>)arg3;
- (<PXPresentationEnvironment> *)presentationEnvironmentForActionPerformer:(PXActionPerformer *)arg1;

@end

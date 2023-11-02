
@interface PXPhotoKitMoveToSharedLibraryActionPerformer : PXPhotoKitAssetActionPerformer {
    NSArray * _assetsToMove;
}

+ (bool)_canPerformWithHasSharedLibraryOrPreview:(bool)arg1 isExitingSharedLibrary:(bool)arg2 collectionAllowsMoveToSharedLibrary:(bool)arg3 isUnsavedSyndicatedAsset:(bool)arg4 canMoveAssetsToSharedLibrary:(bool)arg5;
+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (bool)canPerformOnSubsetOfSelection;
+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 actionManager:(id)arg3;
+ (id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(id /* block */)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;
+ (id)systemImageNameForActionManager:(id)arg1;

- (void).cxx_destruct;
- (void)_moveAssetsToSharedLibraryWithCompletionHandler:(id /* block */)arg1;
- (void)_performAdditionalUserInteractionTasks;
- (void)_presentFailureWithError:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)canPresentAlertInBackgroudState;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end

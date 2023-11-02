
@interface PXPhotoKitMoveToPersonalLibraryActionPerformer : PXPhotoKitAssetActionPerformer {
    <PXFastEnumeration> * _assetsToMove;
}

@property (nonatomic, retain) <PXFastEnumeration> *assetsToMove;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (bool)canPerformOnSubsetOfSelection;
+ (bool)canPerformWithSelectionSnapshot:(id)arg1 person:(id)arg2;
+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 actionManager:(id)arg3;
+ (id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(id /* block */)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;
+ (id)systemImageNameForActionManager:(id)arg1;

- (void).cxx_destruct;
- (void)_moveAssetsToPersonalLibraryWithCompletionHandler:(id /* block */)arg1;
- (id)_multiContributorConfirmationAlertControllerForAssets:(id)arg1 contributorName:(id)arg2;
- (void)_presentFailureWithError:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)assetsToMove;
- (bool)canPresentAlertInBackgroudState;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;
- (void)setAssetsToMove:(id)arg1;
- (bool)shouldExitSelectModeForState:(unsigned long long)arg1;
- (bool)shouldShowConfirmation;

@end

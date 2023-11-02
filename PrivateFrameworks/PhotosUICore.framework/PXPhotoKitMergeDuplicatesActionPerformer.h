
@interface PXPhotoKitMergeDuplicatesActionPerformer : PXPhotoKitAssetActionPerformer {
    PXSelectionSnapshot * _mergeableSelection;
}

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (bool)canPerformOnSubsetOfSelection;
+ (bool)canPerformWithActionManager:(id)arg1;
+ (bool)canPerformWithSelectionSnapshot:(id)arg1 person:(id)arg2;
+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 actionManager:(id)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;
+ (bool)shouldEnableWithActionManager:(id)arg1;

- (void).cxx_destruct;
- (void)_clearSelection;
- (void)_presentDuplicatesTypeDialogWithIdenticalCount:(long long)arg1 totalCount:(long long)arg2 completion:(id /* block */)arg3;
- (void)_presentGenericFailureAlertAndCompleteBackgroundTaskWithError:(id)arg1;
- (bool)canPresentAlertInBackgroudState;
- (void)completeBackgroundTaskWithSuccess:(bool)arg1 error:(id)arg2;
- (void)completeUserInteractionTaskWithSuccess:(bool)arg1 error:(id)arg2;
- (void)performBackgroundTask;
- (void)performMergeWithSelection:(id)arg1 localizedMessage:(id)arg2 onlyIdenticalItemsSelected:(bool)arg3;
- (void)performUserInteractionTask;
- (bool)shouldExitSelectModeForState:(unsigned long long)arg1;

@end

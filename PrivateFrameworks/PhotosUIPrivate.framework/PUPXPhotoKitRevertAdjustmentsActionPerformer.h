
@interface PUPXPhotoKitRevertAdjustmentsActionPerformer : PUPXPhotoKitBatchActionPerformer

+ (bool)_canRevertOnAsset:(id)arg1 fast:(bool)arg2;
+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (bool)canPerformWithSelectionSnapshot:(id)arg1 person:(id)arg2;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;
+ (id)systemImageNameForActionManager:(id)arg1;

- (bool)canPerformOnSubsetOfSelection;
- (void)performUserInteractionTask;

@end

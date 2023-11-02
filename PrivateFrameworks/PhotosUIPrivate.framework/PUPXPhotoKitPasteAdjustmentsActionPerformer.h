
@interface PUPXPhotoKitPasteAdjustmentsActionPerformer : PUPXPhotoKitBatchActionPerformer

+ (bool)_canPasteOnAsset:(id)arg1;
+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (bool)canPerformWithSelectionSnapshot:(id)arg1 person:(id)arg2;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;
+ (id)systemImageNameForActionManager:(id)arg1;

- (void)performUserInteractionTask;

@end

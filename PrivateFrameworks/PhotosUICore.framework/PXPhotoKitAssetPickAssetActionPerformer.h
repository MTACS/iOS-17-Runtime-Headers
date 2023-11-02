
@interface PXPhotoKitAssetPickAssetActionPerformer : PXPhotoKitAssetActionPerformer

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (bool)canPerformWithSelectionSnapshot:(id)arg1 person:(id)arg2;
+ (id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(id /* block */)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;

- (void)performUserInteractionTask;

@end

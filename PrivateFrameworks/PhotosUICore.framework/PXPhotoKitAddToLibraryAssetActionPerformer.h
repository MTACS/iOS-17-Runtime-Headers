
@interface PXPhotoKitAddToLibraryAssetActionPerformer : PXPhotoKitAssetActionPerformer

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (bool)canPerformOnSubsetOfSelection;
+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 actionManager:(id)arg3;
+ (id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(id /* block */)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;

- (void)_simulateImportForAssetReference:(id)arg1 assetImportStatusManager:(id)arg2;
- (void)importAssets:(id)arg1;
- (void)performUserInteractionTask;

@end

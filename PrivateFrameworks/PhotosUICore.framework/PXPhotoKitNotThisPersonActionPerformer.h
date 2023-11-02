
@interface PXPhotoKitNotThisPersonActionPerformer : PXPhotoKitAssetActionPerformer

+ (id)_assetsForActionManager:(id)arg1;
+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;
+ (id)systemImageNameForActionManager:(id)arg1;
+ (id)test_assetsForActionManager:(id)arg1;

- (void)performBackgroundTask;

@end

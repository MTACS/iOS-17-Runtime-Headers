
@interface PXPhotoKitAssetCollectionDeleteMemoryActionPerformer : PXPhotoKitAssetCollectionActionPerformer

+ (bool)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2;
+ (id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3;
+ (bool)isActionDestructive;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3;
+ (id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2;

- (void)_promptDeleteMemoryConfirmationWithCompletionHandler:(id /* block */)arg1;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end

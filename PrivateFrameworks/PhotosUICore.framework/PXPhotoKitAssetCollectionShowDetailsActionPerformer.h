
@interface PXPhotoKitAssetCollectionShowDetailsActionPerformer : PXPhotoKitAssetCollectionActionPerformer

+ (long long)_originForAssetCollection:(id)arg1;
+ (bool)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2;
+ (id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3;
+ (id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2;

- (id)_displayTitleInfoForDetailsOfAssetCollection:(id)arg1 withTitleCategory:(long long)arg2 preferredAttributesPromise:(id /* block */)arg3;
- (id)_localizedTitleForAssetCollection:(id)arg1 titleCategory:(long long*)arg2;
- (void)performUserInteractionTask;

@end

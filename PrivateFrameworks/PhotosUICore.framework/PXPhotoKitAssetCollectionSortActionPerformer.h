
@interface PXPhotoKitAssetCollectionSortActionPerformer : PXPhotoKitAssetCollectionActionPerformer

+ (void)_handleSortOrderSelected:(long long)arg1 forAssetCollection:(id)arg2;
+ (bool)canPerformActionType:(id)arg1 onAssetCollectionReference:(id)arg2 withInputs:(id)arg3;
+ (id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3;
+ (id)createStandardActionForAssetCollectionReference:(id)arg1 withInput:(id)arg2 handler:(id /* block */)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3;
+ (id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2;

@end

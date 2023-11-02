
@interface PXPhotoKitAssetCollectionShowMapActionPerformer : PXPhotoKitAssetCollectionActionPerformer

+ (id)_effectiveAssetsFetchResultWithAssetsFetchResult:(id)arg1 assetCollectionReference:(id)arg2 dataSource:(id)arg3;
+ (bool)canPerformActionType:(id)arg1 onAssetCollectionReference:(id)arg2 withInputs:(id)arg3;
+ (id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3;
+ (id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2;

- (id)activitySystemImageName;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2;
- (id)localizedTitleForUseCase:(unsigned long long)arg1;
- (void)performUserInteractionTask;

@end

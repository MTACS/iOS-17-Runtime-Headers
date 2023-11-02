
@interface _PXPhotoKitAssetCollectionAbstractFavoriteActionPerformer : PXPhotoKitAssetCollectionActionPerformer

+ (bool)_targetFavoriteStateForAssetCollectionReference:(id)arg1;
+ (bool)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3;
+ (id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2;

- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end

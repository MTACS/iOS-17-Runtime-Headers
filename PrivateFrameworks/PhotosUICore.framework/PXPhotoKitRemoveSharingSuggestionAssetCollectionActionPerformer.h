
@interface PXPhotoKitRemoveSharingSuggestionAssetCollectionActionPerformer : PXPhotoKitAssetCollectionActionPerformer

+ (bool)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2;
+ (bool)isActionDestructive;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3;
+ (id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2;

- (void)performBackgroundTask;

@end

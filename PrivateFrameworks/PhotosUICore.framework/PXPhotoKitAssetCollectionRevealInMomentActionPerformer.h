
@interface PXPhotoKitAssetCollectionRevealInMomentActionPerformer : PXPhotoKitAssetCollectionActionPerformer

+ (id)_assetToRevealInAssetCollection:(id)arg1;
+ (bool)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2;
+ (id)createBarButtonItemForAssetCollectionReference:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3;
+ (id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2;

- (void)performUserInteractionTask;

@end

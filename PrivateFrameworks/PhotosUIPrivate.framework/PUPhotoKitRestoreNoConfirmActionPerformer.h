
@interface PUPhotoKitRestoreNoConfirmActionPerformer : PUPhotoKitDestructiveActionsPerformer

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (long long)destructivePhotosAction;
- (bool)shouldConfirmDestructiveAction;

@end

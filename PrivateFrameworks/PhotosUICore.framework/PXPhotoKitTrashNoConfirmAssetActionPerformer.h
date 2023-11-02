
@interface PXPhotoKitTrashNoConfirmAssetActionPerformer : PXPhotoKitTrashAssetActionPerformer

+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 actionManager:(id)arg3;

- (long long)destructivePhotosAction;
- (bool)shouldSkipUserConfirmation;

@end

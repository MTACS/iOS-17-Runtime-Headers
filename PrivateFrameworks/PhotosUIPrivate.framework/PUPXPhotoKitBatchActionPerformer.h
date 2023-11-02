
@interface PUPXPhotoKitBatchActionPerformer : PXPhotoKitAssetActionPerformer

+ (bool)canPerformBatchOnAsset:(id)arg1;
+ (id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(id /* block */)arg3;
+ (id)newActivityProgressAlertForAction:(id)arg1 assets:(id)arg2;
+ (id)newEditActionForPerformer:(id)arg1 class:(Class)arg2 assets:(id)arg3;
+ (id)newProgressToastForAction:(id)arg1 assets:(id)arg2;

@end

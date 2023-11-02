
@interface PUPXPhotoKitRotateActionPerformer : PUPXPhotoKitBatchActionPerformer

+ (bool)_canPerformOnAsset:(id)arg1;
+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (bool)canPerformWithSelectionSnapshot:(id)arg1 person:(id)arg2;

- (void)performUserInteractionTask;
- (long long)rotateDirection;

@end

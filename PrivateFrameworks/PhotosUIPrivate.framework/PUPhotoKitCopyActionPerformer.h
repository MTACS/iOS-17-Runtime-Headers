
@interface PUPhotoKitCopyActionPerformer : PUPhotoKitActionPerformer

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void)_performCopy;
- (void)performUserInteractionTask;

@end

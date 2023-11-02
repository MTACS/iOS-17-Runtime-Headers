
@interface PUPhotoKitSyndicationDeleteActionPerformer : PUPhotoKitDestructiveActionsPerformer

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (long long)destructivePhotosAction;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end

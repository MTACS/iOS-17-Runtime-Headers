
@interface PUPhotoKitSyndicationSaveActionPerformer : PUPXPhotoKitActionPerformerAdapter

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (Class)pxActionPerformerClass;
+ (bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (id)pxActionType;

@end

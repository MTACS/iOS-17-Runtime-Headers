
@interface PUPhotoKitMoveToPersonalLibraryFromSuggestionActionPerformer : PUPXPhotoKitActionPerformerAdapter

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (Class)pxActionPerformerClass;

- (void)completeUserInteractionTaskWithSuccess:(bool)arg1 error:(id)arg2;
- (id)pxActionType;

@end

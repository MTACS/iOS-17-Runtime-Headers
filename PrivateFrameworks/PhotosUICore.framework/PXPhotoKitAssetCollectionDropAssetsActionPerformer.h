
@interface PXPhotoKitAssetCollectionDropAssetsActionPerformer : PXPhotoKitAssetCollectionActionPerformer

+ (bool)canPerformActionType:(id)arg1 onAssetCollectionReference:(id)arg2 withInputs:(id)arg3;
+ (id)dropAssetsActionPerformerForAssetCollection:(id)arg1 dropSession:(id)arg2;

- (void)completeUserInteractionTaskWithSuccess:(bool)arg1 error:(id)arg2;
- (id)memoryAssetsActionFactory;
- (void)performUserInteractionTask;

@end

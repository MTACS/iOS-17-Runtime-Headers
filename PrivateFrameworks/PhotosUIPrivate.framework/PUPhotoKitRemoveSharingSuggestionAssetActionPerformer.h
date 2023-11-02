
@interface PUPhotoKitRemoveSharingSuggestionAssetActionPerformer : PUPXPhotoKitActionPerformerAdapter <PUAssetActionPerformerDelegate> {
    PUPhotoKitTrashActionPerformer * _trashActionPerformer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) PUPhotoKitTrashActionPerformer *trashActionPerformer;

+ (Class)pxActionPerformerClass;

- (void).cxx_destruct;
- (void)_performTrashTask;
- (bool)assetActionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)assetActionPerformer:(id)arg1 presentViewController:(id)arg2;
- (void)performUserInteractionTask;
- (id)pxActionType;
- (void)setTrashActionPerformer:(id)arg1;
- (id)trashActionPerformer;
- (id)undoManagerForAssetActionPerformer:(id)arg1;

@end

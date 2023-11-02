
@interface PUPXPhotoKitActionPerformerAdapter : PUPhotoKitActionPerformer <PXActionPerformerDelegate> {
    PXPhotoKitAssetActionPerformer * _pxActionPerformer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXMemoryAssetsActionFactory> *memoryAssetsActionFactory;
@property (nonatomic, readonly) NSString *pxActionType;
@property (readonly) Class superclass;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (Class)pxActionPerformerClass;

- (void).cxx_destruct;
- (void)_configureActionPerformer:(id)arg1;
- (bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;
- (id)hostViewControllerForActionPerformer:(id)arg1;
- (id)initWithActionType:(unsigned long long)arg1 assets:(id)arg2 orAssetsByAssetCollection:(id)arg3;
- (void)performUserInteractionTask;
- (id)pxActionType;
- (id)undoManagerForActionPerformer:(id)arg1;

@end

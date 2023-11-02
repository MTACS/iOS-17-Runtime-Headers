
@interface PUVideoListAssetExpungeActionPerformer : PUAssetActionPerformer <PXPhotoKitDeletePhotosActionControllerDelegate> {
    <PUVideoListAssetExpungeActionPerformerDelegate> * _actionPerformerDelegate;
}

@property (nonatomic) <PUVideoListAssetExpungeActionPerformerDelegate> *actionPerformerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void).cxx_destruct;
- (void)_performUserInteractionTask;
- (id)actionPerformerDelegate;
- (void)deletePhotosActionController:(id)arg1 dismissConfirmationViewController:(id)arg2;
- (void)deletePhotosActionController:(id)arg1 presentConfirmationViewController:(id)arg2;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;
- (void)setActionPerformerDelegate:(id)arg1;

@end

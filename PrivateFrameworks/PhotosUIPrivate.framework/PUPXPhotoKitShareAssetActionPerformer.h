
@interface PUPXPhotoKitShareAssetActionPerformer : PXPhotoKitAssetActionPerformer <PXActivitySharingControllerDelegate, PXCMMActionPerformerDelegate> {
    PUActivitySharingController * _activitySharingController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXMemoryAssetsActionFactory> *memoryAssetsActionFactory;
@property (readonly) Class superclass;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 actionManager:(id)arg3;
+ (id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(id /* block */)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;
+ (id)systemImageNameForActionManager:(id)arg1;

- (void).cxx_destruct;
- (id)_assetsFetchResultByAssetCollectionFromCollectionListFetchResult:(id)arg1 inDataSource:(id)arg2;
- (void)_didCompleteWithActivityType:(id)arg1 success:(bool)arg2 asset:(id)arg3 person:(id)arg4 selectionSnapshot:(id)arg5;
- (void)_performNotThisPersonWithCompletionHandler:(id /* block */)arg1;
- (void)_performSetKeyFaceWithAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_presentShareSheet;
- (bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;
- (void)activitySharingController:(id)arg1 didCompleteWithActivityType:(id)arg2 success:(bool)arg3;
- (void)activitySharingControllerDidCancel:(id)arg1;
- (void)completeUserInteractionTaskWithSuccess:(bool)arg1 error:(id)arg2;
- (void)performUserInteractionTask;
- (id)undoManagerForActionPerformer:(id)arg1;

@end

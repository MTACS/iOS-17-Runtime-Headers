
@interface PXPhotoKitDestructiveActionPerformer : PXPhotoKitAssetActionPerformer <PXPhotoKitDeletePhotosActionControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canExpungeAsset:(id)arg1 inAssetCollection:(id)arg2;

- (id)_assetsAllowedToExpunge:(id)arg1;
- (void)_logCompletionAnalyticsForAssets:(id)arg1 withAction:(long long)arg2;
- (void)_performAction:(long long)arg1 onAssets:(id)arg2;
- (void)_presentAllDuplicatesDeletionAlertWithCompletion:(id /* block */)arg1;
- (void)deletePhotosActionController:(id)arg1 presentConfirmationViewController:(id)arg2;
- (long long)destructivePhotosAction;
- (bool)isCancellable;
- (void)performUserInteractionTask;

@end

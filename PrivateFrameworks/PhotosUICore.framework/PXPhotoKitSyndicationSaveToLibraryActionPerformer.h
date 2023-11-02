
@interface PXPhotoKitSyndicationSaveToLibraryActionPerformer : PXPhotoKitAssetActionPerformer <PXAssetsSharingHelperDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(id /* block */)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;
+ (id)systemImageNameForActionManager:(id)arg1;

- (bool)assetsSharingHelper:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)assetsSharingHelper:(id)arg1 presentViewController:(id)arg2;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end

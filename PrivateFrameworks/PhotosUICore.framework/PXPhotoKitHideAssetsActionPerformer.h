
@interface PXPhotoKitHideAssetsActionPerformer : PXPhotoKitAssetActionPerformer {
    PXHideAssetsAction * __action;
}

@property (nonatomic, retain) PXHideAssetsAction *_action;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(id /* block */)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;
+ (id)systemImageNameForActionManager:(id)arg1;

- (void).cxx_destruct;
- (id)_action;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;
- (void)set_action:(id)arg1;

@end

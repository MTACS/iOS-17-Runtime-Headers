
@interface PUPhotoKitEditActionPerformer : PUPhotoKitActionPerformer {
    UIViewController * _presentedAlertViewController;
    PUQuickCropContext * _quickCropContext;
}

@property (nonatomic, retain) PUQuickCropContext *quickCropContext;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void).cxx_destruct;
- (void)_beginEditingCurrentAsset;
- (void)_presentEditorForAsset:(id)arg1;
- (void)performUserInteractionTask;
- (id)quickCropContext;
- (void)setQuickCropContext:(id)arg1;

@end

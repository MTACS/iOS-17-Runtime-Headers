
@interface PUPXPhotoKitAddToAlbumActionPerformer : PXPhotoKitAssetActionPerformer {
    PUAlbumPickerViewController * _albumPickerViewController;
}

@property (nonatomic, retain) PUAlbumPickerViewController *albumPickerViewController;

+ (void)_configureAction:(id)arg1;
+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 actionManager:(id)arg3;
+ (id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(id /* block */)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;
+ (id)systemImageNameForActionManager:(id)arg1;

- (void).cxx_destruct;
- (void)_handlePickedAlbum:(id)arg1 assets:(id)arg2;
- (void)_handleUserInteractionTaskResult:(bool)arg1 error:(id)arg2;
- (id)albumPickerViewController;
- (void)performUserInteractionTask;
- (void)setAlbumPickerViewController:(id)arg1;

@end

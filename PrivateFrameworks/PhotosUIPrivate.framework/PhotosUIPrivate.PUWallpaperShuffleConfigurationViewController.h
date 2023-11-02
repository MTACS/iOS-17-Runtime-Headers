
@interface PhotosUIPrivate.PUWallpaperShuffleConfigurationViewController : UIViewController <UIAdaptivePresentationControllerDelegate> {
    void $__lazy_storage_$_contentViewController;
    void contentMode;
    void delegate;
    void manualSelectionPhotoPicker;
    void style;
    void viewModel;
}

@property (nonatomic) <_TtP15PhotosUIPrivate53PUWallpaperShuffleConfigurationViewControllerDelegate_> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)didFailFinishingWithPosterConfiguration;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1 style:(long long)arg2;
- (id)initWithPhotoLibrary:(id)arg1 style:(long long)arg2 posterConfiguration:(id)arg3 centerMedia:(id)arg4;
- (id)initWithPhotoLibrary:(id)arg1 style:(long long)arg2 posterConfiguration:(id)arg3 centerMedia:(id)arg4 contentMode:(long long)arg5;
- (void)presentationControllerWillDismiss:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end

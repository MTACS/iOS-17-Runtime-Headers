
@interface PUAmbientPhotoFramePlayergroundViewController : UIViewController {
    void $__lazy_storage_$_environment;
    void $__lazy_storage_$_photoFrameController;
    void $__lazy_storage_$_renderer;
    void backgroundView;
    void floatingView;
    void foregroundView;
    void photoLibrary;
    void preferences;
}

@property (nonatomic, readonly) bool prefersHomeIndicatorAutoHidden;
@property (nonatomic, readonly) bool prefersStatusBarHidden;

- (void).cxx_destruct;
- (void)handleLongPress:(id)arg1;
- (void)handleTap:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPhotoLibrary:(id)arg1;
- (bool)prefersHomeIndicatorAutoHidden;
- (bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end


@interface CoreIDVUI.RGBCaptureViewController : UIViewController <UINavigationControllerDelegate> {
    void $__lazy_storage_$_bottomTray;
    void $__lazy_storage_$_imageContainerView;
    void $__lazy_storage_$_imageView;
    void $__lazy_storage_$_primaryButton;
    void $__lazy_storage_$_primaryLabel;
    void $__lazy_storage_$_primaryStackView;
    void $__lazy_storage_$_scrollView;
    void $__lazy_storage_$_titleLabel;
    void activityIndicator;
    void analyticsReporter;
    void captureConfig;
    void configuration;
    void eligibilityHelper;
    void faceOutOfBoundsRestarts;
    void faceTooSmallRestarts;
    void inWatchModeOnly;
    void interactor;
    void proofingFlowManager;
    void sentToBackgroundRestarts;
    void stitchDetectedRestarts;
    void timeoutRestarts;
}

- (void).cxx_destruct;
- (void)cancelBarButtonClicked;
- (void)configureFonts;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (void)primaryButtonTargetAction;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end

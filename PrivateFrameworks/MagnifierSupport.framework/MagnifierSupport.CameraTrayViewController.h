
@interface MagnifierSupport.CameraTrayViewController : UIViewController {
    void $__lazy_storage_$_settingsButton;
    void $__lazy_storage_$_snapshotButton;
    void $__lazy_storage_$_snapshotModeButton;
    void $__lazy_storage_$_successfulMultiShotCaptureCount;
    void $__lazy_storage_$_viewSnapshotsButton;
    void captureDelegate;
    void freezeFrameModeSubscription;
    void freezeFrameReviewSubscription;
    void settingsDelegate;
    void switchActivityDelegate;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)didTapDoneButton:(id)arg1;
- (void)didTapSettingsButton:(id)arg1;
- (void)didTapSnapshotButton:(id)arg1;
- (void)didTapSnapshotModeButton:(id)arg1;
- (void)didTapViewSnapshotsButton:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end

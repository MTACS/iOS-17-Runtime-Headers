
@interface AXWatchRemoteScreenUI.AXTwiceCompanionMainViewController : UIViewController {
    void cardBackgroundView;
    void dismissButton;
    void pullToDismissManager;
    void statusLabel;
    void titleLabel;
    void watchDeviceView;
}

@property (nonatomic, readonly) bool shouldAutorotate;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)cardSwipeDownWithGesture:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end

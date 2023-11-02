
@interface BTSpatialTutorialViewController : UIViewController {
    UIAlertController * _alert;
    bool  _alertShowing;
    bool  _budsInEar;
    NSMutableArray * _constraints;
    BTSDevice * _currentDevice;
    RMMediaSession * _mediaSession;
    bool  _mediaSessionStarted;
    UISegmentedControl * _segmentedControl;
    UIView * _spacerView;
    VPSpatialTutorialContentView * _spatialTutorialContentView;
    UIStackView * _stackView;
    OBWelcomeController * _welcomeController;
}

@property (nonatomic, retain) BTSDevice *currentDevice;

- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)checkStatusAndPlay;
- (id)currentDevice;
- (void)deviceDisconnectedHandler:(id)arg1;
- (void)dismissWelcomeController;
- (void)handleAudioSessionInterruption:(id)arg1;
- (void)handleMediaServerConnectionDied:(id)arg1;
- (void)inEarStatusChangedHandler:(id)arg1;
- (void)initCommon;
- (id)initWithDevice:(id)arg1;
- (void)powerChangedHandler:(id)arg1;
- (void)quitSpatialTutorial:(id)arg1;
- (void)segmentControlValueChanged:(id)arg1;
- (void)setCurrentDevice:(id)arg1;
- (void)setupConstraints;
- (void)setupStackView;
- (void)setupWelcomeController;
- (void)showAlert;
- (void)startPlayingContent;
- (void)stopPlayingContent;
- (void)updateInEarState;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end

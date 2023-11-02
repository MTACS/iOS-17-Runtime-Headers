
@interface DSEmergencyResetController : DSOBWelcomeController <DSController> {
    DSAppSharing * _appSharing;
    SPBeaconManager * _beaconManager;
    OBBoldTrayButton * _boldButton;
    <DSNavigationDelegate> * _delegate;
    bool  _isFetching;
    DSSharingPermissions * _permissions;
    UIStackView * _progressStackView;
    UIProgressView * _progressView;
    NSError * _resetError;
    bool  _userDidPressReset;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) DSAppSharing *appSharing;
@property (nonatomic, retain) SPBeaconManager *beaconManager;
@property (nonatomic, retain) OBBoldTrayButton *boldButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DSNavigationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFetching;
@property (nonatomic, retain) DSSharingPermissions *permissions;
@property (nonatomic, retain) UIStackView *progressStackView;
@property (nonatomic, retain) UIProgressView *progressView;
@property (nonatomic, retain) NSError *resetError;
@property (readonly) Class superclass;
@property (nonatomic) bool userDidPressReset;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (void)initialize;

- (void).cxx_destruct;
- (id)appSharing;
- (id)beaconManager;
- (id)boldButton;
- (id)delegate;
- (void)fetchSharingPermissions:(id /* block */)arg1;
- (void)handleErrorsAndMoveToNextPane;
- (void)hideProgressBar;
- (id)init;
- (bool)isFetching;
- (id)permissions;
- (id)progressStackView;
- (id)progressView;
- (void)removeAllPairedDevicesOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)resetAllFirstPartySharing:(id /* block */)arg1;
- (void)resetAllThirdPartyTCCs:(id /* block */)arg1;
- (id)resetError;
- (void)resetNecessaryFirstPartyPermissions:(id /* block */)arg1;
- (void)safetyResetAll;
- (void)safetyResetAllPressed;
- (void)setAppSharing:(id)arg1;
- (void)setBeaconManager:(id)arg1;
- (void)setBoldButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDigitalSeparationTipsFlag;
- (void)setIsFetching:(bool)arg1;
- (void)setPermissions:(id)arg1;
- (void)setProgressStackView:(id)arg1;
- (void)setProgressView:(id)arg1;
- (void)setResetError:(id)arg1;
- (void)setUserDidPressReset:(bool)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)showProgressBar;
- (void)updateProgressBar;
- (bool)userDidPressReset;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)workQueue;

@end

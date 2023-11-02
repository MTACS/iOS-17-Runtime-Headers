
@interface CSQuickActionsViewController : CSCoverSheetViewControllerBase <CSQuickActionsDelegate, SBUIFlashlightObserver> {
    bool  _animatingToCamera;
    <CSCameraPrewarming> * _cameraPrewarmer;
    CSCoverSheetViewController * _coverSheetViewController;
    SBUIFlashlightController * _flashlight;
    <SBFLockOutStatusProvider> * _lockOutController;
    SBLockScreenDefaults * _lockScreenDefaults;
    CSLockScreenSettings * _prototypeSettings;
    bool  _suppressingVisibleChanges;
}

@property (nonatomic) bool animatingToCamera;
@property (nonatomic, retain) <CSCameraPrewarming> *cameraPrewarmer;
@property (nonatomic) CSCoverSheetViewController *coverSheetViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SBFLockOutStatusProvider> *lockOutController;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressingVisibleChanges;

+ (bool)deviceSupportsButtons;
+ (Class)viewClass;

- (void).cxx_destruct;
- (void)_addStateCaptureHandlers;
- (void)_deviceBlockStateDidChangeNotification:(id)arg1;
- (void)_featureLockStateDidChangeNotification:(id)arg1;
- (bool)_isFlashlightOn;
- (void)_launchCamera;
- (void)_resetIdleTimer;
- (void)_setupFlashlight;
- (bool)_shouldPrelaunchOnTouch;
- (bool)_shouldPrewarmOnTouch;
- (bool)_supportsCamera;
- (void)_tearDownFlashlight;
- (void)_tearDownFlashlightIfOff;
- (void)_toggleFlashlight;
- (void)_updateFlashlightButtonAvailability;
- (void)_updateFlashlightButtonAvailabilityRespectingSuppression:(bool)arg1;
- (void)_updateFlashlightButtonState;
- (bool)allowsCameraPress;
- (bool)allowsFlashlight;
- (bool)allowsFlashlightInteraction;
- (bool)animatingToCamera;
- (id)cameraPrewarmer;
- (id)coverSheetViewController;
- (void)dealloc;
- (void)fireActionForButton:(id)arg1;
- (void)flashlightAvailabilityDidChange:(bool)arg1;
- (void)flashlightLevelDidChange:(unsigned long long)arg1;
- (bool)handleEvent:(id)arg1;
- (bool)hasCamera;
- (bool)hasFlashlight;
- (id)init;
- (id)initWithLockScreenDefaults:(id)arg1;
- (bool)interpretsLocationAsContent:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2;
- (bool)isPortrait;
- (void)loadView;
- (id)lockOutController;
- (long long)presentationPriority;
- (long long)presentationStyle;
- (long long)presentationType;
- (id)quickActionsView;
- (id)quickActionsViewIfLoaded;
- (void)setAnimatingToCamera:(bool)arg1;
- (void)setCameraPrewarmer:(id)arg1;
- (void)setCoverSheetViewController:(id)arg1;
- (void)setLockOutController:(id)arg1;
- (void)setSuppressingVisibleChanges:(bool)arg1;
- (bool)suppressingVisibleChanges;
- (void)touchBeganForButton:(id)arg1;
- (void)touchEndedForButton:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end

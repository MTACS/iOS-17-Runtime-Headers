
@interface MRUVolumeBackgroundViewController : UIViewController <CCUIContentModuleBackgroundViewController, MRUAudioModuleControllerObserver, UIGestureRecognizerDelegate> {
    MRUAudioModuleController * _audioModuleController;
    <MRUVolumeBackgroundViewControllerDelegate> * _delegate;
    float  _systemVolumeValue;
}

@property (nonatomic, retain) MRUAudioModuleController *audioModuleController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MRUVolumeBackgroundViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) float systemVolumeValue;
@property (nonatomic, retain) MRUVolumeBackgroundView *view;
@property (nonatomic, retain) MRUVolumeBackgroundView *viewIfLoaded;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)audioModuleController;
- (void)audioModuleController:(id)arg1 conversationAwarenessController:(id)arg2 didChangeConversationAwarenessEnabled:(bool)arg3;
- (void)audioModuleController:(id)arg1 conversationAwarenessController:(id)arg2 didChangeConversationAwarenessSupported:(bool)arg3;
- (void)audioModuleController:(id)arg1 listeningModeController:(id)arg2 didChangeAvailablePrimaryListeningMode:(id)arg3;
- (void)audioModuleController:(id)arg1 listeningModeController:(id)arg2 didChangeAvailableSecondaryListeningModes:(id)arg3;
- (void)audioModuleController:(id)arg1 listeningModeController:(id)arg2 didChangePrimaryListeningMode:(id)arg3;
- (void)audioModuleController:(id)arg1 listeningModeController:(id)arg2 didChangeSecondaryListeningMode:(id)arg3;
- (void)audioModuleController:(id)arg1 spatialAudioController:(id)arg2 didChangeAvailableSpatialModes:(id)arg3;
- (void)audioModuleController:(id)arg1 spatialAudioController:(id)arg2 didChangeNowPlayingInfo:(id)arg3;
- (void)audioModuleController:(id)arg1 spatialAudioController:(id)arg2 didChangeSelectedSpatialMode:(id)arg3;
- (void)audioModuleController:(id)arg1 systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)arg2;
- (void)audioModuleController:(id)arg1 systemOutputDeviceRouteControllerDidUpdateOutputDevices:(id)arg2;
- (void)collapseExpandableButtons;
- (void)conversationAwarenessButtonDidChangeValue:(id)arg1;
- (id)delegate;
- (void)didTapPrimaryListeningModeButton:(id)arg1;
- (void)didTapSecondaryListeningModeButton:(id)arg1;
- (void)didTapSpatialAudioModeButton:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })effectiveContentFrameForContainerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithAudioModuleController:(id)arg1;
- (void)loadView;
- (void)performLayoutWithAnimation:(id /* block */)arg1;
- (void)primaryListeningModeButtonDidChangeValue:(id)arg1;
- (void)secondaryListeningModeButtonDidChangeValue:(id)arg1;
- (void)setAudioModuleController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSystemVolumeValue:(float)arg1;
- (void)spatialAudioModeButtonDidChangeValue:(id)arg1;
- (float)systemVolumeValue;
- (void)updateConversationAwarenessButton;
- (void)updateNowPlaying;
- (void)updatePrimaryListeningModeButton;
- (void)updatePrimaryRouteView;
- (void)updateSecondaryListeningModeButton;
- (void)updateSecondaryRouteView;
- (void)updateSpatialAudioModeButton;
- (void)updateVisibility;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end

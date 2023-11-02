
@interface HACCShortcutViewBackgroundController : CCUICustomContentModuleBackgroundViewController {
    CCUILabeledRoundButtonViewController * _comfortSoundsButtonController;
    NSMutableArray * _constraints;
    NSMutableArray * _controls;
    <HACCShortcutViewBackgroundDelegate> * _delegate;
    CCUILabeledRoundButtonViewController * _deviceToggleButtonController;
    MediaControlsBluetoothListeningModeButton * _listeningModeButton;
    CCUILabeledRoundButtonViewController * _listeningModeButtonController;
    CCUILabeledRoundButtonViewController * _liveListenButtonController;
    AXDispatchTimer * _noiseControlUpdateTimer;
}

@property (nonatomic, retain) CCUILabeledRoundButtonViewController *comfortSoundsButtonController;
@property (nonatomic, retain) NSMutableArray *constraints;
@property (nonatomic, retain) NSMutableArray *controls;
@property (nonatomic) <HACCShortcutViewBackgroundDelegate> *delegate;
@property (nonatomic, retain) CCUILabeledRoundButtonViewController *deviceToggleButtonController;
@property (nonatomic, retain) MediaControlsBluetoothListeningModeButton *listeningModeButton;
@property (nonatomic, retain) CCUILabeledRoundButtonViewController *listeningModeButtonController;
@property (nonatomic, retain) CCUILabeledRoundButtonViewController *liveListenButtonController;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)comfortSoundsButtonController;
- (void)comfortSoundsButtonTapped:(id)arg1;
- (id)constraints;
- (id)controls;
- (id)delegate;
- (id)deviceToggleButtonController;
- (double)footerHeight;
- (id)init;
- (id)listeningMode;
- (id)listeningModeButton;
- (id)listeningModeButtonController;
- (void)listeningModeButtonDidUpdateValue:(id)arg1;
- (id)liveListenButtonController;
- (void)liveListenButtonTapped:(id)arg1;
- (void)otherDeviceButtonTapped:(id)arg1;
- (void)reset;
- (void)setComfortSoundsButtonController:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setControls:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceToggleButtonController:(id)arg1;
- (bool)setListeningMode:(id)arg1;
- (void)setListeningModeButton:(id)arg1;
- (void)setListeningModeButtonController:(id)arg1;
- (void)setLiveListenButtonController:(id)arg1;
- (void)update;
- (void)updateComfortSoundsButtonStatus;
- (void)updateFooterLayout;
- (void)updateNoiseControl:(id)arg1;

@end


@interface CSMagSafeAccessorySleeveViewController : CSMagSafeAccessoryViewController <BCBatteryDeviceObserving> {
    BCBatteryDeviceController * _batteryDeviceController;
    BrightnessSystemClient * _brightnessClient;
    bool  _chargingAnimationVisible;
    <SBFDateProviding> * _dateProvider;
    SBFLockScreenDateViewController * _dateViewController;
    _UILegibilitySettings * _legibilitySettings;
    SBFLockScreenDateViewController * _secondaryDateViewController;
    CSMagSafeAccessorySleeveView * _sleeveView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleBounds;
}

@property (nonatomic, retain) BCBatteryDeviceController *batteryDeviceController;
@property (nonatomic, retain) BrightnessSystemClient *brightnessClient;
@property (nonatomic) bool chargingAnimationVisible;
@property (nonatomic, retain) <SBFDateProviding> *dateProvider;
@property (nonatomic, retain) SBFLockScreenDateViewController *dateViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, retain) SBFLockScreenDateViewController *secondaryDateViewController;
@property (nonatomic, retain) CSMagSafeAccessorySleeveView *sleeveView;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleBounds;

- (void).cxx_destruct;
- (id)_legibilitySettingsForAccessory:(id)arg1;
- (void)_removeOverrideFloor;
- (void)_updateOverrideFloor;
- (id)accessoryView;
- (double)animationDurationBeforeDismissal;
- (id)batteryDeviceController;
- (id)brightnessClient;
- (double)chargingAnimationDuration;
- (bool)chargingAnimationVisible;
- (void)connectedDevicesDidChange:(id)arg1;
- (id)dateProvider;
- (id)dateViewController;
- (bool)handleEvent:(id)arg1;
- (bool)hasChargingAnimation;
- (id)initWithAccessory:(id)arg1;
- (bool)isStatic;
- (id)legibilitySettings;
- (id)secondaryDateViewController;
- (void)setBatteryDeviceController:(id)arg1;
- (void)setBrightnessClient:(id)arg1;
- (void)setChargingAnimationVisible:(bool)arg1;
- (void)setDateProvider:(id)arg1;
- (void)setDateViewController:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setSecondaryDateViewController:(id)arg1;
- (void)setSleeveView:(id)arg1;
- (void)setVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)showingChargingAnimation;
- (id)sleeveView;
- (void)transitionChargingViewVisible:(bool)arg1 chargingInfo:(id)arg2;
- (void)updateFont:(id)arg1 textColor:(id)arg2 vibrancyConfiguration:(id)arg3 numberingSystem:(id)arg4;
- (void)updateViewWithBatteryCharging:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBounds;

@end

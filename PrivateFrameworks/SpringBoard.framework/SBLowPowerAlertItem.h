
@interface SBLowPowerAlertItem : SBAlertItem {
    SPBeaconManager * _beaconManager;
    bool  _hasEnableLowPowerModeAction;
    bool  _showFindMyAlert;
    unsigned int  _talkLevel;
}

@property (nonatomic, retain) SPBeaconManager *beaconManager;
@property (nonatomic) bool hasEnableLowPowerModeAction;
@property (nonatomic) bool showFindMyAlert;

+ (bool)_shouldIgnoreChangeToBatteryLevel:(unsigned int)arg1;
+ (unsigned int)_thresholdForLevel:(unsigned int)arg1;
+ (void)initialize;
+ (void)setBatteryLevel:(unsigned int)arg1;

- (void).cxx_destruct;
- (id)_batteryPercentageString;
- (id)_createSystemApertureElement;
- (void)_didDeactivateForDismissAction;
- (void)_enableLowPowerMode;
- (id)_enableLowPowerModeActionTitle;
- (void)_enableLowPowerModeActionTriggered;
- (bool)_isLowPowerModeEnabled;
- (id)_lowBatteryTitle;
- (bool)_supportsLowPowerMode;
- (id)beaconManager;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (void)didDeactivateForReason:(int)arg1;
- (bool)hasEnableLowPowerModeAction;
- (id)init;
- (id)initWithLevel:(unsigned int)arg1;
- (void)setBeaconManager:(id)arg1;
- (void)setHasEnableLowPowerModeAction:(bool)arg1;
- (void)setShowFindMyAlert:(bool)arg1;
- (bool)shouldShowInEmergencyCall;
- (bool)shouldShowInLockScreen;
- (bool)showFindMyAlert;
- (bool)wakeDisplay;

@end

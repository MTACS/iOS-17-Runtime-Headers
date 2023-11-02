
@interface STUIItemSettings : PTSettings {
    bool  _batteryCondensedPercentageForceEnabled;
    bool  _batteryPercentageAlwaysEnabled;
    bool  _secondarySIMUnderBaseline;
    bool  _showBothDualCarrierNames;
    bool  _showRingerOffLockScreen;
    bool  _showRingerOnAODLockScreen;
    bool  _showRingerWhenSilenced;
}

@property (nonatomic) bool batteryCondensedPercentageForceEnabled;
@property (nonatomic) bool batteryPercentageAlwaysEnabled;
@property (nonatomic) bool secondarySIMUnderBaseline;
@property (nonatomic) bool showBothDualCarrierNames;
@property (nonatomic) bool showRingerOffLockScreen;
@property (nonatomic) bool showRingerOnAODLockScreen;
@property (nonatomic) bool showRingerWhenSilenced;

+ (id)settingsControllerModule;

- (bool)batteryCondensedPercentageForceEnabled;
- (bool)batteryPercentageAlwaysEnabled;
- (bool)secondarySIMUnderBaseline;
- (void)setBatteryCondensedPercentageForceEnabled:(bool)arg1;
- (void)setBatteryPercentageAlwaysEnabled:(bool)arg1;
- (void)setDefaultValues;
- (void)setSecondarySIMUnderBaseline:(bool)arg1;
- (void)setShowBothDualCarrierNames:(bool)arg1;
- (void)setShowRingerOffLockScreen:(bool)arg1;
- (void)setShowRingerOnAODLockScreen:(bool)arg1;
- (void)setShowRingerWhenSilenced:(bool)arg1;
- (bool)showBothDualCarrierNames;
- (bool)showRingerOffLockScreen;
- (bool)showRingerOnAODLockScreen;
- (bool)showRingerWhenSilenced;

@end

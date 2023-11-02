
@interface SBStatusBarDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly) NSArray *countryCodesShowingEmergencyOnlyStatus;
@property (nonatomic, readonly) bool showBatteryLevel;
@property (nonatomic, readonly) bool showBatteryPercentage;
@property (nonatomic, readonly) bool showOptimalCellDataForCarPlay;
@property (nonatomic, readonly) bool showOverridesForRecording;
@property (nonatomic, readonly) bool showRSSI;
@property (nonatomic) bool showRingerState;
@property (nonatomic, readonly) bool showThermalWarning;
@property (nonatomic, readonly) unsigned long long statusBarLogLevel;
@property (nonatomic, readonly) bool suppressStatusBarOverrideForScreenSharing;

- (void)_bindAndRegisterDefaults;

@end


@interface AMAmbientDefaults : BSAbstractDefaultDomain

@property (nonatomic) bool alwaysOnEnabled;
@property (nonatomic) bool bumpToWakeEnabled;
@property (nonatomic) bool enableAmbientMode;
@property (getter=isFirstPresentation, nonatomic) bool firstPresentation;
@property (nonatomic) bool ignoreBatteryChargingForPresentation;
@property (nonatomic, copy) NSDictionary *lastSelectedConfigurations;
@property (nonatomic) unsigned long long lifetimePresentationCounter;
@property (nonatomic) bool motionToWakeEnabled;
@property (nonatomic) bool nightModeEnabled;
@property (nonatomic) bool notificationsEnabled;
@property (nonatomic) bool notificationsPreviewOnTapOnlyEnabled;

- (void)_bindAndRegisterDefaults;
- (id)init;

@end

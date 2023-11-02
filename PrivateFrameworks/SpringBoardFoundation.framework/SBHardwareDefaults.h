
@interface SBHardwareDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly) bool disableHomeButton;
@property (nonatomic, readonly) bool disableHomeButtonDoublePress;
@property (nonatomic) bool disableNaturalVolumeButtonOrientation;
@property (nonatomic, readonly) bool disableProximitySensor;
@property (nonatomic) bool hasSeenACaseLatchCoverOnce;
@property (nonatomic) long long homeButtonHapticType;

- (void)_bindAndRegisterDefaults;
- (bool)_deviceRequiresNaturalVolumeButtonArrangement;
- (bool)isNaturalVolumeButtonOrientationEnabled;

@end

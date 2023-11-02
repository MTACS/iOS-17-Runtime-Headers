
@interface SBMiscellaneousDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) float backlightLevel;
@property (nonatomic) long long dataPlanActivationPromptCount;
@property (nonatomic, readonly) bool disableAsyncRenderingSurfaceRetention;
@property (nonatomic, readonly) bool disableAutomaticMallocStackLogging;
@property (nonatomic, readonly) bool enableDynamicJetsamLimits;
@property (nonatomic) bool launchWithMallocStackLogging;
@property (nonatomic) bool sensitiveUIEnabled;
@property (nonatomic) bool suppressAlertsForKeynote;
@property (nonatomic, readonly) bool suppressNoSimAlert;
@property (nonatomic, readonly) bool walletPreArmForceLockButton;

- (void)_bindAndRegisterDefaults;

@end

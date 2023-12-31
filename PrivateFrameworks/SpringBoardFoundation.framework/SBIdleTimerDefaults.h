
@interface SBIdleTimerDefaults : SBAbstractSpringBoardDefaultDomain

@property (getter=isBacklightLoggingEnabled, nonatomic, readonly) bool backlightLoggingEnabled;
@property (nonatomic, readonly) bool disableAttentionAwareness;
@property (nonatomic, readonly) bool disableAutoDim;
@property (nonatomic, readonly) bool dontDimOrLockWhileConnectedToPower;
@property (nonatomic, readonly) double minimumLockscreenIdleTime;
@property (nonatomic, readonly) bool supportLiftToWake;
@property (nonatomic, readonly) bool supportTapToWake;

- (void)_bindAndRegisterDefaults;
- (bool)disableAutoDim;
- (bool)disableAutoDimExists;

@end

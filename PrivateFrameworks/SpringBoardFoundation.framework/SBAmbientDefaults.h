
@interface SBAmbientDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) double qiChargingIdleTimerDuration;

- (void)_bindAndRegisterDefaults;

@end

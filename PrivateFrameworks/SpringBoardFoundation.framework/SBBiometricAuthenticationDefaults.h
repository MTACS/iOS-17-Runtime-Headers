
@interface SBBiometricAuthenticationDefaults : SBAbstractSpringBoardDefaultDomain

@property (getter=isLogTimestampsEnabled, nonatomic, readonly) bool logTimestampsEnabled;

- (void)_bindAndRegisterDefaults;

@end

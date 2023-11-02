
@interface SBBiometricKitDefaults : BSAbstractDefaultDomain

@property (nonatomic) bool coachingHintsEnabled;

- (void)_bindAndRegisterDefaults;
- (id)init;

@end

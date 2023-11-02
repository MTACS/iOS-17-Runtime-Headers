
@interface SBExternalDuetDefaults : BSAbstractDefaultDomain

@property (nonatomic, readonly) NSArray *duetAllowedApps;

- (void)_bindAndRegisterDefaults;
- (id)init;

@end

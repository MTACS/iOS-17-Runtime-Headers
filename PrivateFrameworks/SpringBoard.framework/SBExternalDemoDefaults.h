
@interface SBExternalDemoDefaults : BSAbstractDefaultDomain

@property (nonatomic, readonly) bool shouldLockIconsInStoreDemoMode;

- (void)_bindAndRegisterDefaults;
- (id)init;

@end

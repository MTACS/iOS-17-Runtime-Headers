
@interface SBDemoDefaults : SBAbstractSpringBoardDefaultDomain

@property (getter=isStoreDemoApplicationLockEnabled, nonatomic, readonly) bool storeDemoApplicationLockEnabled;

- (void)_bindAndRegisterDefaults;

@end

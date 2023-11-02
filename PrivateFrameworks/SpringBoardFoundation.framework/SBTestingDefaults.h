
@interface SBTestingDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, copy) NSString *testRunnerRecoveryApplicationBundleIdentifier;

- (void)_bindAndRegisterDefaults;

@end

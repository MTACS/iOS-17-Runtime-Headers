
@interface SBInCallPresentationDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly) bool assertNoZombieInCallScenes;
@property (nonatomic, readonly) bool skipPromptUnlockEntitlementCheck;

- (void)_bindAndRegisterDefaults;

@end


@interface SBSOSDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly) bool disablesForAccessibility;
@property (nonatomic) bool performedCheckForTripleClickSOSMigrationAlert;

- (void)_bindAndRegisterDefaults;
- (bool)clawCanTriggerSOS;
- (bool)isAutomaticCallCountdownEnabled;
- (long long)lockButtonSOSTriggerCount;

@end

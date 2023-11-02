
@interface SBSetupDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) bool inSetupModeForActivationChange;

- (void)_bindAndRegisterDefaults;

@end

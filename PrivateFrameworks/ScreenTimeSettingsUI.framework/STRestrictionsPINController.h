
@interface STRestrictionsPINController : PSRestrictionsPINController

@property (nonatomic) <STRestrictionsPINControllerDelegate> *pinDelegate;

- (void)_setOptionsTitle:(id)arg1 optionsHandler:(id /* block */)arg2;
- (id)pinInstructionsPrompt;
- (void)recoveryAuthenticationFailed:(id)arg1;
- (void)recoveryAuthenticationSucceededForPasscode:(id)arg1;
- (void)setPIN:(id)arg1;
- (bool)validatePIN:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end

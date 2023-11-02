
@interface SBExternalNotesDefaults : BSAbstractDefaultDomain

@property (nonatomic) bool quickNotesDisabled;

- (void)_bindAndRegisterDefaults;
- (id)init;

@end

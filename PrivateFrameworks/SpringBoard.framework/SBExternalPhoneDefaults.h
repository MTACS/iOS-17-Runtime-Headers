
@interface SBExternalPhoneDefaults : BSAbstractDefaultDomain

@property (nonatomic) bool hideMyPhoneNumber;

- (void)_bindAndRegisterDefaults;
- (id)init;

@end

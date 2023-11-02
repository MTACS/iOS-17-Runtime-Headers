
@interface SBExternalSetupDefaults : BSAbstractDefaultDomain

@property (getter=isDeviceSetup, nonatomic) bool deviceSetup;
@property (nonatomic, readonly) NSString *setupState;

- (void)_bindAndRegisterDefaults;
- (id)init;

@end

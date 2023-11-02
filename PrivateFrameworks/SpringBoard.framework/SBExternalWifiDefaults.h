
@interface SBExternalWifiDefaults : BSAbstractDefaultDomain

@property (nonatomic) bool wifiEnabled;

- (void)_bindAndRegisterDefaults;
- (id)init;

@end


@interface BKSPersistentConnectionDefaults : BSAbstractDefaultDomain

@property (nonatomic) int forceDemoMaxHBI;
@property (nonatomic, retain) NSString *wifiInterfaceName;

- (void)_bindAndRegisterDefaults;
- (id)init;

@end

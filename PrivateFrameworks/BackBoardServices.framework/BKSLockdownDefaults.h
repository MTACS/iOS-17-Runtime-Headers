
@interface BKSLockdownDefaults : BSAbstractDefaultDomain

@property (nonatomic, readonly) bool tetheredDisplayPortMode;

- (void)_bindAndRegisterDefaults;
- (id)init;

@end

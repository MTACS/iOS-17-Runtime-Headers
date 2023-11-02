
@interface STSystemStatusDefaults : BSAbstractDefaultDomain

@property (nonatomic) bool shouldEnableInternalBundles;
@property (nonatomic) bool shouldEnableUnknownBackgroundActivities;
@property (nonatomic) bool shouldEnableUnknownBundles;
@property (nonatomic) bool shouldEnableUnknownStatusItems;

+ (id)standardDefaults;

- (void)_bindAndRegisterDefaults;
- (id)init;

@end

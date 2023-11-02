
@interface FBPreferences : BSAbstractDefaultDomain

@property (nonatomic, readonly) bool disableXPCServicesEndpointHack;

+ (id)sharedInstance;

- (void)_bindAndRegisterDefaults;
- (id)_init;

@end

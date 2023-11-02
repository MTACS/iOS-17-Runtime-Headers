
@interface SBExternalChronoDefaults : BSAbstractDefaultDomain

@property (nonatomic, readonly) bool showInternalWidgets;

+ (id)sharedInstance;

- (void)_bindAndRegisterDefaults;
- (id)init;

@end

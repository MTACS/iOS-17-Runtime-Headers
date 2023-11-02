
@interface PRChronoDefaultsDomain : BSAbstractDefaultDomain

@property (nonatomic, readonly) bool shouldShowInternalWidgets;

- (void)_bindAndRegisterDefaults;
- (id)init;

@end

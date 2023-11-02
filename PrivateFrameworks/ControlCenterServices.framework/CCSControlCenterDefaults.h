
@interface CCSControlCenterDefaults : BSAbstractDefaultDomain

@property (nonatomic) unsigned long long presentationGesture;
@property (nonatomic) bool shouldEnableInternalModules;
@property (nonatomic) bool shouldEnablePrototypeFeatures;
@property (nonatomic) unsigned long long userInvocationCount;

+ (id)standardDefaults;

- (void)_bindAndRegisterDefaults;
- (unsigned long long)_defaultPresentationGesture;
- (id)init;

@end

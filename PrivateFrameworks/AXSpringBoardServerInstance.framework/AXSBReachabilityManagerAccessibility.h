
@interface AXSBReachabilityManagerAccessibility : __AXSBReachabilityManagerAccessibility_super

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (void)_axAddReachabilityProperty:(id)arg1 toDictionary:(id)arg2;
- (id)_axDictionaryOfAnimationProperties;
- (bool)_axReachabilityEnabled;
- (id)_axReachabilitySettings;
- (void)_axSendReachabilityToggledActionWithPayload:(id)arg1;
- (void)_notifyObserversReachabilityModeActive:(bool)arg1;
- (void)_setKeepAliveTimer;

@end

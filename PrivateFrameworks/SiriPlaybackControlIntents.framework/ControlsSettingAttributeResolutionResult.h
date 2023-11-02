
@interface ControlsSettingAttributeResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithControlsSettingAttributeToConfirm:(id)arg1;
+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;
+ (id)disambiguationWithControlsSettingAttributesToDisambiguate:(id)arg1;
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;
+ (id)successWithResolvedControlsSettingAttribute:(id)arg1;
+ (id)successWithResolvedObject:(id)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end

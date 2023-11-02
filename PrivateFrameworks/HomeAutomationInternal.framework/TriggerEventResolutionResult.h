
@interface TriggerEventResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithTriggerEventToConfirm:(long long)arg1;
+ (id)successWithResolvedTriggerEvent:(long long)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end


@interface HomeDeviceTypeResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithHomeDeviceTypeToConfirm:(long long)arg1;
+ (id)successWithResolvedHomeDeviceType:(long long)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end


@interface DeviceLocalityResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithDeviceLocalityToConfirm:(long long)arg1;
+ (id)successWithResolvedDeviceLocality:(long long)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end

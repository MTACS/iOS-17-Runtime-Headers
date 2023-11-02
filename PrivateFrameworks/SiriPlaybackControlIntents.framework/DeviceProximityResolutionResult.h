
@interface DeviceProximityResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithDeviceProximityToConfirm:(long long)arg1;
+ (id)successWithResolvedDeviceProximity:(long long)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end

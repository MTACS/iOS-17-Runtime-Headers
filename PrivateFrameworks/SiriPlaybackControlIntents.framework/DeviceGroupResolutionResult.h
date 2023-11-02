
@interface DeviceGroupResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithDeviceGroupToConfirm:(id)arg1;
+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;
+ (id)disambiguationWithDeviceGroupsToDisambiguate:(id)arg1;
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;
+ (id)successWithResolvedDeviceGroup:(id)arg1;
+ (id)successWithResolvedObject:(id)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end

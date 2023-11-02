
@interface DeviceContextResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithDeviceContextToConfirm:(id)arg1;
+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;
+ (id)disambiguationWithDeviceContextsToDisambiguate:(id)arg1;
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;
+ (id)successWithResolvedDeviceContext:(id)arg1;
+ (id)successWithResolvedObject:(id)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end


@interface GeoFenceActionResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithGeoFenceActionToConfirm:(long long)arg1;
+ (id)successWithResolvedGeoFenceAction:(long long)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end

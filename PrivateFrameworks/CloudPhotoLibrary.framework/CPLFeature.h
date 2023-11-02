
@interface CPLFeature : NSObject

+ (id)featureWithName:(id)arg1;

- (bool)disableFeatureInStore:(id)arg1 error:(id*)arg2;
- (bool)enableFeatureInStore:(id)arg1 error:(id*)arg2;
- (bool)handleScopeWhenFeatureIsDisabled:(id)arg1 scopeType:(long long)arg2 store:(id)arg3 error:(id*)arg4;
- (bool)shouldDisableScopeWhenFeatureIsDisabled:(id)arg1;

@end

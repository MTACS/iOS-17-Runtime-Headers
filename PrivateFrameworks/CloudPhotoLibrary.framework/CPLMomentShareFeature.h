
@interface CPLMomentShareFeature : CPLFeature

- (bool)disableFeatureInStore:(id)arg1 error:(id*)arg2;
- (bool)enableFeatureInStore:(id)arg1 error:(id*)arg2;
- (bool)handleScopeWhenFeatureIsDisabled:(id)arg1 scopeType:(long long)arg2 store:(id)arg3 error:(id*)arg4;

@end

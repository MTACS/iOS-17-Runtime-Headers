
@interface HKFeatureAvailabilityRequirementSatisfactionOverridesDataSource : HKUserDefaultsDataSource

+ (id)requirementSatisfactionOverridesDataSource;

- (void)registerObserver:(id)arg1 forFeature:(id)arg2 requirement:(id)arg3 newValueHandler:(id /* block */)arg4;
- (void)unregisterObserver:(id)arg1 forFeature:(id)arg2 requirement:(id)arg3;

@end

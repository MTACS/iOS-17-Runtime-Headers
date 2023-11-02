
@interface HVHarvestEligibility : NSObject

+ (bool)searchableItemIsEligibleForDeferredHarvesting:(id)arg1;
+ (bool)searchableItemIsEligibleForDissectorPipeline:(id)arg1 targetPluginsCustomAttributeName:(id)arg2;
+ (bool)searchableItemIsEligibleForHarvesting:(id)arg1 eligibleExceptForAge:(bool*)arg2;
+ (bool)searchableItemIsEligibleForHarvestingWithGetterBlock:(id /* block */)arg1 bundleIdentifier:(id)arg2 eligibleExceptForAge:(bool*)arg3;
+ (bool)searchableItemIsStoredEncryptedWithGetterBlock:(id /* block */)arg1 bundleIdentifier:(id)arg2;

@end

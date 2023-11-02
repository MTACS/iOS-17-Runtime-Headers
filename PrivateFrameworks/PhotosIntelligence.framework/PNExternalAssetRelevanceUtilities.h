
@interface PNExternalAssetRelevanceUtilities : NSObject

+ (long long)externalAssetEligibilityForAsset:(id)arg1;
+ (id)internalPredicateToIncludeExternalAssetsEligibleForProcessing;
+ (id)internalPredicateToIncludeExternalAssetsNeedingProcessing;
+ (id)internalPredicateToIncludeProcessedExternalAssets;

@end

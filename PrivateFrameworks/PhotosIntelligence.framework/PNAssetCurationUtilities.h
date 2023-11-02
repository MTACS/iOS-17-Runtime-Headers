
@interface PNAssetCurationUtilities : NSObject

+ (bool)_assetIsSafeForWidgetDisplay:(id)arg1 sceneClassifications:(id)arg2 modelSet:(id)arg3;
+ (id)_internalPredicateToFilterSyndicatedAssetsEligibleWithCurationScore:(double)arg1;
+ (bool)_isSupportedTabooEventIdentifier:(unsigned int)arg1;
+ (double)absolutePopularityOfPOI:(double)arg1 assetLongitude:(double)arg2 sceneGeography:(id)arg3;
+ (double)assetIconicScoreForSceneClassificationIdentifiers:(id)arg1 POIGeoHash:(id)arg2 sceneGeography:(id)arg3;
+ (double)assetIconicScoreForSceneClassificationIdentifiers:(id)arg1 POIGeoHash:(id)arg2 sceneGeography:(id)arg3 maxScenesCount:(long long)arg4;
+ (double)assetIconicScoreForSceneClassificationIdentifiers:(id)arg1 POIGeoHash:(id)arg2 sceneGeography:(id)arg3 maxScenesCount:(long long)arg4 popularityWeight:(double)arg5;
+ (double)assetIconicScoreForSceneClassificationIdentifiers:(id)arg1 assetLatitude:(double)arg2 assetLongitude:(double)arg3;
+ (double)assetIconicScoreForSceneClassificationIdentifiers:(id)arg1 assetLatitude:(double)arg2 assetLongitude:(double)arg3 sceneGeography:(id)arg4;
+ (double)assetIconicScoreForSceneClassificationIdentifiers:(id)arg1 assetLatitude:(double)arg2 assetLongitude:(double)arg3 sceneGeography:(id)arg4 maxScenesCount:(long long)arg5;
+ (double)assetIconicScoreForSceneClassificationIdentifiers:(id)arg1 assetLatitude:(double)arg2 assetLongitude:(double)arg3 sceneGeography:(id)arg4 maxScenesCount:(long long)arg5 popularityWeight:(double)arg6;
+ (double)assetIconicScoreForSceneClassifications:(id)arg1 assetLatitude:(double)arg2 assetLongitude:(double)arg3 sceneGeography:(id)arg4 sceneTaxonomy:(id)arg5;
+ (bool)assetIsSafeForDisplay:(id)arg1 modelSet:(id)arg2;
+ (bool)assetIsSafeForWidgetDisplay:(id)arg1;
+ (bool)assetIsSafeForWidgetDisplay:(id)arg1 sceneClassifications:(id)arg2;
+ (id)assetsShowcasingFoodWithoutFacesInAssets:(id)arg1;
+ (id)internalPredicateToFilterAssetsEligibleForSyndication;
+ (id)internalPredicateToFilterGuestSyndicatedAssetsEligibleForQuestion;
+ (id)internalPredicateToFilterSyndicatedAssetsEligibleForCurationProcessing;
+ (id)internalPredicateToFilterSyndicatedAssetsEligibleForGuestInferenceProcessing;
+ (id)internalPredicateToFilterSyndicatedAssetsEligibleForQuestion;
+ (id)internalPredicateToIncludeOnlyReceivedSyndicatedAssets;
+ (id)internalPredicateToIncludeOnlySentSyndicatedAssets;
+ (id)internalPredicateToIncludeReceivedNotAnalyzedSyndicatedAssets;
+ (id)internalPredicateToIncludeReceivedNotEligibleSyndicatedAssets;
+ (id)predicateForSourcingAssetsFromHighlightExtendedCuration;
+ (id)predicateForSourcingAssetsFromHighlightSummaryCuration;
+ (double)relativePopularityOfPOI:(double)arg1 assetLongitude:(double)arg2 sceneGeography:(id)arg3;
+ (id)safeAssetsForWidgetDisplay:(id)arg1;
+ (id)sceneIdentifiersByScoreForPOI:(double)arg1 assetLongitude:(double)arg2 sceneGeography:(id)arg3;
+ (id)syndicationEligibilityForAssets:(id)arg1;

@end

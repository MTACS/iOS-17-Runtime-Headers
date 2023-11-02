
@interface PGHighlightEnrichmentUtilities : NSObject

+ (id)assetPropertySetsForEnrichment;
+ (bool)canUseLocationInformationWithHighlightInfo:(id)arg1 graph:(id)arg2;
+ (bool)canUseSharingComposition:(unsigned short)arg1 forSharingFilter:(unsigned short)arg2;
+ (id)childHighlightNodeOfGroupHighlightNode:(id)arg1 withLocalIdentifier:(id)arg2;
+ (id)filteredAssetsInAssets:(id)arg1 withSharingComposition:(unsigned short)arg2 forSharingFilter:(unsigned short)arg3;
+ (id)filteredHighlightNodesWithHighlightNodes:(id)arg1 forSharingFilter:(unsigned short)arg2;
+ (id)filteredMomentNodesWithHighlightNode:(id)arg1 forSharingFilter:(unsigned short)arg2;
+ (id)filteredSummarizedFeaturesForHighlightWithInfo:(id)arg1 sharingFilter:(unsigned short)arg2;
+ (id)headKeyAssetWithExtendedCuration:(id)arg1;
+ (id)internalPredicateForFetchingAssetsForSharingFilter:(unsigned short)arg1;
+ (id)keyAssetForDayGroupHighlightWithHighlightInfo:(id)arg1 sharingFilter:(unsigned short)arg2 curationManager:(id)arg3 progressBlock:(id /* block */)arg4;
+ (id)keyAssetForMixedSharingCompositionKeyAssetRelationship:(unsigned short)arg1 keyAssetPrivate:(id)arg2 keyAssetShared:(id)arg3;
+ (double)meaningScoreWithMeanings:(id)arg1 forLongTrip:(bool)arg2 graph:(id)arg3 collection:(id)arg4 keyAsset:(id)arg5 keyAssetCriteriaScore:(double*)arg6 curationManager:(id)arg7;
+ (unsigned short)mixedSharingCompositionKeyAssetRelationshipForKeyAssetPrivate:(id)arg1 keyAssetShared:(id)arg2 shouldCompareHighlight:(bool)arg3;
+ (id)requiredAssetsInAssets:(id)arg1 withHighlightInfo:(id)arg2;
+ (id)selectKeyAssetForSharingComposition:(unsigned short)arg1 mixedSharingCompositionKeyAssetRelationship:(unsigned short)arg2 givenHighlightFilter:(unsigned short)arg3 privateHandler:(id /* block */)arg4 sharedHandler:(id /* block */)arg5;

@end

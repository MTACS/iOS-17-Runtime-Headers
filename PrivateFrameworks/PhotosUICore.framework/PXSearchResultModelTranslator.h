
@interface PXSearchResultModelTranslator : NSObject

+ (unsigned long long)_assetAggregationTypeForPLAssetSearchResult:(id)arg1;
+ (unsigned long long)_collectionTypeForPLCollectionSearchResult:(id)arg1;
+ (id)_dateFromPSIDate:(id)arg1;
+ (id)assetAggregationSearchResultForPLAssetSearchResult:(id)arg1;
+ (id)assetSearchResultsForPLTopAssetsSearchResult:(id)arg1;
+ (id)collectionSearchResultForPLCollectionSearchResult:(id)arg1;
+ (id)personSearchResultForPLAssetSearchResult:(id)arg1;
+ (id)searchResultsForAssetResults:(id)arg1;
+ (id)searchResultsForCollectionResults:(id)arg1;
+ (id)searchResultsForTopAssetsResult:(id)arg1;

- (id)init;

@end

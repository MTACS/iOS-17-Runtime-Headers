
@interface PLSpotlightAssetTranslator : NSObject

+ (id)_audioClassificationsForAsset:(id)arg1;
+ (id)_contentRatingForAsset:(id)arg1;
+ (bool)_hasActiveLibraryScopeInManagedObjectContext:(id)arg1;
+ (id)_humanActionScenesForAsset:(id)arg1;
+ (bool)_isUnnamedPeoplePersonDonationEnabled;
+ (id)_libraryScopeForAsset:(id)arg1;
+ (id)_locationNamesForAsset:(id)arg1;
+ (id)_mediaTypesForAsset:(id)arg1;
+ (id)_personsForAsset:(id)arg1;
+ (id)_petSynonymsForAsset:(id)arg1;
+ (id)_scenesForAsset:(id)arg1 sceneTaxonomyProvider:(id)arg2;
+ (id)_spotlightSearchableAttributesForAsset:(id)arg1 graphData:(id)arg2 searchConfiguration:(id)arg3 documentObservation:(id)arg4;
+ (id)spotlightSearchableItemFromAsset:(id)arg1 graphData:(id)arg2 searchConfiguration:(id)arg3 documentObservation:(id)arg4;

@end

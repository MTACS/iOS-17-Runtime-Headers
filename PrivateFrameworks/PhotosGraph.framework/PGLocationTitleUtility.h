
@interface PGLocationTitleUtility : NSObject

+ (id)_aoiSubsetsFromAOI:(id)arg1 idx:(unsigned long long)arg2 currentSubset:(id)arg3 subsetSize:(unsigned long long)arg4;
+ (id)_aoiSubsetsFromAOI:(id)arg1 maxSubsetSize:(unsigned long long)arg2;
+ (id)_beautifiedLocationStringWithTitleComponents:(id)arg1 momentNodes:(id)arg2 lineBreakBehavior:(unsigned long long)arg3 keyAssetAddressNode:(id)arg4 curationAddressNodes:(id)arg5 isMatchingKeyAsset:(bool*)arg6 useDistrict:(bool)arg7 allowFamilyHome:(bool)arg8 showAllCities:(bool)arg9 locationHelper:(id)arg10;
+ (id)_commonCityTitleComponentsFromMomentNodes:(id)arg1 remainingAddressNodes:(id)arg2 ignoredAddressNodes:(id)arg3 incompleteLocationResolver:(id)arg4 locationHelper:(id)arg5;
+ (id)_filteredAOINodeCombinationsForCombinations:(id)arg1 minSize:(unsigned long long)arg2 maxSize:(unsigned long long)arg3 maxTitleLength:(unsigned long long)arg4 minNumberOfAssets:(unsigned long long)arg5 aoiNodesToAddressNodesMapTable:(id)arg6 assetCountByAddressNodeIdentifier:(id)arg7 locationHelper:(id)arg8;
+ (id)_filteredAOINodesForAddressNodes:(id)arg1 aoiTitleMaximumLength:(unsigned long long)arg2 locationHelper:(id)arg3;
+ (id)_filteredAddressNodesWithAddressNodes:(id)arg1 momentNodes:(id)arg2 incompleteLocationResolver:(id)arg3 filterSignificantLocationsOption:(unsigned long long)arg4 locationHelper:(id)arg5;
+ (id)_firstComponentInTimeFromComponents:(id)arg1 momentNodes:(id)arg2 curationAddressNodes:(id)arg3 allowFamilyHome:(bool)arg4;
+ (id)_localizedStringForMultipleLocationsWithFirstComponentForTitle:(id)arg1 secondComponentForTitle:(id)arg2 firstLocation:(id)arg3 otherLocation:(id)arg4;
+ (id)_localizedStringForTwoLocationsWithFirstComponentForTitle:(id)arg1 secondComponentForTitle:(id)arg2 firstLocation:(id)arg3 otherLocation:(id)arg4;
+ (id)_locationStringWithDistrictsFromTitleComponents:(id)arg1 momentNodes:(id)arg2 lineBreakBehavior:(unsigned long long)arg3 allowFamilyHome:(bool)arg4 locationHelper:(id)arg5;
+ (id)_peopleLocationFromAddressNode:(id)arg1;
+ (id)_sortedAOINodeCombinationsForCombinations:(id)arg1 aoiNodesToAddressNodesMapTable:(id)arg2 assetCountByAddressNodeIdentifier:(id)arg3 locationHelper:(id)arg4;
+ (id)_sortedComponentsFromComponents:(id)arg1;
+ (bool)_titleComponentsAreInSameSupersetCity:(id)arg1 graph:(id)arg2 locationHelper:(id)arg3;
+ (id)_titleWithLineBreakBehavior:(unsigned long long)arg1 forTitle:(id)arg2 titleComponents:(id)arg3;
+ (id)_twoPartLocationTitleWithFirstPartTitle:(id)arg1 withDimension:(unsigned long long)arg2 usedFirstPartLocationNode:(id)arg3 addressNode:(id)arg4 locationHelper:(id)arg5;
+ (double)_weightForAreaNode:(id)arg1 withAddressNodes:(id)arg2;
+ (id)beautifiedLocationNodeStringWithPlaceNode:(id)arg1 locationHelper:(id)arg2;
+ (id)businessNodeForTitlingFromMomentNodes:(id)arg1 businessNodesByMomentNode:(id)arg2;
+ (id)commonAOIComponentsForMomentNodes:(id)arg1 addressNodes:(id)arg2 aoiDisplayType:(unsigned long long)arg3 containsAmusementParkPOI:(bool)arg4 locationHelper:(id)arg5;
+ (id)commonCityTitleComponentsFromMomentNodes:(id)arg1 addressNodes:(id)arg2 incompleteLocationResolver:(id)arg3 locationHelper:(id)arg4;
+ (bool)containsAmusementParkPOIFromMomentNodes:(id)arg1;
+ (void)generateBusinessItemLocationWithOptions:(id)arg1 result:(id /* block */)arg2;
+ (void)generateHighlightLocationTitleForTripWithMomentNodes:(id)arg1 lineBreakBehavior:(unsigned long long)arg2 locationHelper:(id)arg3 result:(id /* block */)arg4;
+ (void)generateLocationTitleForTripWithMomentNodes:(id)arg1 locationHelper:(id)arg2 result:(id /* block */)arg3;
+ (void)generateLocationTitleWithOptions:(id)arg1 locationHelper:(id)arg2 result:(id /* block */)arg3;
+ (id)peopleLocationTitleComponentsFromAddressNodes:(id)arg1 peopleDisplayType:(unsigned long long)arg2;
+ (id)peopleLocationTitleComponentsFromAddressNodesSet:(id)arg1 peopleDisplayType:(unsigned long long)arg2;

@end


@interface PLMomentGenerationUtils : NSObject

+ (unsigned short)_locationTypeForLocation:(id)arg1 horizontalAccuracy:(double)arg2 startDate:(id)arg3 endDate:(id)arg4 locationsOfInterest:(id)arg5 frequentLocations:(id)arg6;
+ (id)_sortedOverlappingFrequentLocations:(id)arg1;
+ (bool)assetCanBeExternal:(id)arg1;
+ (short)externalOriginatorStateForAsset:(id)arg1;
+ (id)frequentLocationNearMoment:(id)arg1 withFrequentLocations:(id)arg2;
+ (id)frequentLocationsOverlappingStartDate:(id)arg1 endDate:(id)arg2 frequentLocations:(id)arg3;
+ (id)importedByBundleIdentifiersAllowListForMomentGeneration;
+ (id)importedByBundleIdentifiersToIncludeIfNotProcessed;
+ (id)internalPredicateToIncludeExternalAssetsEligibleForProcessing;
+ (bool)isTopFrequentLocationForCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 startDate:(id)arg2 endDate:(id)arg3 frequentLocations:(id)arg4;
+ (bool)isTopFrequentLocationForMoment:(id)arg1 frequentLocations:(id)arg2;
+ (unsigned short)locationTypeForAsset:(id)arg1 locationsOfInterest:(id)arg2 frequentLocations:(id)arg3;
+ (unsigned short)locationTypeForMoment:(id)arg1 locationsOfInterest:(id)arg2 frequentLocations:(id)arg3;
+ (short)originatorStateForAsset:(id)arg1;
+ (void)overrideTodayWithDate:(id)arg1;
+ (void)processLocationIfNecessaryInMoment:(id)arg1 usingManager:(id)arg2 frequentLocations:(id)arg3 frequentLocationsDidChange:(bool)arg4;
+ (id)today;

@end

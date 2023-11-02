
@interface CLReductiveFilterSuite : NSObject

+ (id)applyFilterToLocationObservations:(id)arg1 options:(id)arg2;
+ (id)applyFilterToLocationTrace:(id)arg1 options:(id)arg2;
+ (id)deriveLocationFromLocations:(id)arg1;
+ (id)deriveLocationFromLocations:(id)arg1 options:(id)arg2;
+ (id)filterOutliers:(id)arg1;
+ (id)filterOutliers:(id)arg1 options:(id)arg2;
+ (double)rangeForReductiveFilterOptions:(id)arg1;
+ (double)rangeForTransmitPower:(double)arg1;

@end

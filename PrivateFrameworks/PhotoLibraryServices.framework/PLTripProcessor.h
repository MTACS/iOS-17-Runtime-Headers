
@interface PLTripProcessor : NSObject

+ (id)_filterFrequentLocations:(id)arg1 forDateInterval:(id)arg2;
+ (id)_generateTripFromTripsMoments:(id)arg1 withLastHomeVisitDate:(id)arg2 andLastItem:(id)arg3;
+ (double)_minimumDistanceBetweenFrequentLocations:(id)arg1 andItem:(id)arg2;
+ (unsigned long long)_numberOfAssetsInItems:(id)arg1;
+ (double)_timeIntervalBetweenItem:(id)arg1 andItem:(id)arg2;
+ (id)_tripFromTripMoments:(id)arg1 withLastHomeVisitDate:(id)arg2 andLastItem:(id)arg3;
+ (id)processTripsWithItems:(id)arg1 frequentLocations:(id)arg2 lastHomeVisitDate:(id)arg3 progressBlock:(id /* block */)arg4;

@end

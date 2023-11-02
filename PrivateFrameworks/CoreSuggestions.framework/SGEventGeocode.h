
@interface SGEventGeocode : NSObject

+ (id)_serialQueue;
+ (id)dateForUTCDate:(id)arg1 withTimeZone:(id)arg2;
+ (void)geocodeAddress:(id)arg1 withCallback:(id /* block */)arg2;
+ (void)geocodeAddressWithCanonicalSearch:(id)arg1 withCallback:(id /* block */)arg2;
+ (id)geocodeEvent:(id)arg1;
+ (void)geocodeEvent:(id)arg1 withCallback:(id /* block */)arg2;
+ (void)geocodeLocation:(id)arg1 usingMode:(unsigned long long)arg2 withGeoFilters:(id)arg3 withCallback:(id /* block */)arg4;
+ (void)geocodePOIWithName:(id)arg1 ofTypes:(id)arg2 inRegion:(id)arg3 withCallback:(id /* block */)arg4;
+ (bool)isGeocodeCandidate:(id)arg1;
+ (bool)isGeocodeCandidateLocation:(id)arg1 forEvent:(id)arg2;
+ (bool)locationIsAirport:(id)arg1;
+ (bool)locationIsGeocoded:(id)arg1;
+ (id)poiCategoriesFromString:(id)arg1;

@end

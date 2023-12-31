
@interface EKTravelEngineUtilities : NSObject

+ (id)authorizationStatusAsString:(int)arg1;
+ (id)cadRouteHypothesisForEKTravelEngineHypothesis:(id)arg1;
+ (bool)date:(id)arg1 representsApproachingDepartureDateForHypothesis:(id)arg2;
+ (bool)date:(id)arg1 representsImmediateDepartureForHypothesis:(id)arg2;
+ (bool)date:(id)arg1 representsLatenessForHypothesis:(id)arg2;
+ (id)formattedLocationCoordinates:(id)arg1;
+ (long long)geoRouteHypothesisTravelStateForString:(id)arg1;
+ (id)geoTrafficDensityAsString:(unsigned long long)arg1;
+ (unsigned long long)geoTrafficDensityForString:(id)arg1;
+ (id)geoTransportTypeAsString:(int)arg1;
+ (int)geoTransportTypeForCalLocationRoutingMode:(long long)arg1;
+ (int)geoTransportTypeForString:(id)arg1;
+ (double)maximumAllowableTravelTime;
+ (double)minimumAllowableTravelTime;
+ (bool)travelStateIndicatesTravelingTowardDestination:(long long)arg1;

@end

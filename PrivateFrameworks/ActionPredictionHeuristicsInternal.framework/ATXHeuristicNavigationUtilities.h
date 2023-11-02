
@interface ATXHeuristicNavigationUtilities : NSObject

+ (id)_dateIntervalWithEvent:(id)arg1;
+ (id)_titleWithTravelTimeInSeconds:(double)arg1 destinationName:(id)arg2;
+ (double)_travelTimeInSecondsWithEvent:(id)arg1 destination:(id)arg2 transportType:(id)arg3 heuristicDevice:(id)arg4;
+ (bool)allowNavigationSuggestionForLocation:(id)arg1 maxDistance:(unsigned long long)arg2;
+ (id)destinationPlacemarkForEvent:(id)arg1 name:(id)arg2 schemaType:(unsigned long long)arg3;
+ (id)destinationPlacemarkForLocation:(id)arg1 withDestinationName:(id)arg2;
+ (id)fetchLocationForLOI:(long long)arg1;
+ (id)getCurrentLocation;
+ (bool)isAtLocation:(id)arg1 maxDistance:(unsigned long long)arg2;
+ (bool)isDestinationTooCloseToNavigate:(id)arg1;
+ (id)locationFromEvent:(id)arg1 schemaType:(unsigned long long)arg2;
+ (id)navigationSubtitleForType:(unsigned long long)arg1;
+ (id)navigationSuggestionActionForDestination:(id)arg1 event:(id)arg2 transportType:(id)arg3 schemaForEvent:(id)arg4 predictionReasons:(unsigned long long)arg5 heuristicDevice:(id)arg6 score:(double)arg7 shouldClearOnEngagement:(bool)arg8 validStartDate:(id)arg9 validEndDate:(id)arg10;
+ (id)navigationSuggestionActionForEvent:(id)arg1 schemaForEvent:(id)arg2 transportType:(id)arg3 predictionReasons:(unsigned long long)arg4 heuristicDevice:(id)arg5 score:(double)arg6 validStartDate:(id)arg7 validEndDate:(id)arg8;
+ (id)navigationSuggestionActionForLOI:(long long)arg1 destinationName:(id)arg2 schemaForEvent:(id)arg3 withScore:(double)arg4 transportType:(id)arg5 predictionReason:(unsigned long long)arg6 validStartDate:(id)arg7 validEndDate:(id)arg8 heuristicDevice:(id)arg9;
+ (unsigned long long)navigationTypeForString:(id)arg1;
+ (id)placemarkForLOI:(long long)arg1 name:(id)arg2;
+ (id)schemaTypeToString:(unsigned long long)arg1;

@end

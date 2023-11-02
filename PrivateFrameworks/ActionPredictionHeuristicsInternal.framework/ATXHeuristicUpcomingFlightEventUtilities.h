
@interface ATXHeuristicUpcomingFlightEventUtilities : NSObject

+ (id)flightCheckInActionSuggestionForEvent:(id)arg1 flightSchema:(id)arg2 validStartDate:(id)arg3 validEndDate:(id)arg4;
+ (id)suggestionsForFlightsWithHeuristicDevice:(id)arg1;
+ (id)weatherAtTravelDestinationSpotlightEntry:(id)arg1 schemaForFlight:(id)arg2 predictionReasons:(unsigned long long)arg3 score:(double)arg4 validStartDate:(id)arg5 validEndDate:(id)arg6 heuristicDevice:(id)arg7;

@end

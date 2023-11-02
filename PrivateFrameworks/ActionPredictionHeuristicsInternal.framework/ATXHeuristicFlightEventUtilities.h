
@interface ATXHeuristicFlightEventUtilities : NSObject

+ (id)_dateIntervalWithEvent:(id)arg1;
+ (bool)currentLocationIsWithinAirportForEvent:(id)arg1;
+ (id)fetchDestinationPlacemarkForFlightEvent:(id)arg1 heuristicDevice:(id)arg2;
+ (id)flightInformationSchemaForEvent:(id)arg1;
+ (id)flightInformationSpotlightSuggestionForEvent:(id)arg1 schemaForFlight:(id)arg2 predictionReasons:(unsigned long long)arg3 score:(double)arg4 validStartDate:(id)arg5 validEndDate:(id)arg6;
+ (id)flightSchemaForEvent:(id)arg1;
+ (id)lastFlightLegEndTimeForEvent:(id)arg1 heuristicDevice:(id)arg2;
+ (struct CLLocationCoordinate2D { double x1; double x2; })locationAtArrivalAirport:(id)arg1 event:(id)arg2 heuristicDevice:(id)arg3;
+ (void)logSuggestion:(id)arg1 description:(id)arg2;
+ (id)updatedFlightInformationSchemaForEvent:(id)arg1 schemaForFlight:(id)arg2 heuristicDevice:(id)arg3;

@end

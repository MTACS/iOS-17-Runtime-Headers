
@interface ATXContextFlightEventSuggestionProducer : NSObject {
    NSString * _alternateDestinationTitle;
    NSDateInterval * _dateInterval;
    NSDictionary * _flightInformationSchema;
    NSString * _teamIdentifier;
    NSString * _title;
    NSString * _urlString;
    NSDate * _validFromStartDate;
    NSDate * _validToEndDate;
}

- (void).cxx_destruct;
- (id)_contextTitleWithReasons:(unsigned long long)arg1;
- (id)_stringsWithPredictionReasons:(unsigned long long)arg1;
- (id)initWithTitle:(id)arg1 flightInformationSchema:(id)arg2 urlString:(id)arg3 teamIdentifier:(id)arg4 validFromStartDate:(id)arg5 validToEndDate:(id)arg6 alternateDestinationTitle:(id)arg7 dateInterval:(id)arg8;
- (id)sfSearchResult:(id)arg1 title:(id)arg2 subtitle:(id)arg3 type:(int)arg4 sectionHeader:(id)arg5 score:(double)arg6;
- (id)suggestionForAirplaneModeWithPredictionReasons:(unsigned long long)arg1 score:(double)arg2;
- (id)suggestionForFlightCheckInWithReason:(unsigned long long)arg1 score:(double)arg2;
- (id)suggestionForFlightInformationWithReason:(unsigned long long)arg1 score:(double)arg2 date:(id)arg3;
- (id)suggestionForRideShareAppForDestination:(id)arg1 source:(id)arg2 rideOptionName:(id)arg3 preferredBundleId:(id)arg4 predictionReasons:(unsigned long long)arg5 score:(double)arg6;
- (id)suggestionForWeatherAtFlightDestinationLocation:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 destination:(id)arg2 predictionReasons:(unsigned long long)arg3 score:(double)arg4;
- (id)suggestionWithAction:(id)arg1 predictionReasons:(unsigned long long)arg2 score:(double)arg3;

@end


@interface ATXContextNavigationSuggestionProducer : NSObject {
    NSString * _alternateDestinationTitle;
    EKEvent * _event;
    NSDictionary * _schemaForEvent;
    NSString * _title;
}

- (void).cxx_destruct;
- (id)_contextTitleWithReasons:(unsigned long long)arg1;
- (id)_dateInterval;
- (id)_stringsWithPredictionReasons:(unsigned long long)arg1;
- (id)initWithTitle:(id)arg1 event:(id)arg2 schemaForEvent:(id)arg3 alternateDestinationTitle:(id)arg4;
- (id)suggestionForNavigationToDestination:(id)arg1 transportType:(unsigned long long)arg2 destinationName:(id)arg3 subtitle:(id)arg4 predictionReasons:(unsigned long long)arg5 score:(double)arg6 shouldClearOnEngagement:(bool)arg7 validStartDate:(id)arg8 validEndDate:(id)arg9;

@end

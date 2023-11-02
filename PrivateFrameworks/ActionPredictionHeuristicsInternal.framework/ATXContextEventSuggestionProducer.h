
@interface ATXContextEventSuggestionProducer : NSObject {
    <ATXContextHeuristicsEnvironment> * _environment;
    EKEvent * _event;
    NSString * _eventTitle;
    NSDate * _validFromStartDate;
    NSDate * _validToEndDate;
}

- (void).cxx_destruct;
- (id)_dateInterval;
- (bool)_isStringValidEmail:(id)arg1;
- (id)_spotlightActionWithParticipant:(id)arg1 subtitle:(id)arg2;
- (id)_stringsWithPredictionReasons:(unsigned long long)arg1;
- (id)_suggestionResultWithId:(id)arg1 title:(id)arg2 type:(int)arg3 score:(double)arg4;
- (id)_suggestionResultWithString:(id)arg1 type:(int)arg2 score:(double)arg3;
- (id)initWithEvent:(id)arg1 validFromStartDate:(id)arg2 validToEndDate:(id)arg3 environment:(id)arg4;
- (double)scoreWithEventParticipantStatusPenalty:(double)arg1;
- (id)suggestionForConferenceWithScore:(double)arg1 predictionReasons:(unsigned long long)arg2;
- (id)suggestionForDNDWithScore:(double)arg1 predictionReasons:(unsigned long long)arg2;
- (id)suggestionForEventOrganizerWithScore:(double)arg1 predictionReasons:(unsigned long long)arg2;
- (id)suggestionForEventParticipantWithScore:(double)arg1 predictionReasons:(unsigned long long)arg2;

@end

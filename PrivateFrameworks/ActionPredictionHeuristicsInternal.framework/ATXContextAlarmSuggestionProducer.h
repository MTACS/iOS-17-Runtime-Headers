
@interface ATXContextAlarmSuggestionProducer : NSObject {
    long long  _reasonCode;
    double  _score;
    NSDateInterval * _validDateInterval;
}

- (void).cxx_destruct;
- (id)_alarmsWithEnvironment:(id)arg1 startTimestamp:(double)arg2 endTimestamp:(double)arg3;
- (id)_criteriaWithAlarm:(id)arg1;
- (id)_filterAlarmsEligible:(id)arg1 proposedInterval:(id)arg2;
- (bool)_isToggleContextualAction:(id)arg1;
- (id)_morningAlarmsWithEnvironment:(id)arg1;
- (id)_nextMorningAlarmsWithEnvironment:(id)arg1;
- (id)editNextAlarmSuggestionsWithEnvironment:(id)arg1;
- (id)initWithValidDateInterval:(id)arg1 reasonCode:(long long)arg2 score:(double)arg3;
- (id)morningAlarmToggleSuggestionsWithEnvironment:(id)arg1;

@end

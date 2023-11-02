
@interface _PSSuggestionFromTextPredictor : NSObject {
    CNContactFormatter * _contactFormatter;
    EKEventStore * _eventStore;
    _CDInteractionStore * _interactionStore;
    REMStore * _remStore;
}

+ (bool)isEligibleUnstructuredEvent:(id)arg1;

- (void).cxx_destruct;
- (id)initWithEventStore:(id)arg1 interactionStore:(id)arg2;
- (id)suggestionFromContactPriors:(id)arg1 priorScoreThreshold:(float)arg2 bundleID:(id)arg3 reason:(id)arg4;
- (id)suggestionFromText:(id)arg1 priorScoreThreshold:(float)arg2 bundleID:(id)arg3 reason:(id)arg4;
- (id)suggestionsFromIncompleteRemindersWithContext:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 priorScoreThreshold:(float)arg4;
- (id)suggestionsFromPortraitExtractionsWithContext:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 priorScoreThreshold:(float)arg4 reason:(id)arg5;
- (id)suggestionsFromUnstructuredCalendarEventsWithContext:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 priorScoreThreshold:(float)arg4;

@end

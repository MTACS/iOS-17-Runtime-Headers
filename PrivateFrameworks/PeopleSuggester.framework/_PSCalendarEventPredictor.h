
@interface _PSCalendarEventPredictor : NSObject {
    CNContactStore * _contactStore;
    EKEventStore * _eventStore;
}

+ (id)_handleFromParticipant:(id)arg1;
+ (unsigned long long)_numOfOtherParticipantsInEvent:(id)arg1;
+ (id)createFinalSuggestions:(id)arg1 context:(id)arg2;
+ (bool)currentUserIsEligibleForEvent:(id)arg1;
+ (id /* block */)eventComparatorWithPredictionContext:(id)arg1 contactsMap:(id)arg2;
+ (id)getZKWSuggestionForCalendarEvent:(id)arg1 context:(id)arg2 contactsMap:(id)arg3;
+ (bool)hasFaceTimeSignalInEvent:(id)arg1;
+ (bool)isCorecipientParticipant:(id)arg1 seedRecipients:(id)arg2 contactsMap:(id)arg3;
+ (bool)isEligibleParticipant:(id)arg1 context:(id)arg2 contactsMap:(id)arg3;
+ (bool)isMaybeFaceTimeEvent:(id)arg1 earliestStartDate:(id)arg2 latestStartDate:(id)arg3 maxParticipants:(unsigned long long)arg4;
+ (id /* block */)participantComparatorWithContactsMap:(id)arg1;

- (void).cxx_destruct;
- (id)contactKeysToFetch;
- (id)getParticipantContactsMapFromEvent:(id)arg1;
- (id)init;
- (id)initWithEventStore:(id)arg1 contactStore:(id)arg2;
- (id)zkwSuggestionsFromCalendarWithPredictionContext:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 maxParticipants:(unsigned long long)arg4;

@end

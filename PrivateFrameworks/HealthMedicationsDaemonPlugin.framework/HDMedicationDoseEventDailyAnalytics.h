
@interface HDMedicationDoseEventDailyAnalytics : NSObject <HKAnalyticsEvent> {
    NSCalendar * _calendar;
    NSDate * _currentDate;
    HDProfile * _profile;
}

@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) bool isEventSubmissionIHAGated;

+ (id)_countOfDoseEventsWithPredicate:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)_doseEventCountLoggedSinceDate:(id)arg1 transaction:(id)arg2;
+ (id)_predicateForDoseEventsBetweenDate:(id)arg1 andDate:(id)arg2;
+ (id)_predicateForDoseEventsLoggedSinceDate:(id)arg1;

- (void).cxx_destruct;
- (id)_hasLoggedAllScheduledMedsInPreviousDayPayloadWithTransaction:(id)arg1;
- (id)_hasLoggedMedsInPastPayloadWithTransaction:(id)arg1;
- (id)_weeksSinceFirstLoggedMedPayload;
- (id)eventName;
- (id)initWithProfile:(id)arg1 calendar:(id)arg2 currentDate:(id)arg3;
- (bool)isEventSubmissionIHAGated;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;

@end

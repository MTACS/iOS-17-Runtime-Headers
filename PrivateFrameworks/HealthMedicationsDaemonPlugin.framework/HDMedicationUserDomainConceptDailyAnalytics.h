
@interface HDMedicationUserDomainConceptDailyAnalytics : NSObject <HKAnalyticsEvent> {
    NSCalendar * _calendar;
    NSDate * _currentDate;
    HDKeyValueDomain * _medicationsKeyValueDomain;
    HDProfile * _profile;
}

@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) bool isEventSubmissionIHAGated;

+ (id)_countOfUserDomainConceptsWithPredicate:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)_medicationsAddedCountSinceDate:(id)arg1 transaction:(id)arg2;
+ (id)_predicateForMedicationsSinceDate:(id)arg1;

- (void).cxx_destruct;
- (id)_hasAddedMedsInPastIHAGatedPayloadWithTransaction:(id)arg1;
- (id)_hasAddedMedsInPastUnrestrictedPayloadWithTransaction:(id)arg1;
- (id)_hasAnyLifestyleFactorEnabledPayload;
- (id)_hasMedsListPayloadWithTransaction:(id)arg1;
- (id)_medsCountPayloadWithTransaction:(id)arg1;
- (id)_medsInteractionsPayloadWithTransaction:(id)arg1;
- (id)_weeksSinceFirstAddedMedPayloadWithTransaction:(id)arg1;
- (id)eventName;
- (id)initWithProfile:(id)arg1 medicationsKeyValueDomain:(id)arg2 calendar:(id)arg3 currentDate:(id)arg4;
- (bool)isEventSubmissionIHAGated;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;

@end

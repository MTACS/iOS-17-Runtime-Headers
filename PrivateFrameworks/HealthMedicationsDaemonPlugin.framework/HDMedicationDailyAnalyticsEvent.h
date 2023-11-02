
@interface HDMedicationDailyAnalyticsEvent : NSObject <HKAnalyticsEvent> {
    NSCalendar * _calendar;
    NSDate * _currentDate;
    HDMedicationDoseEventDailyAnalytics * _doseEventAnalytics;
    HDMedicationUserDomainConceptDailyAnalytics * _medicationConceptAnalytics;
    HDKeyValueDomain * _medicationsKeyValueDomain;
    NSUserDefaults * _medicationsUserDefaults;
    HDMedicationOntologyDailyAnalytics * _ontologyAnalytics;
    HDProfile * _profile;
    HDMedicationScheduleDailyAnalytics * _scheduleAnalytics;
}

@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) bool isEventSubmissionIHAGated;

- (void).cxx_destruct;
- (long long)_bucketedWeeksSinceDate:(id)arg1 dataSource:(id)arg2;
- (id)_fetchDeviceContextAnalytics;
- (id)_fetchNotificationSettingsAnalyticsWithDataSource:(id)arg1 includingCriticalMedsCount:(bool)arg2;
- (id)_isImproveHealthRecordsAllowedPayloadWithDataSource:(id)arg1;
- (id)_lifestyleInteractionsAnalyticsPayload;
- (id)_readValueFromKeyValueDomainForKey:(id)arg1;
- (id)_reminderAnalyticsPayload;
- (id)_userCharacteristicsAnalyticsPayloadWithDataSource:(id)arg1;
- (id)eventName;
- (id)initWithProfile:(id)arg1;
- (bool)isEventSubmissionIHAGated;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;

@end

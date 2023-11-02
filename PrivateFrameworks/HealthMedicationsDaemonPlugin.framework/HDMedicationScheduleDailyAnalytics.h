
@interface HDMedicationScheduleDailyAnalytics : NSObject <HKAnalyticsEvent> {
    HDProfile * _profile;
}

@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) bool isEventSubmissionIHAGated;

+ (id)_medicationCountForSchedulesWithProfile:(id)arg1 error:(id*)arg2;
+ (id)_medicationCountForUnavailableSchedulesWithProfile:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_makeMedicationCountPayloadForSchedulesWithProfile:(id)arg1;
- (id)eventName;
- (id)initWithProfile:(id)arg1;
- (bool)isEventSubmissionIHAGated;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;

@end

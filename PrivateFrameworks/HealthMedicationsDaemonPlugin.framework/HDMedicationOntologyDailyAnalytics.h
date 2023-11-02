
@interface HDMedicationOntologyDailyAnalytics : NSObject <HKAnalyticsEvent> {
    HDProfile * _profile;
}

@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) bool isEventSubmissionIHAGated;

- (void).cxx_destruct;
- (id)eventName;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (bool)isEventSubmissionIHAGated;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;
- (id)shardRegistry;

@end

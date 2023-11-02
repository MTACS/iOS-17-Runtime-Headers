
@interface MentalHealthUI.MentalHealthAssessmentsEvent : _TtCs12_SwiftObject <HKAnalyticsEvent> {
    void action;
    void assessmentType;
    void entryPoint;
    void firstAssessment;
    void firstTimeStepCompleted;
    void provenance;
    void step;
}

@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) bool isEventSubmissionIHAGated;

- (id)eventName;
- (bool)isEventSubmissionIHAGated;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;

@end

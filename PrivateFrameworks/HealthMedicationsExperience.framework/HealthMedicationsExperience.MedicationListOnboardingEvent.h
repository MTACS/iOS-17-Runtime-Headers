
@interface HealthMedicationsExperience.MedicationListOnboardingEvent : _TtCs12_SwiftObject <HKAnalyticsEvent> {
    void action;
    void algorithmType;
    void didLastScanFallBackToOCR;
    void firstTimeMedFlow;
    void firstTimeStepCompleted;
    void hasSuggestionsFromHealthRecords;
    void itemRank;
    void itemRankInOCR;
    void medsDetailsEntryPoint;
    void provenance;
    void step;
    void timeSinceUserLastScannedAMed;
}

@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) bool isEventSubmissionIHAGated;

- (id)eventName;
- (bool)isEventSubmissionIHAGated;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;

@end

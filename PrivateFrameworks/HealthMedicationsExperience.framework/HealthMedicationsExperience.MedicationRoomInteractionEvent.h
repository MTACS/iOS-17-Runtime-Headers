
@interface HealthMedicationsExperience.MedicationRoomInteractionEvent : _TtCs12_SwiftObject <HKAnalyticsEvent> {
    void action;
    void calendar;
    void hasPregnancyContent;
    void hasSideEffectsContent;
    void healthStore;
    void provenance;
    void roomType;
    void settingManager;
}

@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) bool isEventSubmissionIHAGated;

- (id)eventName;
- (bool)isEventSubmissionIHAGated;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;

@end

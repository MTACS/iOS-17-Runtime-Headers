
@interface HealthRecordsUI.PinnedConceptDataSource : HealthRecordsUI.ConceptsDataSource {
    void cancellables;
    void healthStore;
    void latestRecord;
    void latestRecordPublisher;
    void listManager;
    void userConcept;
}

@end

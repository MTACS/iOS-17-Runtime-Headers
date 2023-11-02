
@interface HealthRecordsUI.MedicalRecordTimelineDataSource : HealthRecordsUI.ConceptsDataSource {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  accountIdentifier;
    void cancellable;
    void categorySectionIndexes;
    void dataSourceSections;
    void displayItemProvider;
    void displayItemProviderSubject;
    void isRenderingForConcept;
    void parentViewController;
    void profile;
    void queryReturned;
    void removedRecordsSections;
    void timelineDisplayState;
    void workQueue;
}

@end

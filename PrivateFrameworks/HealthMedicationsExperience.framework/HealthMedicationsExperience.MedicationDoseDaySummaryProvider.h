
@interface HealthMedicationsExperience.MedicationDoseDaySummaryProvider : NSObject <HKMedicationScheduleControlObserver> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _daySummary;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  date;
    void doseEventPredicate;
    void healthStore;
    void medicationDetailProvider;
    void observerQuery;
    void scheduleControl;
}

@property (nonatomic, readonly) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (void)scheduleControlDidRescheduleItems;

@end

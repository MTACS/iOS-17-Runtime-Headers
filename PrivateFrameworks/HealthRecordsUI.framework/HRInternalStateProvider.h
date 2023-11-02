
@interface HRInternalStateProvider : NSObject <HKConceptStoreObserver, HKHealthRecordsStoreIngestionStateListener> {
    void accountStore;
    void changeHandler;
    void conceptStore;
    void healthExperienceStore;
    void healthRecordsStore;
    void isObserving;
    void loadState;
    void recordCounts;
    void sub;
}

- (void).cxx_destruct;
- (void)conceptStore:(id)arg1 indexManagerDidChangeState:(unsigned long long)arg2;
- (void)dealloc;
- (void)fetchJSONWithCompletion:(id /* block */)arg1;
- (void)healthRecordsStore:(id)arg1 ingestionStateDidUpdateTo:(long long)arg2;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (id)initWithProfile:(id)arg1;

@end

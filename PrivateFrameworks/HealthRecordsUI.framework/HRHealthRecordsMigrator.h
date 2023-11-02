
@interface HRHealthRecordsMigrator : NSObject {
    void dataVersionKey;
    void healthRecordsKeyValueDomain;
    void healthStore;
    void keyValueDomain;
    void queue;
    void searchIndexController;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (void)migrateIfNeededWithCompletion:(id /* block */)arg1;

@end

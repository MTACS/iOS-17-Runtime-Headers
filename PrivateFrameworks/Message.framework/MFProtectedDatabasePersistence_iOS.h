
@interface MFProtectedDatabasePersistence_iOS : EDProtectedDatabasePersistence

+ (id)journalDatabaseName;
+ (id)protectedDatabaseName;

- (void)addAdditionalCriteriaToCleanupActivity:(id)arg1;
- (void)finishJournalReconciliation:(unsigned long long)arg1;
- (bool)protectedDataAvailable;
- (bool)supportsJournaling;

@end

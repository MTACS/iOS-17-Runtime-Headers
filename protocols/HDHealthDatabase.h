
@protocol HDHealthDatabase <NSObject>

@required

- (void)addDatabaseJournalMergeObserver:(id <HDDatabaseJournalMergeObserver>)arg1 journalType:(long long)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3;
- (bool)addJournalEntries:(NSArray *)arg1 error:(id*)arg2;
- (bool)addJournalEntry:(HDJournalEntry *)arg1 error:(id*)arg2;
- (void)addProtectedDataObserver:(id <HDDatabaseProtectedDataObserver>)arg1;
- (void)addProtectedDataObserver:(id <HDDatabaseProtectedDataObserver>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (HDAssertion *)cloneAccessibilityAssertion:(HDAssertion *)arg1 ownerIdentifier:(NSString *)arg2 error:(id*)arg3;
- (bool)isDataProtectedByFirstUnlockAvailable;
- (bool)isProtectedDataAvailable;
- (void)performAsynchronously:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performAsynchronouslySerial:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)performHighPriorityTransactionsWithError:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 7: id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, id*, void*
- (void)performInFirstProtectedWriteTransaction:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, HDDatabaseTransaction *, id*, void*
- (void)performInFirstUnprotectedWriteTransaction:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, HDDatabaseTransaction *, id*, void*
- (bool)performTransactionWithContext:(void *)arg1 error:(void *)arg2 block:(void *)arg3 inaccessibilityHandler:(void *)arg4; // needs 4 arg types, found 16: HDDatabaseTransactionContext *, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, HDDatabaseTransaction *, id*, void*, id /* block */, void*, bool, id /* block */, NSError *, id*, void*
- (void)performWhenDataProtectedByFirstUnlockIsAvailable:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performWhenDataProtectedByFirstUnlockIsAvailableOnQueue:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 6: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)performWithTransactionContext:(void *)arg1 error:(void *)arg2 block:(void *)arg3; // needs 3 arg types, found 8: HDDatabaseTransactionContext *, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, id*, void*
- (void)removeDatabaseJournalMergeObserver:(id <HDDatabaseJournalMergeObserver>)arg1 journalType:(long long)arg2;
- (void)removeProtectedDataObserver:(id <HDDatabaseProtectedDataObserver>)arg1;
- (HDAssertion *)takeAccessibilityAssertionWithOwnerIdentifier:(NSString *)arg1 timeout:(double)arg2 error:(id*)arg3;

@end

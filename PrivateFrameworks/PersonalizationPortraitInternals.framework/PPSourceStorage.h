
@interface PPSourceStorage : NSObject {
    PPContactStorage * _contactStorage;
    PPSQLDatabase * _db;
}

+ (double)matchAccuracyForSecondsFrom1970;

- (void).cxx_destruct;
- (id)createSourceWithStatement:(id)arg1 txnWitness:(id)arg2;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (bool)iterSourcesWithQuery:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)loadSourcesWithBundleId:(id)arg1 groupId:(id)arg2 documentId:(id)arg3 txnWitness:(id)arg4;
- (long long)pruneSourcesWithNoReferencesWithTxnWitness:(id)arg1;
- (long long)updateOrCreateRowForSource:(id)arg1 addingRefCount:(long long)arg2 txnWitness:(id)arg3;
- (id)whereSourceIdInSubclauseWithSourceIds:(id)arg1 tableNameAlias:(id)arg2 binders:(id)arg3;

@end

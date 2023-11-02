
@interface TRIExperimentHistoryDatabase : NSObject {
    TRIDatabase * _db;
}

- (void).cxx_destruct;
- (bool)_enumerateRecordsMatchingWhereClause:(id)arg1 bind:(id /* block */)arg2 block:(id /* block */)arg3;
- (bool)addRecord:(id)arg1;
- (bool)enumerateRecordsNewerThanDate:(id)arg1 matchingDeploymentEnvironments:(id)arg2 block:(id /* block */)arg3;
- (bool)expireRecordsOlderThanDate:(id)arg1 deletedCount:(unsigned long long*)arg2;
- (id)getAllAllocationStatusesForExperimentId:(id)arg1 deploymentId:(int)arg2 treatmentId:(id)arg3;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (struct _PASDBTransactionCompletion_ { bool x1; })readTransactionWithFailableBlock:(id /* block */)arg1;
- (struct _PASDBTransactionCompletion_ { bool x1; })writeTransactionWithFailableBlock:(id /* block */)arg1;

@end

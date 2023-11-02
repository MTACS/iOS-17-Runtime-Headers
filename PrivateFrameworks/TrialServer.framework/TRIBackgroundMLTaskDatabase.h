
@interface TRIBackgroundMLTaskDatabase : NSObject {
    TRIDatabase * _db;
}

- (void).cxx_destruct;
- (bool)_enumerateTaskRecordsMatchingWhereClause:(id)arg1 bind:(id /* block */)arg2 transaction:(id)arg3 block:(id /* block */)arg4;
- (bool)activateDeployment:(id)arg1 withFactorPackSetId:(id)arg2 targetingRuleIndex:(id)arg3 usingTransaction:(id)arg4;
- (struct { unsigned long long x1; })addBackgroundMLTaskWithTaskDeployment:(id)arg1 pluginId:(id)arg2 status:(long long)arg3 endDate:(id)arg4 artifact:(id)arg5;
- (bool)deactivateDeployment:(id)arg1 usingTransaction:(id)arg2;
- (bool)deactivateTaskDeployment:(id)arg1 deactivatedFactorPackSetId:(id*)arg2 usingTransaction:(id)arg3;
- (bool)enumerateActiveTasksNotInList:(id)arg1 usingTransaction:(id)arg2 withBlock:(id /* block */)arg3;
- (bool)enumerateActiveTasksWithBlock:(id /* block */)arg1;
- (bool)enumerateActiveTasksWithTransaction:(id)arg1 block:(id /* block */)arg2;
- (bool)enumerateTaskRecordsMatchingTaskId:(id)arg1 transaction:(id)arg2 block:(id /* block */)arg3;
- (bool)enumerateTaskRecordsWithBlock:(id /* block */)arg1;
- (bool)enumerateTaskRecordsWithTransaction:(id)arg1 block:(id /* block */)arg2;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (struct _PASDBTransactionCompletion_ { bool x1; })readTransactionWithFailableBlock:(id /* block */)arg1;
- (struct { unsigned long long x1; })removeRecordWithDeployment:(id)arg1;
- (bool)setActiveFactorPackSetId:(id)arg1 activeTargetingRuleIndex:(id)arg2 forTaskDeployment:(id)arg3 usingTransaction:(id)arg4;
- (bool)setStatus:(long long)arg1 forTaskDeployment:(id)arg2 usingTransaction:(id)arg3;
- (bool)setTargetedFactorPackSetId:(id)arg1 targetedTargetingRuleIndex:(id)arg2 forTaskDeployment:(id)arg3 usingTransaction:(id)arg4;
- (bool)targetTaskDeployment:(id)arg1 toFactorPackSetId:(id)arg2 targetingRuleIndex:(id)arg3 usingTransaction:(id)arg4;
- (id)taskRecordWithTaskDeployment:(id)arg1;
- (struct _PASDBTransactionCompletion_ { bool x1; })writeTransactionWithFailableBlock:(id /* block */)arg1;

@end

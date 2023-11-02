
@interface TRIRolloutDatabase : NSObject {
    TRIDatabase * _db;
}

- (void).cxx_destruct;
- (id)_dataNoCopyFromStmt:(id)arg1 columnName:(const char *)arg2;
- (bool)_enumerateRecordsMatchingWhereClause:(id)arg1 bind:(id /* block */)arg2 prependingWithClause:(id)arg3 usingTransaction:(id)arg4 block:(id /* block */)arg5;
- (bool)activateDeployment:(id)arg1 withFactorPackSetId:(id)arg2 targetingRuleIndex:(id)arg3 deactivatedDeployments:(id)arg4 deactivatedFactorPackSetIds:(id)arg5 deactivationStateTransitions:(id)arg6 usingTransaction:(id)arg7;
- (bool)addNewRolloutWithRecord:(id)arg1;
- (bool)deactivateDeployment:(id)arg1 usingTransaction:(id)arg2;
- (bool)deactivateDeploymentsWithRolloutId:(id)arg1 deactivatedDeployment:(id*)arg2 deactivatedFactorPackSetId:(id*)arg3 deactivatedRampId:(id*)arg4 deactivationStateTransitions:(id)arg5 usingTransaction:(id)arg6;
- (bool)enumerateActiveRecordsWithVisibility:(unsigned int)arg1 usingTransaction:(id)arg2 block:(id /* block */)arg3;
- (bool)enumerateRecordsOverlappingNamespaces:(id)arg1 usingTransaction:(id)arg2 block:(id /* block */)arg3;
- (bool)enumerateRecordsUsingTransaction:(id)arg1 block:(id /* block */)arg2;
- (bool)enumerateRecordsWithRolloutId:(id)arg1 usingTransaction:(id)arg2 block:(id /* block */)arg3;
- (bool)hasRecordReferencingFactorPackSetId:(id)arg1 withReferenceType:(unsigned int)arg2;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (struct _PASDBTransactionCompletion_ { bool x1; })readTransactionWithFailableBlock:(id /* block */)arg1;
- (id)recordWithDeployment:(id)arg1 usingTransaction:(id)arg2;
- (struct { unsigned long long x1; })removeRecordWithDeployment:(id)arg1;
- (struct { unsigned long long x1; })removeRecordWithDeployment:(id)arg1 usingRefCounting:(bool)arg2;
- (bool)setActiveFactorPackSetId:(id)arg1 activeTargetingRuleIndex:(id)arg2 forDeployment:(id)arg3 usingTransaction:(id)arg4;
- (bool)setStatus:(long long)arg1 forDeployment:(id)arg2 usingTransaction:(id)arg3;
- (bool)setTargetedFactorPackSetId:(id)arg1 targetedTargetingRuleIndex:(id)arg2 forDeployment:(id)arg3 usingTransaction:(id)arg4;
- (bool)targetDeployment:(id)arg1 toFactorPackSetId:(id)arg2 targetingRuleIndex:(id)arg3 deallocatedDeployments:(id)arg4 usingTransaction:(id)arg5;
- (struct _PASDBTransactionCompletion_ { bool x1; })writeTransactionWithFailableBlock:(id /* block */)arg1;

@end


@interface TRIExperimentDatabase : NSObject {
    TRIDatabase * _db;
}

- (void).cxx_destruct;
- (bool)_enumerateExperimentRecordsMatchingWhereClause:(id)arg1 bind:(id /* block */)arg2 block:(id /* block */)arg3;
- (id)activeExperimentRecordWithTreatmentId:(id)arg1;
- (struct { unsigned long long x1; })addExperimentWithExperimentDeployment:(id)arg1 environment:(int)arg2 type:(int)arg3 status:(long long)arg4 startDate:(id)arg5 endDate:(id)arg6 namespaces:(id)arg7 artifact:(id)arg8;
- (bool)enumerateActiveExperimentRecordsWithVisibility:(unsigned int)arg1 block:(id /* block */)arg2;
- (bool)enumerateExperimentRecordsMatchingExperimentId:(id)arg1 block:(id /* block */)arg2;
- (bool)enumerateExperimentRecordsMatchingStatuses:(id)arg1 block:(id /* block */)arg2;
- (bool)enumerateExperimentRecordsWithBlock:(id /* block */)arg1;
- (bool)enumerateNamespaceRecordsForExperimentDeployment:(id)arg1 usingTransaction:(id)arg2 block:(id /* block */)arg3;
- (id)experimentRecordWithExperimentDeployment:(id)arg1;
- (bool)hasRecordReferencingTreatmentId:(id)arg1 withReferenceType:(unsigned int)arg2;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (bool)namespacesAreAvailableForExperiment:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 namespaces:(id)arg4;
- (struct _PASDBTransactionCompletion_ { bool x1; })readTransactionWithFailableBlock:(id /* block */)arg1;
- (struct { unsigned long long x1; })removeExperimentRecordWithExperimentDeployment:(id)arg1;
- (bool)setManuallyTargeted:(bool)arg1 forExperimentDeployment:(id)arg2 usingTransaction:(id)arg3;
- (bool)setStatus:(long long)arg1 forExperimentDeployment:(id)arg2 usingTransaction:(id)arg3;
- (bool)setTreatmentId:(id)arg1 forExperimentDeployment:(id)arg2 usingTransaction:(id)arg3;
- (bool)setTreatmentURL:(id)arg1 forExperimentDeployment:(id)arg2 namespaceName:(id)arg3;
- (id)treatmentURLsForExperimentDeployment:(id)arg1 usingTransaction:(id)arg2;
- (struct _PASDBTransactionCompletion_ { bool x1; })writeTransactionWithFailableBlock:(id /* block */)arg1;

@end

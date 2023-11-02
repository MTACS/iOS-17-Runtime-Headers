
@interface TRIContentTracker : NSObject {
    TRIDatabase * _db;
}

+ (id)contentIdentifierForBMLTArtifactWithDeployment:(id)arg1;
+ (id)contentIdentifierForExperimentArtifactWithDeployment:(id)arg1;
+ (id)contentIdentifierForFactorPackSetWithId:(id)arg1;
+ (id)contentIdentifierForRolloutArtifactWithDeployment:(id)arg1;
+ (id)contentIdentifierForTreatmentArtifactWithTreatmentId:(id)arg1 container:(id)arg2;
+ (id)decodeContentIdentifier:(id)arg1;

- (void).cxx_destruct;
- (bool)_addOrDropRefWithContentIdentifier:(id)arg1 changeType:(unsigned long long)arg2;
- (bool)addRefWithContentIdentifier:(id)arg1;
- (bool)clearRefsWithContentIdentifier:(id)arg1;
- (bool)dropRefWithContentIdentifier:(id)arg1;
- (bool)enumerateTrackedItemsWithBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (struct _PASDBTransactionCompletion_ { bool x1; })readTransactionWithFailableBlock:(id /* block */)arg1;
- (bool)refCountForContentIdentifier:(id)arg1 refCount:(long long*)arg2;
- (struct _PASDBTransactionCompletion_ { bool x1; })writeTransactionWithFailableBlock:(id /* block */)arg1;

@end

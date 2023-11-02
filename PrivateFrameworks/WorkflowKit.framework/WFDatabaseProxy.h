
@interface WFDatabaseProxy : NSObject {
    NSXPCConnection * _databaseProxyHostConnection;
}

@property (nonatomic, readonly) NSXPCConnection *databaseProxyHostConnection;

+ (id)defaultDatabase;

- (void).cxx_destruct;
- (id)approvalResultForContentAttributionSet:(id)arg1 contentDestination:(id)arg2 actionUUID:(id)arg3 actionIdentifier:(id)arg4 actionIndex:(unsigned long long)arg5 reference:(id)arg6 allowedOnceStates:(id)arg7 error:(id*)arg8;
- (id)collectionWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)configuredTriggersForWorkflowID:(id)arg1 error:(id*)arg2;
- (id)createWorkflowWithWorkflowRecord:(id)arg1 nameCollisionBehavior:(unsigned long long)arg2 error:(id*)arg3;
- (id)currentDeletionAuthorizationStatusWithContentItemClassName:(id)arg1 actionUUID:(id)arg2 actionIdentifier:(id)arg3 actionIndex:(unsigned long long)arg4 count:(unsigned long long)arg5 reference:(id)arg6 error:(id*)arg7;
- (id)database;
- (id)databaseProxyHostConnection;
- (id)folderForWorkflowReference:(id)arg1 error:(id*)arg2;
- (id)hostProxyWithErrorHandler:(id /* block */)arg1;
- (bool)isReference:(id)arg1 allowedToRunOnDomain:(id)arg2;
- (id)logRunOfWorkflow:(id)arg1 withSource:(id)arg2 triggerID:(id)arg3;
- (void)quarantineWorkflowWithReference:(id)arg1;
- (id)referenceForWorkflowID:(id)arg1;
- (bool)saveSmartPromptStateData:(id)arg1 actionUUID:(id)arg2 reference:(id)arg3 error:(id*)arg4;
- (id)serializedParametersForAppEntityIdentifier:(id)arg1 error:(id*)arg2;
- (void)setOutcome:(long long)arg1 forRunEvent:(id)arg2;
- (void)setTrustedToRunScripts:(bool)arg1 forReference:(id)arg2 onDomain:(id)arg3;
- (id)sortedVisibleFoldersWithError:(id*)arg1;
- (id)sortedVisibleWorkflowsByNameWithError:(id*)arg1;
- (id)sortedVisibleWorkflowsInCollection:(id)arg1 error:(id*)arg2;
- (id)sortedWorkflowsWithQuery:(id)arg1 error:(id*)arg2;
- (void)storeQuarantineHashForWorkflowWithReference:(id)arg1 quarantineHash:(id)arg2;
- (id)uniqueVisibleReferenceForWorkflowName:(id)arg1;
- (void)updateAppDescriptor:(id)arg1 atKey:(id)arg2 actionUUID:(id)arg3 actionIndex:(id)arg4 actionIdentifier:(id)arg5 workflowID:(id)arg6 error:(id*)arg7;
- (id)workflowRecordForDescriptor:(id)arg1 error:(id*)arg2;

@end

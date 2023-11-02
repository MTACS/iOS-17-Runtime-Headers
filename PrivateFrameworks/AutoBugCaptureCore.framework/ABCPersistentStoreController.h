
@interface ABCPersistentStoreController : NSObject {
    <ABCPersistentStoreControllerDelegate> * _delegate;
    AnalyticsWorkspace * _workspace;
    NSObject<OS_dispatch_queue> * storeQueue;
    AnalyticsWorkspace * tempWorkspace;
    bool  workspaceReady;
}

@property (nonatomic) <ABCPersistentStoreControllerDelegate> *delegate;
@property (nonatomic, readonly) AnalyticsWorkspace *workspace;

- (void).cxx_destruct;
- (void)caseAttachmentsForAllDiagnosticCasesWithQueue:(id)arg1 reply:(id /* block */)arg2;
- (void)caseAttachmentsForDiagnosticCaseIDs:(id)arg1 queue:(id)arg2 reply:(id /* block */)arg3;
- (id)caseStorageAnalytics;
- (id)caseSummaryAnalytics;
- (id)caseUsageAnalytics;
- (void)cleanupDiagnosticCaseStorage;
- (void)cleanupDiagnosticCaseSummary;
- (void)cleanupDiagnosticCaseUsage;
- (void)cleanupUploadRecord;
- (id)delegate;
- (id)init;
- (id)initWithDirectory:(id)arg1;
- (id)initWithName:(id)arg1 inDirectory:(id)arg2;
- (id)prepareDataDirectoryWithName:(id)arg1 containerPath:(id)arg2;
- (bool)prepareWorkspaceWithDirectoryPath:(id)arg1;
- (void)removeAllCaseStorages;
- (void)removeCaseStorageWithID:(id)arg1;
- (void)removeCaseStoragesWithCaseIDs:(id)arg1;
- (void)removeCaseStoragesWithUUIDs:(id)arg1;
- (void)save;
- (void)save:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)shutdown;
- (id)uploadRecordAnalytics;
- (id)workspace;

@end

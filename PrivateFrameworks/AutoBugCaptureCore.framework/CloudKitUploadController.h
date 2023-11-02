
@interface CloudKitUploadController : NSObject {
    bool  _aggregateOperationResult;
    DiagnosticCaseStorageAnalytics * _caseStorageAnalytics;
    DiagnosticCaseSummaryAnalytics * _caseSummaryAnalytics;
    unsigned long long  _outstandingOperationCount;
    NSObject<OS_dispatch_queue> * _queue;
    UploadRecordAnalytics * _uploadRecordAnalytics;
    AnalyticsWorkspace * _workspace;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (void)unregisterCloudKitUploadActivities;

- (void).cxx_destruct;
- (id)_fetchCasesInternal:(id)arg1 limit:(unsigned long long)arg2;
- (id)_fetchRecentPendingCaseSummariesInternal:(id)arg1 limit:(unsigned long long)arg2;
- (void)_save;
- (void)ckcodeDecisionService:(id)arg1 response:(id /* block */)arg2;
- (void)configureCaseSummaryDiscretionaryActivityCriteria:(id)arg1;
- (void)configureLogUploadDiscretionaryActivityCriteria:(id)arg1;
- (void)configureWorkspace:(id)arg1;
- (id)currentCloudKitContainerForEnvironment:(long long)arg1;
- (void)deferXPCActivity:(id)arg1;
- (id)fetchCaseSummariesWithIdentifiers:(id)arg1;
- (id)fetchCasesWithIdentifiers:(id)arg1 limit:(unsigned long long)arg2;
- (id)fetchRecentCasesPendingUpload:(unsigned long long)arg1;
- (id)fetchRecentPendingCaseSummaries:(unsigned long long)arg1;
- (void)filterCasesPendingUpload:(id)arg1 activity:(id)arg2 reply:(id /* block */)arg3;
- (void)filterCasesViaCloudkitDecisionService:(id)arg1 activity:(id)arg2 response:(id /* block */)arg3;
- (void)finishXPCActivity:(id)arg1;
- (id)initWithWorkspace:(id)arg1;
- (id)locallyFilterCases:(id)arg1;
- (bool)logUploadRequiresConsent:(id)arg1;
- (void)operationCompletedWithID:(id)arg1 savedRecords:(id)arg2 deletedRecords:(id)arg3 error:(id)arg4 activity:(id)arg5;
- (void)performSubmissionOfCaseSummariesWithIdentifiers:(id)arg1 reply:(id /* block */)arg2;
- (void)performSubmissionOfRecentCaseSummaries:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)performUploadDecisionForCaseIdentifiers:(id)arg1 reply:(id /* block */)arg2;
- (void)performUploadForCaseIdentifiers:(id)arg1;
- (void)performUploadForRecentCases:(unsigned long long)arg1;
- (id)processCloudkitDecisionServiceResponse:(id)arg1;
- (id)queue;
- (id)randomlySelectCasesFrom:(id)arg1 maximum:(unsigned long long)arg2;
- (void)recordOperationCompleteForOperationID:(id)arg1 completionTime:(id)arg2 success:(bool)arg3;
- (void)registerCaseSummaryActivities;
- (void)registerCloudKitUploadActivities;
- (void)registerLogUploadActivities;
- (void)save;
- (bool)shouldDeferFromCloudKitError:(id)arg1;
- (void)startPeriodicSummaryTask:(id)arg1;
- (void)startPeriodicUploadTask:(id)arg1;
- (void)submitCaseSummaries:(id)arg1 activity:(id)arg2;
- (void)submitCaseSummariesWithIdentifiers:(id)arg1 reply:(id /* block */)arg2;
- (void)submitRecentCaseSummaries:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)uploadCasesWithIdentifiers:(id)arg1;
- (void)uploadDecisionWithIdentifiers:(id)arg1 reply:(id /* block */)arg2;
- (void)uploadDiagnosticCases:(id)arg1 activity:(id)arg2;
- (void)uploadMostRecentCases:(unsigned long long)arg1;
- (id)uploadOperationWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 allowCellular:(bool)arg3 activity:(id)arg4;
- (void)uploadToCloudKitContainer:(id)arg1 withRecords:(id)arg2 activity:(id)arg3;
- (bool)validateCaseAttachmentsForDiagnosticCaseStorage:(id)arg1 record:(id)arg2;

@end

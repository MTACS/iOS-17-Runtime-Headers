
@interface IMDMessagesSyncCoordinatorInternal : NSObject

+ (void)clearSyncStoreWhenSafeWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
+ (bool)configureWith:(id)arg1 error:(id*)arg2;
+ (id)fetchServerCounts;
+ (void)fetchSyncStoreCountsWithCompletion:(id /* block */)arg1;
+ (id)initiateSyncFor:(id)arg1 delegate:(id)arg2 forceRunNow:(bool)arg3 error:(id*)arg4;
+ (void)registerWithBackupController:(id)arg1;
+ (void)registerWithErrorAnalyzer:(id)arg1;
+ (void)registerWithNotifier:(id)arg1;
+ (void)registerWithPreReqsVerifier:(id)arg1;
+ (void)registerWithStore:(id)arg1 asType:(long long)arg2;
+ (void)registerWithSyncStateManager:(id)arg1;
+ (void)registerWithSyncTokenStore:(id)arg1;
+ (bool)scheduleAttachmentAssetDownloadSyncWithDelegate:(id)arg1 error:(id*)arg2;
+ (bool)scheduleBackfillSyncWithDelegate:(id)arg1 error:(id*)arg2;
+ (bool)scheduleBackupSyncWithDelegate:(id)arg1 error:(id*)arg2;
+ (bool)schedulePeriodicSyncWithDelegate:(id)arg1 error:(id*)arg2;
+ (bool)startInitialSyncWithDelegate:(id)arg1 error:(id*)arg2;
+ (bool)startUserInitiatedSyncWithDelegate:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)init;

@end

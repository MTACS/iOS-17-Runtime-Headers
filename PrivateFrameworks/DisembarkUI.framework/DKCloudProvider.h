
@interface DKCloudProvider : NSObject <BYClientDaemonCloudSyncProtocol, DKCloudProvider> {
    NSProgress * _backupProgress;
    NSArray * _backupProviders;
    NSMutableArray * _backupResults;
    BYBuddyDaemonCloudSyncClient * _cloudSyncClient;
    id /* block */  _completion;
    DKBackupProvider * _currentBackupProvider;
    bool  _notifiedCompletion;
    NWPathEvaluator * _pathEvaluator;
    id /* block */  _progressHandler;
    NSObject<OS_dispatch_queue> * _progressQueue;
    NSArray * _syncErrors;
    NSProgress * _syncProgress;
    double  _timeRemaining;
}

@property (nonatomic, retain) NSProgress *backupProgress;
@property (nonatomic, retain) NSArray *backupProviders;
@property (nonatomic, retain) NSMutableArray *backupResults;
@property (nonatomic, retain) BYBuddyDaemonCloudSyncClient *cloudSyncClient;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) DKBackupProvider *currentBackupProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool notifiedCompletion;
@property (nonatomic, retain) NWPathEvaluator *pathEvaluator;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, copy) NSObject<OS_dispatch_queue> *progressQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *syncErrors;
@property (nonatomic, retain) NSProgress *syncProgress;
@property (nonatomic) double timeRemaining;

- (void).cxx_destruct;
- (void)_communicateProgress;
- (void)_startBackupForProvider:(id)arg1 remainingProviders:(id)arg2 allowExpensiveCellular:(bool)arg3;
- (void)_startBackupWithProviders:(id)arg1 allowExpensiveCellular:(bool)arg2;
- (id)backupProgress;
- (id)backupProviders;
- (id)backupResults;
- (void)beginUploadAllowingExpensiveCellular:(bool)arg1 progressHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)cancelUpload;
- (id)cloudSyncClient;
- (id /* block */)completion;
- (id)currentBackupProvider;
- (void)hasDataToUpload:(id /* block */)arg1;
- (id)init;
- (bool)isRestoring;
- (unsigned long long)isUploadSupportedForCurrentNetwork;
- (bool)notifiedCompletion;
- (id)pathEvaluator;
- (id /* block */)progressHandler;
- (id)progressQueue;
- (void)setBackupProgress:(id)arg1;
- (void)setBackupProviders:(id)arg1;
- (void)setBackupResults:(id)arg1;
- (void)setCloudSyncClient:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setCurrentBackupProvider:(id)arg1;
- (void)setNotifiedCompletion:(bool)arg1;
- (void)setPathEvaluator:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setProgressQueue:(id)arg1;
- (void)setSyncErrors:(id)arg1;
- (void)setSyncProgress:(id)arg1;
- (void)setTimeRemaining:(double)arg1;
- (void)syncCompletedWithErrors:(id)arg1;
- (id)syncErrors;
- (id)syncProgress;
- (void)syncProgress:(double)arg1;
- (double)timeRemaining;

@end

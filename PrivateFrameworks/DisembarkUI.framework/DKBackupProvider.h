
@interface DKBackupProvider : NSObject <MBManagerDelegate> {
    ACAccount * _account;
    id /* block */  _completionHandler;
    MBManager * _manager;
    id /* block */  _progressHandler;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) MBManager *manager;
@property (nonatomic, copy) id /* block */ progressHandler;

- (void).cxx_destruct;
- (id)account;
- (void)cancel;
- (id /* block */)completionHandler;
- (id)initWithAccount:(id)arg1;
- (bool)isBackingUp;
- (bool)isBackupEnabled;
- (bool)isManualBackupOnCellularAllowed;
- (bool)isRestoring;
- (id)manager;
- (void)manager:(id)arg1 didFailBackupWithError:(id)arg2;
- (void)manager:(id)arg1 didUpdateProgress:(float)arg2 estimatedTimeRemaining:(unsigned long long)arg3;
- (void)managerDidFinishBackup:(id)arg1;
- (void)managerDidLoseConnectionToService:(id)arg1;
- (id /* block */)progressHandler;
- (void)setAccount:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setManager:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)startBackupWithExpensiveCellularAllowed:(bool)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;

@end

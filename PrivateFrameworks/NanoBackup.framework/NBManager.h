
@interface NBManager : NSObject {
    NSObject<OS_dispatch_queue> * _externalQueue;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *externalQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (void)initialize;

- (void).cxx_destruct;
- (id)connection;
- (void)createBackupForDevice:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)createBackupForDevice:(id)arg1 synchronousCompletionHandler:(id /* block */)arg2;
- (void)createBackupForPairingID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)createBackupForPairingID:(id)arg1 synchronousCompletionHandler:(id /* block */)arg2;
- (void)createManualBackupWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)deleteBackup:(id)arg1;
- (void)deleteBackup:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)externalQueue;
- (bool)getBackupsStatus;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)internalQueue;
- (void)listBackupsOfType:(unsigned long long)arg1 timeout:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)listBackupsOfType:(unsigned long long)arg1 withSynchronousCompletionHandler:(id /* block */)arg2;
- (void)listBackupsWithCompletionHandler:(id /* block */)arg1;
- (void)listBackupsWithSynchronousCompletionHandler:(id /* block */)arg1;
- (void)listBackupsWithTimeout:(long long)arg1 completionHandler:(id /* block */)arg2;
- (id)restoreFromBackup:(id)arg1 forDevice:(id)arg2;
- (void)restoreFromBackup:(id)arg1 forDevice:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)restoreFromDevice:(id)arg1 forDevice:(id)arg2;
- (void)restoreFromDevice:(id)arg1 forDevice:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setBackupsEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setExternalQueue:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)unsafe_invalidate;
- (id)xpcConnection;

@end

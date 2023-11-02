
@interface BLServiceProxy : NSObject <BLServiceProtocol> {
    NSXPCConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectionLock;
    <BLServiceProxyConnectionMonitoring> * _connectionMonitor;
    int  _notifyToken;
    <BLProgressReceiving> * _progressReceiver;
    long long  _state;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) <BLServiceProxyConnectionMonitoring> *connectionMonitor;
@property (nonatomic) int notifyToken;
@property (nonatomic, readonly) <BLProgressReceiving> *progressReceiver;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (void)_createAndStartConnection;
- (id)_remoteObjectWithErrorHandler:(id /* block */)arg1;
- (id)_synchronousRemoteObjectWithErrorHandler:(id /* block */)arg1;
- (void)cancelAllActiveDownloadsWithReply:(id /* block */)arg1;
- (void)cancelDownloadWithID:(id)arg1 withReply:(id /* block */)arg2;
- (id)connection;
- (id)connectionMonitor;
- (void)dealloc;
- (void)downloadWithPermlink:(id)arg1 title:(id)arg2 reply:(id /* block */)arg3;
- (void)fetchDownloadFromDownloadID:(id)arg1 withReply:(id /* block */)arg2;
- (void)fetchDownloadListWithReply:(id /* block */)arg1;
- (void)getCrashSimulationOverrideValuesWithReply:(id /* block */)arg1;
- (void)getValueSimulateDeviceOutOfSpaceWithReply:(id /* block */)arg1;
- (id)initWithError:(out id*)arg1;
- (id)initWithProgressReceiver:(id)arg1 error:(out id*)arg2;
- (void)migrationInfoWithStoreID:(long long)arg1 withReply:(id /* block */)arg2;
- (void)migrationInfosWithStates:(id)arg1 withReply:(id /* block */)arg2;
- (void)migrationInfosWithStoreIDs:(id)arg1 withReply:(id /* block */)arg2;
- (void)monitorProgressWithReply:(id /* block */)arg1;
- (int)notifyToken;
- (void)pauseDownloadWithID:(id)arg1 withReply:(id /* block */)arg2;
- (void)prepareForRemoveAppWithReply:(id /* block */)arg1;
- (void)processAutomaticDownloadsWithReply:(id /* block */)arg1;
- (id)progressReceiver;
- (void)purchaseWithRequest:(id)arg1 uiHostProxy:(id)arg2 reply:(id /* block */)arg3;
- (void)racGUIDForStoreID:(long long)arg1 withReply:(id /* block */)arg2;
- (void)reloadFromServerWithReply:(id /* block */)arg1;
- (void)removeAllMigrationInfosExcludingStates:(id)arg1 withReply:(id /* block */)arg2;
- (void)removeMigrationInfoForStoreID:(long long)arg1 withReply:(id /* block */)arg2;
- (void)removeRacGUIDForStoreID:(long long)arg1 withReply:(id /* block */)arg2;
- (void)requestDownloadWithMetadata:(id)arg1 isRestore:(bool)arg2 reply:(id /* block */)arg3;
- (void)requestDownloadWithParameters:(id)arg1 reply:(id /* block */)arg2;
- (void)requestDownloadsWithManifestRequest:(id)arg1 uiHostProxy:(id)arg2 reply:(id /* block */)arg3;
- (void)requestDownloadsWithMetadata:(id)arg1 areRestore:(bool)arg2 reply:(id /* block */)arg3;
- (void)requestDownloadsWithRestoreContentRequestItems:(id)arg1 reply:(id /* block */)arg2;
- (void)resetAllCrashSimulationOverridesWithReply:(id /* block */)arg1;
- (void)restartDownloadWithID:(id)arg1 withReply:(id /* block */)arg2;
- (void)resumeDownloadWithID:(id)arg1 withReply:(id /* block */)arg2;
- (void)setAutomaticDownloadEnabled:(bool)arg1 uiHostProxy:(id)arg2 reply:(id /* block */)arg3;
- (void)setConnection:(id)arg1;
- (void)setConnectionMonitor:(id)arg1;
- (void)setMigrationState:(long long)arg1 forStoreIDs:(id)arg2 withReply:(id /* block */)arg3;
- (void)setNotifyToken:(int)arg1;
- (void)setRacGUID:(id)arg1 forStoreID:(long long)arg2 withReply:(id /* block */)arg3;
- (void)setState:(long long)arg1;
- (void)setValueSimulateCrashAtInstallDuringDecrypt:(bool)arg1 withReply:(id /* block */)arg2;
- (void)setValueSimulateCrashAtInstallDuringFinish:(bool)arg1 withReply:(id /* block */)arg2;
- (void)setValueSimulateCrashAtInstallDuringUnzip:(bool)arg1 withReply:(id /* block */)arg2;
- (void)setValueSimulateCrashAtInstallStart:(bool)arg1 withReply:(id /* block */)arg2;
- (void)setValueSimulateDeviceOutOfSpace:(bool)arg1 withReply:(id /* block */)arg2;
- (void)shutdown;
- (long long)state;

@end

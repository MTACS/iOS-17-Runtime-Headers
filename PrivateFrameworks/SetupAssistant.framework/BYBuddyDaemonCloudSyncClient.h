
@interface BYBuddyDaemonCloudSyncClient : NSObject <BYClientDaemonCloudSyncProtocol> {
    NSXPCConnection * _connection;
    <BYClientDaemonCloudSyncProtocol> * _delegate;
    bool  _syncDidComplete;
    bool  _syncDidStart;
}

@property (retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property <BYClientDaemonCloudSyncProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool syncDidComplete;
@property (nonatomic) bool syncDidStart;

+ (id)clientInterface;

- (void).cxx_destruct;
- (void)cancelSync;
- (void)cloudSyncProgressUpdate:(long long)arg1 completedClients:(long long)arg2 errors:(id)arg3;
- (void)connectToDaemon;
- (id)connection;
- (id)delegate;
- (void)fetchCurrentSyncState:(id /* block */)arg1;
- (id)init;
- (void)isSyncInProgress:(id /* block */)arg1;
- (void)needsToSync:(id /* block */)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSyncDidComplete:(bool)arg1;
- (void)setSyncDidStart:(bool)arg1;
- (void)startSync;
- (void)syncCompletedWithErrors:(id)arg1;
- (bool)syncDidComplete;
- (bool)syncDidStart;
- (void)syncProgress:(double)arg1;

@end

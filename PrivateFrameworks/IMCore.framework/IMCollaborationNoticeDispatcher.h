
@interface IMCollaborationNoticeDispatcher : NSObject {
    <IMDaemonMultiplexedConnectionManaging> * _daemonConnection;
}

@property (nonatomic, retain) <IMDaemonMultiplexedConnectionManaging> *daemonConnection;

- (void).cxx_destruct;
- (id)_bestSendingHandle;
- (id)daemonConnection;
- (void)dealloc;
- (void)disconnectFromDaemon;
- (id)init;
- (void)sendClearNotice:(id)arg1 toHandles:(id)arg2 completion:(id /* block */)arg3;
- (void)sendNotice:(id)arg1 toHandles:(id)arg2 completion:(id /* block */)arg3;
- (void)setDaemonConnection:(id)arg1;
- (void)setUpConnectionToDaemon;

@end

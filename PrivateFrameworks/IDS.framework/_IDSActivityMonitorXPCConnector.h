
@interface _IDSActivityMonitorXPCConnector : NSObject <IDSXPCActivityMonitorClient> {
    IDSXPCDaemonController * _daemonController;
    id /* block */  _daemonControllerBuilder;
    NSMutableDictionary * _listenersByActivity;
    IDSXPCDaemonController * _syncDaemonController;
    id /* block */  _syncDaemonControllerBuilder;
}

@property (nonatomic, retain) IDSXPCDaemonController *daemonController;
@property (nonatomic, copy) id /* block */ daemonControllerBuilder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *listenersByActivity;
@property (readonly) Class superclass;
@property (nonatomic, retain) IDSXPCDaemonController *syncDaemonController;
@property (nonatomic, copy) id /* block */ syncDaemonControllerBuilder;

+ (id)weakSharedInstance;

- (void).cxx_destruct;
- (void)_handleInterruption;
- (void)_updateActivity:(id)arg1 isSupported:(bool)arg2;
- (void)addListener:(id)arg1 forTopic:(id)arg2;
- (id)daemonController;
- (id /* block */)daemonControllerBuilder;
- (void)dealloc;
- (void)handleIncomingUpdate:(id)arg1 onActivity:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithSyncDaemonControllerBuilder:(id /* block */)arg1 daemonControllerBuilder:(id /* block */)arg2;
- (id)listenersByActivity;
- (void)performAction:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)performSyncAction:(id /* block */)arg1;
- (void)removeListener:(id)arg1 forTopic:(id)arg2;
- (void)setDaemonController:(id)arg1;
- (void)setDaemonControllerBuilder:(id /* block */)arg1;
- (void)setListenersByActivity:(id)arg1;
- (void)setSyncDaemonController:(id)arg1;
- (void)setSyncDaemonControllerBuilder:(id /* block */)arg1;
- (id)syncDaemonController;
- (id /* block */)syncDaemonControllerBuilder;

@end

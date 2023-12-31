
@interface SUControllerManager : NSObject {
    bool  _communalUponDisconnect;
    <SUControllerManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _exclusiveControl;
    int  _notifyStateReportToken;
    bool  _reconnectFailed;
    bool  _reconnecting;
    NSObject<OS_dispatch_queue> * _serverQueue;
    NSObject<OS_xpc_object> * _serverXPCConnection;
}

@property (nonatomic) bool communalUponDisconnect;
@property (nonatomic) <SUControllerManagerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic) bool exclusiveControl;
@property (nonatomic) int notifyStateReportToken;
@property (nonatomic) bool reconnectFailed;
@property (nonatomic) bool reconnecting;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serverQueue;
@property (nonatomic, retain) NSObject<OS_xpc_object> *serverXPCConnection;

- (void).cxx_destruct;
- (void)_addClient;
- (void)_attemptReconnect;
- (void)_forwardApplyProgress:(id)arg1;
- (void)_forwardAutoScanPerformed:(id)arg1;
- (void)_forwardConnectionError:(id)arg1 message:(id)arg2;
- (void)_forwardConnectionRegained:(id)arg1 message:(id)arg2;
- (void)_forwardDownloadProgress:(id)arg1;
- (void)_forwardInstallResult:(id)arg1;
- (void)_forwardScanPostponed:(id)arg1;
- (void)_forwardScanResult:(id)arg1;
- (void)_handleStateReport;
- (void)_handleXPCEvent:(id)arg1;
- (void)_indicateConnectionError:(id)arg1;
- (void)_indicateConnectionRegained:(id)arg1;
- (void)_indicateMessageReceived:(id)arg1 messageType:(const char *)arg2;
- (id)_serverConnection;
- (id)_stateName;
- (void)cancelCurrentConnection;
- (bool)communalUponDisconnect;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (bool)exclusiveControl;
- (id)initWithDelegate:(id)arg1;
- (id)initWithExclusiveControl:(bool)arg1 communalUponDisconnect:(bool)arg2 withDelegate:(id)arg3;
- (void)installUpdate:(id)arg1;
- (void)managerConfig:(id /* block */)arg1;
- (void)managerState:(id /* block */)arg1;
- (void)managerStatus:(id /* block */)arg1;
- (void)modifyConfig:(id)arg1 modifying:(long long)arg2 completion:(id /* block */)arg3;
- (int)notifyStateReportToken;
- (void)performMigration;
- (void)purgeUpdate:(id)arg1 completion:(id /* block */)arg2;
- (bool)reconnectFailed;
- (bool)reconnecting;
- (void)scanForUpdates;
- (void)scanForUpdates:(id)arg1;
- (id)serverQueue;
- (id)serverXPCConnection;
- (void)setCommunalUponDisconnect:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setExclusiveControl:(bool)arg1;
- (void)setNotifyStateReportToken:(int)arg1;
- (void)setReconnectFailed:(bool)arg1;
- (void)setReconnecting:(bool)arg1;
- (void)setServerQueue:(id)arg1;
- (void)setServerXPCConnection:(id)arg1;
- (void)startDownload:(id)arg1;
- (void)updateAcceptingTermsAndConditions;
- (void)updateAcceptingTermsAndConditions:(id)arg1;
- (void)updateAcceptingTermsAndConditions:(id)arg1 usingPassword:(id)arg2;
- (void)useCredentialsToPersonalize:(id)arg1 withAccountName:(id)arg2 andPassword:(id)arg3;
- (void)useSSOTokenToPersonalize:(id)arg1 withSSOToken:(id)arg2;
- (void)userDidAcceptTermsAndConditionsForUpdate:(id)arg1;

@end

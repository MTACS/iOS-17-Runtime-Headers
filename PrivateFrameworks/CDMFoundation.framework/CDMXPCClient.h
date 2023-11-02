
@interface CDMXPCClient : CDMClientInterface {
    NSXPCConnection * _connection;
    CDMDataDispatcherContext * _dataDispatcherContext;
    <CDMClientDelegate> * _delegate;
    NSString * _localeIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    CDMServiceCenter * _serviceCenter;
    bool  _wakeOnInit;
}

- (void).cxx_destruct;
- (bool)areAssetsAvailable:(id)arg1;
- (id)connection;
- (void)dealloc;
- (void)doHandleCommand:(id)arg1 forCallback:(id /* block */)arg2;
- (void)handleOverridesAssetUpdateEvent:(id)arg1;
- (id)init;
- (id)initWithCallingBundleId:(id)arg1;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2 wakeOnInit:(bool)arg3;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 withCallingBundleId:(id)arg2;
- (void)invalidateConnection;
- (void)processCDMNluRequest:(id)arg1;
- (void)processCDMNluRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)processCDMNluRequest:(id)arg1 nullableCompletionHandler:(id /* block */)arg2;
- (bool)registerWithAssetsDelegate:(id)arg1;
- (void)setDataDispatcherContext:(id)arg1;
- (void)setup:(id)arg1;
- (void)setup:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setup:(id)arg1 nullableCompletionHandler:(id /* block */)arg2;
- (void)sharedInitTasks;
- (void)waitForDataDispatcherCompletion;
- (void)wake;
- (void)warmupWithCompletionHandler:(id /* block */)arg1;

@end

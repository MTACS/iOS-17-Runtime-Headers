
@interface IMDaemonConnection : NSObject {
    void listener;
    void queue;
    void requestQueue;
    void setupQueue;
    void unlockedCapabilities;
    void unlockedConnection;
    void unlockedContext;
    void unlockedIsInvokingSetup;
    void unlockedOnSetupComplete;
    void unlockedPendingSetupInvocation;
    void unlockedRemoteProxy;
    void unlockedShouldRequestSetup;
    void unlockedSynchronousRemoteProxy;
}

@property (nonatomic, readonly) bool isConnected;
@property (nonatomic, copy) id /* block */ onSetupComplete;
@property (nonatomic, readonly) <IMDaemonProtocol> *remoteObjectProxy;
@property (nonatomic, readonly) <IMDaemonProtocol> *synchronousRemoteObjectProxy;

- (void).cxx_destruct;
- (void)connectWithCapabilities:(unsigned long long)arg1 context:(id)arg2 contextChanged:(bool)arg3;
- (void)disconnect;
- (id)init;
- (id)initWithListener:(id)arg1;
- (bool)isConnected;
- (id /* block */)onSetupComplete;
- (id)remoteObjectProxy;
- (void)requestSetup;
- (void)requestSetupIfNeededWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)setOnSetupComplete:(id /* block */)arg1;
- (id)synchronousRemoteObjectProxy;
- (void)waitForSetup;

@end


@interface NEAgentFilterExtension : NSObject <NEAgentSessionDelegate, NEFilterExtensionProviderHostDelegate, NEFilterPluginDriver> {
    bool  _appsUpdateEnding;
    bool  _appsUpdateStarted;
    NSXPCListenerEndpoint * _clientListenerEndpoint;
    NEFilterProviderConfiguration * _configuration;
    NSExtension * _controlExtension;
    NSString * _controlExtensionIdentifier;
    bool  _controlExtensionInitialized;
    NEFilterControlExtensionProviderHostContext * _controlSessionContext;
    NSUUID * _controlSessionRequestIdentifier;
    int  _crypto_kernel_salt;
    struct cfil_crypto_state { struct ccdigest_info {} *x1; unsigned char x2[32]; } * _crypto_state;
    NSExtension * _dataExtension;
    NSString * _dataExtensionIdentifier;
    bool  _dataExtensionInitialized;
    NEFilterExtensionProviderHostContext * _dataSessionContext;
    NSUUID * _dataSessionRequestIdentifier;
    NSArray * _extensionUUIDs;
    <NEPluginManagerObjectFactory> * _managerObjectFactory;
    id /* block */  _pendingDisposeCompletion;
    NSString * _pluginType;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _sendFailedTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSXPCInterface *driverInterface;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCInterface *managerInterface;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *uuids;

+ (bool)authenticateFlowWithState:(struct cfil_crypto_state { struct ccdigest_info {} *x1; unsigned char x2[32]; }*)arg1 crypto_key:(id)arg2 flow:(id)arg3 salt:(unsigned int)arg4 isKernelSocket:(bool)arg5;

- (void).cxx_destruct;
- (void)applySettings:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)createPacketChannelForExtension:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)driverInterface;
- (void)extension:(id)arg1 didFailWithError:(id)arg2;
- (void)extension:(id)arg1 didStartWithError:(id)arg2;
- (void)extensionDidStop:(id)arg1;
- (void)fetchCurrentRulesForFlow:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getFilterClientConnectionWithCompletionHandler:(int)arg1 completionHandler:(id /* block */)arg2;
- (void)handleAppsUninstalled:(id)arg1;
- (void)handleAppsUpdateBegins:(id)arg1;
- (void)handleAppsUpdateEnding:(id)arg1;
- (void)handleAppsUpdateEnds:(id)arg1;
- (void)handleCancel;
- (void)handleDisposeWithCompletionHandler:(id /* block */)arg1;
- (void)handleInitWithCompletionHandler:(id /* block */)arg1;
- (id)initWithPluginType:(id)arg1 pluginClass:(long long)arg2 pluginEndpoint:(id)arg3 pluginProcessIdentity:(id)arg4 queue:(id)arg5 factory:(id)arg6;
- (id)initWithPluginType:(id)arg1 pluginClass:(long long)arg2 pluginInfo:(id)arg3 queue:(id)arg4 factory:(id)arg5;
- (id)managerInterface;
- (void)notifyRulesChanged;
- (void)provideRemediationMap:(id)arg1;
- (void)provideURLAppendStringMap:(id)arg1;
- (void)report:(id)arg1;
- (void)sendBrowserContentFilterServerRequest;
- (void)sendSocketContentFilterRequest;
- (void)sleepWithCompletionHandler:(id /* block */)arg1;
- (void)startFilter;
- (void)startWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateConfiguration:(id)arg1;
- (id)uuids;
- (void)wakeup;

@end

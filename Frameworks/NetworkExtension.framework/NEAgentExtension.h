
@interface NEAgentExtension : NSObject <NEAgentSessionDelegate, NEExtensionProviderHostDelegate, NEPluginDriver> {
    bool  _appsUpdateEnding;
    bool  _appsUpdateStarted;
    NSXPCInterface * _driverProtocol;
    NSExtension * _extension;
    NSString * _extensionIdentifier;
    NSString * _extensionPointIdentifier;
    NSArray * _extensionUUIDs;
    <NEPluginManagerObjectFactory> * _managerObjectFactory;
    NSXPCInterface * _managerProtocol;
    id /* block */  _pendingDisposeCompletion;
    NSString * _pluginType;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _sendFailedTimer;
    NEExtensionProviderHostContext * _sessionContext;
    NSUUID * _sessionRequestIdentifier;
}

@property bool appsUpdateEnding;
@property bool appsUpdateStarted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSXPCInterface *driverInterface;
@property (readonly) NSXPCInterface *driverProtocol;
@property (nonatomic, readonly) NSString *extensionIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCInterface *managerInterface;
@property (readonly) <NEPluginManagerObjectFactory> *managerObjectFactory;
@property (readonly) NSXPCInterface *managerProtocol;
@property (nonatomic, readonly) NSString *pluginType;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_dispatch_source> *sendFailedTimer;
@property (nonatomic, retain) NEExtensionProviderHostContext *sessionContext;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *uuids;

- (void).cxx_destruct;
- (bool)appsUpdateEnding;
- (bool)appsUpdateStarted;
- (void)dealloc;
- (id)driverInterface;
- (id)driverProtocol;
- (void)extension:(id)arg1 didFailWithError:(id)arg2;
- (void)extension:(id)arg1 didStartWithError:(id)arg2;
- (void)extensionDidStop:(id)arg1;
- (id)extensionIdentifier;
- (void)handleAppsUninstalled:(id)arg1;
- (void)handleAppsUpdateBegins:(id)arg1;
- (void)handleAppsUpdateEnding:(id)arg1;
- (void)handleAppsUpdateEnds:(id)arg1;
- (void)handleCancel;
- (void)handleDisposeWithCompletionHandler:(id /* block */)arg1;
- (void)handleExtensionStartedWithCompletionHandler:(id /* block */)arg1;
- (void)handleInitWithCompletionHandler:(id /* block */)arg1;
- (id)initWithPluginType:(id)arg1 pluginClass:(long long)arg2 pluginEndpoint:(id)arg3 pluginProcessIdentity:(id)arg4 queue:(id)arg5 factory:(id)arg6;
- (id)initWithPluginType:(id)arg1 pluginClass:(long long)arg2 pluginInfo:(id)arg3 queue:(id)arg4 factory:(id)arg5;
- (id)managerInterface;
- (id)managerObjectFactory;
- (id)managerProtocol;
- (id)pluginType;
- (id)queue;
- (void)sendExtensionFailed;
- (id)sendFailedTimer;
- (id)sessionContext;
- (void)setAppsUpdateEnding:(bool)arg1;
- (void)setAppsUpdateStarted:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setSendFailedTimer:(id)arg1;
- (void)setSessionContext:(id)arg1;
- (void)sleepWithCompletionHandler:(id /* block */)arg1;
- (void)startWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateConfiguration:(id)arg1;
- (id)uuids;
- (void)wakeup;

@end

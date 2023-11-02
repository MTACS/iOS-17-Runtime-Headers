
@interface FPDPushConnection : NSObject <APSConnectionDelegate, FPProviderObserver, NSXPCListenerDelegate, PKFileProviderXPCServer> {
    NSMutableDictionary * _bundleIdentifierForTopic;
    NSMutableDictionary * _clientConnections;
    FPDExtensionManager * _manager;
    NSMutableDictionary * _messageDelegates;
    NSObject<OS_dispatch_queue> * _payloadDeliveryQueue;
    FPProviderMonitor * _providerMonitor;
    NSMutableDictionary * _pushConnectionsByEnvironment;
    NSObject<OS_dispatch_queue> * _pushQueue;
    NSMutableDictionary * _topicsForBundleIdentifier;
    NSXPCListener * _xpcListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_debugTopicsForApplicationIdentifier:(id)arg1;
- (id)_pushConnectionWithEnvironmentName:(id)arg1;
- (void)addClientConnection:(id)arg1 forApplicationBundleIdentifier:(id)arg2;
- (id)clientConnectionsForApplicationBundleIdentifier:(id)arg1;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)fileProviderRegister;
- (void)fileProviderUnregister;
- (id)init;
- (id)initWithExtensionManager:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)performWithConnection:(id)arg1 block:(id /* block */)arg2;
- (void)providerDidEnterBackground:(id)arg1;
- (void)providerDidEnterForeground:(id)arg1;
- (void)removeClientConnection:(id)arg1 forApplicationBundleIdentifier:(id)arg2;
- (void)setMessageDelegate:(id)arg1 forApplicationBundleIdentifier:(id)arg2;
- (void)start;
- (id)topicsForApplicationBundleIdentifier:(id)arg1;
- (void)updateTopicsForApplicationBundleIdentifier:(id)arg1 providerIdentifier:(id)arg2 requestToken:(bool)arg3 environment:(id)arg4;
- (void)updateTopicsForBundleIdentifier:(id)arg1;
- (void)updateTopicsForProvider:(id)arg1;

@end

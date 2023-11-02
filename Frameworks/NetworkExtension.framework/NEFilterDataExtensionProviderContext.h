
@interface NEFilterDataExtensionProviderContext : NEFilterExtensionProviderContext <NEAppInfoCacheLookupDelegate, NEFilterDataExtensionProviderHostProtocol, NEFilterDataExtensionProviderProtocol> {
    NSDictionary * _URLAppendStringMap;
    NSMutableDictionary * _browserFlows;
    NSMutableDictionary * _channelFlows;
    NSObject<OS_xpc_object> * _clientListener;
    bool  _controlProviderExists;
    NSXPCListenerEndpoint * _listenerEndpoint;
    NSMutableArray * _pendingConnections;
    NSDictionary * _remediationMap;
    NSMutableArray * _socketExceptions;
    NSMutableDictionary * _socketFlows;
    NSObject<OS_dispatch_source> * _source;
}

@property (nonatomic, readonly) NSDictionary *URLAppendStringMap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *remediationMap;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)URLAppendStringMap;
- (void)applySettings:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)extensionPoint;
- (void)fetchAppInfoForPID:(int)arg1 UUID:(id)arg2 bundleID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchCurrentRulesForFlow:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchProviderConnectionWithCompletionHandler:(id /* block */)arg1;
- (void)handleClientMessage:(id)arg1 filloutReply:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)handleRulesChanged;
- (void)provideRemediationMap:(id)arg1;
- (void)provideURLAppendStringMap:(id)arg1;
- (void)providerControlSocketFileHandle:(id)arg1;
- (id)remediationMap;
- (void)report:(id)arg1;
- (Class)requiredProviderSuperClass;
- (void)resumeFlow:(id)arg1 withVerdict:(id)arg2;
- (void)sendBrowserContentFilterServerRequest;
- (void)sendSocketContentFilterRequest;
- (void)startFilterWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stopWithReason:(int)arg1;
- (void)updateFlow:(id)arg1 withVerdict:(id)arg2 forDirection:(long long)arg3;

@end


@interface CCSRemoteServiceProvider : NSObject <CCSRemoteServiceServerProtocol, NSXPCListenerDelegate> {
    NSXPCListener * _listener;
    CCSModuleRepository * _moduleRepository;
    NSHashTable * _presentationEndpoints;
    CCSModuleSettingsProvider * _settingsProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)dealloc;
- (void)enumerateEndpointsUsingBlock:(id /* block */)arg1;
- (void)getEnabledStateOfModuleWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)invalidate;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)presentModuleWithIdentifier:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)registerEndpoint:(id)arg1;
- (void)requestAvailableModuleIdentifiersWithCompletionHandler:(id /* block */)arg1;
- (void)requestDisableModuleWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestEnableModuleWithIdentifier:(id)arg1 force:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)resume;
- (void)setVisibility:(bool)arg1 forModuleWithIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;

@end

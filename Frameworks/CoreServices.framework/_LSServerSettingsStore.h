
@interface _LSServerSettingsStore : _LSInProcessSettingsStore <NSXPCListenerDelegate> {
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSXPCListener *listener;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_internalQueue_initializeDatabase;
- (void)_internalQueue_insertIdentifier:(id)arg1 userElection:(unsigned char)arg2;
- (void)_internalQueue_insertIdentifier:(id)arg1 userElection:(unsigned char)arg2 timestamp:(double)arg3;
- (void)_internalQueue_loadDatabase;
- (void)_internalQueue_loadPluginKitDatabase;
- (void)_internalQueue_resetUserElection;
- (id)init;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)postSettingsChangeNotification;
- (bool)resetUserElectionsWithError:(id*)arg1;
- (void)resetUserElectionsWithReply:(id /* block */)arg1;
- (bool)setUserElection:(unsigned char)arg1 forExtensionKey:(id)arg2 error:(id*)arg3;
- (void)setUserElection:(unsigned char)arg1 forExtensionKey:(id)arg2 reply:(id /* block */)arg3;
- (id)settingsStoreConfigurationForProcessWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)userElectionForExtensionKey:(id)arg1 reply:(id /* block */)arg2;

@end

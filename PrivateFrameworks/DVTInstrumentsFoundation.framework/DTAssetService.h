
@interface DTAssetService : DTXService <DTAssetServiceProtocol> {
    NSXPCConnection * _ondemandConnection;
    DTAssetHTTPServer * _server;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSXPCConnection *ondemandConnection;
@property (retain) DTAssetHTTPServer *server;
@property (readonly) Class superclass;

+ (void)registerCapabilities:(id)arg1;
+ (id)translatedManifest:(id)arg1 withAssetServicePort:(unsigned int)arg2;

- (void).cxx_destruct;
- (void)appendAllowedResources:(id)arg1;
- (void)connectToOnDemandDaemon;
- (void)messageReceived:(id)arg1;
- (id)ondemandConnection;
- (id)registerApplicationIdentifier:(id)arg1 manifest:(id)arg2;
- (id)server;
- (void)setOndemandConnection:(id)arg1;
- (void)setServer:(id)arg1;
- (id)startServer;
- (id)startServerForApplicationWithDevicePath:(id)arg1;

@end


@interface DEDXPCConnector : NSObject <NSXPCListenerDelegate> {
    NSMutableDictionary * _appConnections;
    unsigned long long  _connType;
    unsigned long long  _connectionRestartCount;
    NSXPCConnection * _diagnosticextensionsdConnection;
    bool  _isDaemon;
    NSXPCListener * _listener;
    NSObject<OS_os_log> * _log;
    bool  _started;
    <DEDXPCConnectorDelegate> * _xpcConnectorDelegate;
}

@property (retain) NSMutableDictionary *appConnections;
@property (readonly) NSArray *clientConnections;
@property unsigned long long connType;
@property unsigned long long connectionRestartCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSXPCConnection *diagnosticextensionsdConnection;
@property (readonly) <DEDXPCProtocol> *diagnosticextensionsdXPCInterface;
@property (readonly) unsigned long long hash;
@property bool isDaemon;
@property (retain) NSXPCListener *listener;
@property (retain) NSObject<OS_os_log> *log;
@property bool started;
@property (readonly) Class superclass;
@property <DEDXPCConnectorDelegate> *xpcConnectorDelegate;

- (void).cxx_destruct;
- (id)_connectionForPid:(id)arg1;
- (void)_initializeDiagnosticextensionsdConnection;
- (void)_releaseAppConnectionWithPid:(int)arg1;
- (void)_storeAppConnection:(id)arg1;
- (id)_whitelistedXPCInterface;
- (id)appConnections;
- (id)clientConnections;
- (id)clientXPCInterfaceFromInbound:(id)arg1;
- (void)configureConnectionType:(unsigned long long)arg1;
- (void)configureDaemonMode;
- (unsigned long long)connType;
- (unsigned long long)connectionRestartCount;
- (id)connectionWithEndpoint:(id)arg1 forMachService:(id)arg2;
- (id)diagnosticextensionsdConnection;
- (id)diagnosticextensionsdXPCInterface;
- (id)initWithDelegate:(id)arg1;
- (bool)isDaemon;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)log;
- (id)remoteXPCObjectForApplicationPid:(id)arg1;
- (void)setAppConnections:(id)arg1;
- (void)setConnType:(unsigned long long)arg1;
- (void)setConnectionRestartCount:(unsigned long long)arg1;
- (void)setDiagnosticextensionsdConnection:(id)arg1;
- (void)setIsDaemon:(bool)arg1;
- (void)setListener:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setStarted:(bool)arg1;
- (void)setXpcConnectorDelegate:(id)arg1;
- (void)start;
- (void)startForApp;
- (void)startForDaemon;
- (bool)started;
- (bool)validateConnection:(id)arg1;
- (id)xpcConnectorDelegate;

@end

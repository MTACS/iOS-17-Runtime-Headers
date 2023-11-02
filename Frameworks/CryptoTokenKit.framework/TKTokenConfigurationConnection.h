
@interface TKTokenConfigurationConnection : NSObject {
    NSHashTable * _configurationConnections;
    NSXPCConnection * _connection;
    NSXPCListenerEndpoint * _endpoint;
}

- (void).cxx_destruct;
- (id)configurationProtocol;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1;
- (void)registerForConfigurationChange:(id)arg1;
- (void)tokenConfigurationChanged:(id)arg1;

@end

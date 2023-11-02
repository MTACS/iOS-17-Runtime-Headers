
@interface STCommunicationClient : NSObject {
    NSXPCConnection * _connection;
}

@property (readonly) NSXPCConnection *connection;

+ (id)_newConnection;

- (void).cxx_destruct;
- (void)authenticateForCommunicationConfigurationOverrideWithCompletionHandler:(id /* block */)arg1;
- (id)connection;
- (id)currentConfigurationWithError:(id*)arg1;
- (void)dealloc;
- (id)init;

@end

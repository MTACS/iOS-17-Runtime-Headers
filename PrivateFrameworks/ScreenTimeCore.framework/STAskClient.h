
@interface STAskClient : NSObject {
    NSXPCConnection * _connection;
}

@property (readonly) NSXPCConnection *connection;

+ (id)_newConnection;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)init;
- (bool)respondToAskForTimeRequestWithIdentifier:(id)arg1 answer:(long long)arg2 error:(id*)arg3;

@end

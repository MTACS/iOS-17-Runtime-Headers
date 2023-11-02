
@interface RemoteXPCPair : NSObject {
    OS_xpc_remote_connection * _client;
    OS_xpc_remote_connection * _server;
}

@property (nonatomic, retain) OS_xpc_remote_connection *client;
@property (nonatomic, retain) OS_xpc_remote_connection *server;

- (void).cxx_destruct;
- (id)client;
- (id)initWithClient:(id)arg1 server:(id)arg2;
- (id)server;
- (void)setClient:(id)arg1;
- (void)setServer:(id)arg1;

@end

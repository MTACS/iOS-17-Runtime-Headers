
@interface TKSmartCardSessionRequest : NSObject {
    NSXPCConnection * _connection;
    NSDictionary * _parameters;
    id /* block */  _reply;
}

@property NSXPCConnection *connection;
@property (retain) NSDictionary *parameters;
@property (copy) id /* block */ reply;

- (void).cxx_destruct;
- (id)connection;
- (id)parameters;
- (id /* block */)reply;
- (void)setConnection:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setReply:(id /* block */)arg1;

@end


@interface SPRObject : NSObject {
    <NSXPCProxyCreating> * _connection;
    id /* block */  _connector;
}

@property (readonly) <NSXPCProxyCreating> *connection;
@property (readonly) NSString *proxyDescription;

- (void).cxx_destruct;
- (id)asyncProxyWithErrorHandler:(id /* block */)arg1;
- (id)connectAndReturnError:(id*)arg1;
- (id)connection;
- (id)connectionWithErrorHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)initWithConnector:(id /* block */)arg1;
- (void)invalidate;
- (id)mapXPCConnectionError:(id)arg1;
- (void)onDisconnect;
- (id)proxyDescription;
- (id)syncProxyWithErrorHandler:(id /* block */)arg1;

@end

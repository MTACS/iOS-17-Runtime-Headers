
@interface ASDRequestBroker : NSObject {
    NSMutableDictionary * _activeRequests;
    NSXPCConnection * _connection;
}

+ (id)interface;

- (void).cxx_destruct;
- (void)cancelAllRequestsWithErrorHandler:(id /* block */)arg1;
- (id)description;
- (id)init;
- (void)submitRequest:(id)arg1 withReplyHandler:(id /* block */)arg2;

@end

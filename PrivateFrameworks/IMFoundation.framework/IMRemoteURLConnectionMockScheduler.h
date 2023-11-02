
@interface IMRemoteURLConnectionMockScheduler : NSObject {
    NSObject<OS_xpc_object> * _connection;
}

- (void).cxx_destruct;
- (bool)_connect;
- (id)init;
- (void)scheduleMockResponse:(id)arg1;
- (void)scheduleMockResponse:(id)arg1 forURL:(id)arg2;

@end

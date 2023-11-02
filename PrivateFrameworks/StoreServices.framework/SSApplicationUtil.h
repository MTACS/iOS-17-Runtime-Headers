
@interface SSApplicationUtil : NSObject {
    SSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

- (void).cxx_destruct;
- (id)_connection;
- (id)init;
- (void)restartApplication:(id /* block */)arg1;

@end


@interface AFFlowServiceConnection : NSObject {
    NSXPCConnection * _connection;
    unsigned long long  _pendingTransactionCount;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedConnection;

- (void).cxx_destruct;
- (void)_clearConnection;
- (id)_connection;
- (id)_init;
- (void)invokeMethodOnRemoteWithBlock:(id /* block */)arg1 onError:(id /* block */)arg2;

@end

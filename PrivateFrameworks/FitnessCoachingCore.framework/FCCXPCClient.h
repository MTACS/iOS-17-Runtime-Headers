
@interface FCCXPCClient : NSObject {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
}

- (void).cxx_destruct;
- (void)_remoteProxy:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_setupXPCConnection;
- (void)_transportMessage:(unsigned long long)arg1 data:(id)arg2 completion:(id /* block */)arg3;
- (void)_transportRequest:(unsigned long long)arg1 data:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)transportMessage:(unsigned long long)arg1 data:(id)arg2 completion:(id /* block */)arg3;
- (void)transportRequest:(unsigned long long)arg1 data:(id)arg2 completion:(id /* block */)arg3;

@end

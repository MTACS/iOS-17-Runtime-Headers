
@interface NSProxyConnection : NSObject {
    NSObject<OS_tcp_connection> * _connection;
    <NSProxyConnectionDelegate> * _delegate;
    bool  _doCleanupWhenWritesCompleted;
    long long  _pendingWrites;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)initWithHost:(id)arg1 port:(unsigned short)arg2 queue:(id)arg3 configuration:(id)arg4;
- (void)read:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)write:(id)arg1 handler:(id /* block */)arg2;

@end

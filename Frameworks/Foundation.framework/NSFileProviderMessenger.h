
@interface NSFileProviderMessenger : NSObject {
    NSXPCConnection * _conn;
    NSFileProviderMessageInterface * _interface;
    NSLock * _lock;
    Protocol * _protocol;
    bool  _triedConnection;
}

- (void)dealloc;
- (id)initWithInterface:(id)arg1 protocol:(id)arg2;
- (void)invalidate;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end

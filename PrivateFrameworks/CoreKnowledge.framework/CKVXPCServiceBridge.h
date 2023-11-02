
@interface CKVXPCServiceBridge : NSObject {
    NSString * _machServiceName;
    unsigned long long  _options;
    NSObject<OS_dispatch_queue> * _queue;
    id  _remoteObjectProxy;
    NSXPCConnection * _serviceConnection;
    NSXPCInterface * _serviceInterface;
    Protocol * _serviceProtocol;
}

- (void).cxx_destruct;
- (void)_clearXPCServiceConnection;
- (id)_getOrCreateXPCServiceConnection;
- (void)dealloc;
- (id)init;
- (id)initWithServiceProtocol:(id)arg1 machServiceName:(id)arg2;
- (id)service;

@end

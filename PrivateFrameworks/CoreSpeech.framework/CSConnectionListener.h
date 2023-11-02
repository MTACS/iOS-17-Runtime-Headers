
@interface CSConnectionListener : NSObject <CSConnectionServiceDelegate, NSXPCListenerDelegate> {
    NSMutableArray * _clientConnections;
    NSXPCInterface * _exportedInterface;
    NSXPCListener * _listener;
    NSString * _machServiceName;
    id  _proxyObject;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCInterface * _remoteInterface;
}

@property (nonatomic, retain) NSMutableArray *clientConnections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *machServiceName;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)clientConnections;
- (void)dealloc;
- (id)initWithMachService:(id)arg1 withServiceInterface:(id)arg2 withServiceObject:(id)arg3 withDelegateInterface:(id)arg4;
- (id)initWithMachService:(id)arg1 withServiceInterface:(id)arg2 withServiceObject:(id)arg3 withDelegateInterface:(id)arg4 queue:(id)arg5;
- (id)initWithXpcListener:(id)arg1 withMachService:(id)arg2 withServiceInterface:(id)arg3 withServiceObject:(id)arg4 withDelegateInterface:(id)arg5 queue:(id)arg6;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)machServiceName;
- (void)notifyClientsWithBlock:(id /* block */)arg1;
- (id)queue;
- (void)resumeConnection;
- (void)setClientConnections:(id)arg1;
- (void)setMachServiceName:(id)arg1;
- (void)setQueue:(id)arg1;

@end

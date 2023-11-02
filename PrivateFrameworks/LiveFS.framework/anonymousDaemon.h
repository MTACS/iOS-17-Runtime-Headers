
@interface anonymousDaemon : NSObject <NSXPCListenerDelegate> {
    Class  _clientClass;
    NSXPCListenerEndpoint * _endpoint;
    NSXPCInterface * _interface;
    NSXPCListener * _listener;
    NSObject * _proxy;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) Class clientClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) NSXPCInterface *interface;
@property (readonly) NSXPCListener *listener;
@property (readonly) NSObject *proxy;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)clientClass;
- (void)dealloc;
- (id)endpoint;
- (id)initUsingInterface:(id)arg1 clientClass:(Class)arg2 queue:(id)arg3 andProxy:(id)arg4;
- (id)initWithListener:(id)arg1;
- (id)interface;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)proxy;
- (id)queue;

@end

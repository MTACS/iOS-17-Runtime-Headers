
@interface FSListener : NSObject <NSXPCListenerDelegate> {
    Class  _clientClass;
    NSXPCInterface * _interface;
    NSXPCListener * _listener;
    NSObject * _proxy;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) Class clientClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSXPCInterface *interface;
@property (readonly) NSXPCListener *listener;
@property (readonly) NSObject *proxy;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)clientClass;
- (id)initUsingInterface:(id)arg1 clientClass:(Class)arg2 queue:(id)arg3 andProxy:(id)arg4;
- (id)interface;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)proxy;
- (id)queue;

@end


@interface ChronoCore.WidgetRendererServer : NSObject <BSServiceConnectionListenerDelegate> {
    void _clientsSetLock;
    void _clientsSetLock_clients;
    void _listener;
    void _queue;
    void _services;
    void _subscriptions;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;

@end

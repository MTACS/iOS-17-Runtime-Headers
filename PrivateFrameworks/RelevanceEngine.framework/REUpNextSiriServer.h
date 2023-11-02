
@interface REUpNextSiriServer : NSObject <NSXPCListenerDelegate, REUpNextSiriServerInterface> {
    NSMutableSet * _connections;
    NSXPCListener * _listener;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accessObservers:(id /* block */)arg1;
- (void)_accessRemoteClients:(id /* block */)arg1;
- (void)_onqueue_async:(id /* block */)arg1;
- (void)_removeConnection:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)completedRequestWithDomain:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)removeObserver:(id)arg1;

@end

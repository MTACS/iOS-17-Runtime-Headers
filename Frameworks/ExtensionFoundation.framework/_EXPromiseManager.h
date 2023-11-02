
@interface _EXPromiseManager : NSObject <NSXPCListenerDelegate, _EXPromiseManagerXPCProtocol> {
    NSXPCListener * _listener;
    NSMapTable * _promises;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (retain) NSXPCListener *listener;
@property (readonly) NSMapTable *promises;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)endpoint;
- (id)init;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)promises;
- (void)registerPromise:(id)arg1;
- (void)resolveObjectOfClasses:(id)arg1 forIdentifier:(id)arg2 endpoint:(id)arg3 completion:(id /* block */)arg4;
- (id)resolveObjectOfClasses:(id)arg1 forIdentifier:(id)arg2 endpoint:(id)arg3 error:(id*)arg4;
- (void)resolvePromiseWithIdentifier:(id)arg1 reply:(id /* block */)arg2;
- (void)setListener:(id)arg1;
- (void)unregisterPromise:(id)arg1;

@end

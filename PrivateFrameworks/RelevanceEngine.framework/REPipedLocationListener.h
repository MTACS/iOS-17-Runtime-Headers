
@interface REPipedLocationListener : RESingleton <NSXPCListenerDelegate> {
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_init;
- (void)dealloc;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end


@interface Core_Audio_Driver_Registrar : NSObject <Core_Audio_Driver_Registrar_Protocol, NSXPCListenerDelegate> {
    NSMutableSet * _connections;
    void * _registrar;
}

@property (nonatomic, retain) NSMutableSet *connections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) void*registrar;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)connections;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)register_driver:(id)arg1 bundle_url:(id)arg2 bundle_id:(id)arg3 cpu_type:(int)arg4 reply:(id /* block */)arg5;
- (void*)registrar;
- (void)setConnections:(id)arg1;
- (void)setRegistrar:(void*)arg1;

@end

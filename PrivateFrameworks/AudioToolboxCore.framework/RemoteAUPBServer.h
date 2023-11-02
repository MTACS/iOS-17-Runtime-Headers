
@interface RemoteAUPBServer : NSObject {
    <AUPBServing> * proxyInterface;
    struct OpaqueAUPBServer { } * ref;
    /* Warning: unhandled struct encoding: '{vector<NSObject<OS_dispatch_semaphore> *, std::allocator<NSObject<OS_dispatch_semaphore> *>>="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<NSObject<OS_dispatch_semaphore> **, std::allocator<NSObject<OS_dispatch_semaphore> *>>="__value_"^@}}' */ struct vector<NSObject<OS_dispatch_semaphore> *, std::allocator<NSObject<OS_dispatch_semaphore> *>> { 
        __end_ **__begin_; 
    }  replySemas;
    NSXPCConnection * xpcConnection;
}

@property (nonatomic, retain) <AUPBServing> *proxyInterface;
@property (nonatomic) struct OpaqueAUPBServer { }*ref;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addSema:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)proxyInterface;
- (struct OpaqueAUPBServer { }*)ref;
- (void)removeSema:(id)arg1;
- (void)setProxyInterface:(id)arg1;
- (void)setRef:(struct OpaqueAUPBServer { }*)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)signalAllSemaphores;
- (id)xpcConnection;

@end

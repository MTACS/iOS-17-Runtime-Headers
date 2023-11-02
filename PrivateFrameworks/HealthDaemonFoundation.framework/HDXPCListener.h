
@interface HDXPCListener : NSObject <NSXPCListenerDelegate> {
    <HDXPCListenerClientProvider> * _clientProvider;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    <HDXPCListenerDelegate> * _delegate;
    NSMapTable * _exportedObjectsByClient;
    NSString * _label;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSXPCListener * _underlyingListener;
}

@property (readonly, copy) NSArray *allClients;
@property (nonatomic) <HDXPCListenerClientProvider> *clientProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDXPCListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *label;
@property (readonly) Class superclass;

+ (id)serviceListener;

- (void).cxx_destruct;
- (void)_handleConnectionInvalidationForClient:(id)arg1 exportedObject:(id)arg2;
- (void)_handleInterruptionWithClient:(id)arg1 exportedObject:(id)arg2;
- (void)_handleInvalidationWithClient:(id)arg1 exportedObject:(id)arg2;
- (id)allClients;
- (id)clientProvider;
- (void)dealloc;
- (id)delegate;
- (id)endpoint;
- (id)init;
- (id)initWithLabel:(id)arg1;
- (id)initWithMachServiceName:(id)arg1;
- (id)initWithUnderlyingListener:(id)arg1 label:(id)arg2;
- (void)invalidate;
- (id)label;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)resume;
- (void)setClientProvider:(id)arg1;
- (void)setConnectionQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;

@end


@interface HDDaemonConnectionManager : NSObject <HDXPCListenerClientProvider, HDXPCListenerDelegate> {
    HDDaemon * _daemon;
    NSMutableSet * _endpoints;
    NSObject<OS_dispatch_queue> * _listenerQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _processCreationHandler;
    NSMapTable * _processesByAuditToken;
    HDXPCListener * _serviceListener;
}

@property (readonly, copy) NSArray *clientProcesses;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ processCreationHandler;
@property (nonatomic, readonly) HDXPCListener *serviceListener;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)clientForListener:(id)arg1 connection:(id)arg2 error:(id*)arg3;
- (id)clientProcesses;
- (id)createAnonymousListenerWithLabel:(id)arg1;
- (id)createListenerWithMachServiceName:(id)arg1;
- (void)endpointInvalidated:(id)arg1;
- (id)exportObjectForListener:(id)arg1 client:(id)arg2 error:(id*)arg3;
- (id)initWithMachServiceName:(id)arg1 daemon:(id)arg2;
- (void)invalidate;
- (void)invalidateAllServersForProfile:(id)arg1;
- (id /* block */)processCreationHandler;
- (void)resume;
- (id)serviceListener;
- (void)setProcessCreationHandler:(id /* block */)arg1;

@end

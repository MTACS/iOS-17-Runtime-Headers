
@interface COCoordinationServiceClientSet : NSObject {
    NSMutableSet * _clients;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, readonly) NSMutableSet *clients;

- (void).cxx_destruct;
- (void)_withLock:(id /* block */)arg1;
- (void)addServiceClient:(id)arg1;
- (id)clients;
- (id)init;
- (void)removeServiceClient:(id)arg1;
- (id)serviceClientForXPCConnection:(id)arg1;
- (id)serviceClients;

@end

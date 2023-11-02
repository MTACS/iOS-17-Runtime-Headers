
@interface MGServiceClientSet : NSObject {
    NSMapTable * _clients;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, copy) NSMapTable *clients;

- (void).cxx_destruct;
- (void)addClientService:(id)arg1;
- (id)clients;
- (void)enumerateClientsUsingBlock:(id /* block */)arg1;
- (id)init;
- (void)removeClientService:(id)arg1;
- (id)serviceClientForXPCConnection:(id)arg1;
- (void)setClients:(id)arg1;

@end

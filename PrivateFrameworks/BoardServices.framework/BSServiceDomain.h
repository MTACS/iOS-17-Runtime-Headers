
@interface BSServiceDomain : NSObject {
    NSDictionary * _identifierToService;
    NSString * _listenerEndpointDescription;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _lock_activations;
    bool  _lock_deactivating;
    NSMutableArray * _lock_incomingConnections;
    bool  _lock_invalidated;
    BSServiceDomainSpecification * _specification;
    BSXPCServiceConnectionListener * _xpcListener;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (id)init;

@end

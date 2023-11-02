
@interface BSService : NSObject {
    BSServiceDomainSpecification * _domainSpecification;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BSZeroingWeakReference * _lock_globalListener;
    NSMutableDictionary * _lock_instanceToListener;
    bool  _lock_invalidated;
    NSMutableArray * _lock_pendedConnections;
    BSServiceSpecification * _specification;
}

- (void).cxx_destruct;
- (id)debugDescription;

@end

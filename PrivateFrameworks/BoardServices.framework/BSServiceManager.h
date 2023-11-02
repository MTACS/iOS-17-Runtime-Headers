
@interface BSServiceManager : NSObject <RBSServiceDelegate> {
    RBSService * _RBSService;
    BSServicesConfiguration * _bootstrapConfiguration;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _callOutLock;
    NSMutableDictionary * _callOutLock_serviceIdentifierToEndpointsToEnvironments;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _lock_bootstrapExtensions;
    bool  _lock_bootstrapped;
    NSMutableDictionary * _lock_endpointToInheritances;
    NSMutableDictionary * _lock_endpointToOutgoingRootConnections;
    NSMutableDictionary * _lock_identifierToDomain;
    NSMutableDictionary * _lock_inheritanceToEndpoint;
    NSMutableDictionary * _lock_serviceIdentifierToEndpoints;
    NSMutableDictionary * _lock_serviceIdentifierToMonitors;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)debugDescription;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)init;
- (void)service:(id)arg1 didLoseInheritances:(id)arg2;
- (void)service:(id)arg1 didReceiveInheritances:(id)arg2;

@end

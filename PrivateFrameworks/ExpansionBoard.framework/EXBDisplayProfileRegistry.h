
@interface EXBDisplayProfileRegistry : NSObject <BSDescriptionStreamable, EXBDisplayMonitorDelegate, FBSDisplayTransformer> {
    Class  _ConfigBuilderClass;
    EXBDisplayAssertionCoordinator * _assertionCoordinator;
    EXBDisplayAssertionCoordinatorPolicy * _assertionCoordinatorPolicy;
    EXBDisplayMonitor * _displayMonitor;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _lock_rootDisplayDrivers;
    NSMutableSet * _registeredProfiles;
    <BSInvalidatable> * _transformerRegistryToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_evaluateForPhysicalDisplay:(id)arg1 driver:(id)arg2 profile:(id)arg3;
- (void)activate;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)description;
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 didDisconnectIdentity:(id)arg2;
- (void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3;
- (id)displayProfileForIdentity:(id)arg1;
- (void)evaluateProfilesForConnectedDisplays;
- (id)initWithDisplayTransformerRegistry:(id)arg1;
- (id)initWithDisplayTransformerRegistry:(id)arg1 displayMonitor:(id)arg2 assertionCoordinator:(id)arg3 builderClass:(Class)arg4;
- (void)registerDisplayProfile:(id)arg1;
- (id)transformDisplayConfiguration:(id)arg1;

@end

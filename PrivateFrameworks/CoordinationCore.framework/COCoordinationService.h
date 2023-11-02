
@interface COCoordinationService : NSObject <COClusterAliasManagerDelegate, COClusterAliasManagerMeshProvider, COClusterAssertionDelegate, COServiceDelegate> {
    COClusterAliasManager * _aliasManager;
    NSArray * _alwaysAssert;
    NSMapTable * _assertions;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    COHomeKitAdapter * _hkAdapter;
    bool  _isMigrating;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    double  _pingMaximum;
    double  _pingMinimum;
    NSOrderedSet * _services;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _servicesLock;
    unsigned long long  _type;
}

@property (nonatomic, readonly) COClusterAliasManager *aliasManager;
@property (nonatomic, readonly) NSArray *alwaysAssert;
@property (nonatomic, readonly) NSMapTable *assertions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) COHomeKitAdapter *hkAdapter;
@property (nonatomic, readonly) double pingMaximum;
@property (nonatomic, readonly) double pingMinimum;
@property (nonatomic, readonly) NSOrderedSet *services;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

+ (void)setSingleton:(id)arg1;
+ (id)singleton;
+ (void)startWithConstituentType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_completeMigration;
- (void)_continueInitialization;
- (void)_continueMigration;
- (id)_initWithConstituentType:(unsigned long long)arg1;
- (void)_initializeServices;
- (void)_initiateMigrationFrom:(long long)arg1;
- (void)_linkServicesToMeshController:(id)arg1 withClusterIdentifier:(id)arg2 forClusters:(id)arg3;
- (id)_servicesForClusters:(id)arg1;
- (void)_significantHomeChange:(id)arg1;
- (void)_unlinkServicesFromMeshController:(id)arg1 withClusterIdentifier:(id)arg2 forClusters:(id)arg3;
- (void)_withLock:(id /* block */)arg1;
- (void)_withServicesLock:(id /* block */)arg1;
- (id)aliasManager;
- (void)aliasManager:(id)arg1 activatingMesh:(id)arg2 withClusterIdentifier:(id)arg3 forClusters:(id)arg4 completion:(id /* block */)arg5;
- (void)aliasManager:(id)arg1 deactivatingMesh:(id)arg2 withClusterIdentifier:(id)arg3 forClusters:(id)arg4 completion:(id /* block */)arg5;
- (id)aliasManagerRequestsNewMesh:(id)arg1;
- (id)alwaysAssert;
- (id)assertions;
- (void)didInvalidateAssertionForCluster:(id)arg1;
- (id)dispatchQueue;
- (id)hkAdapter;
- (double)pingMaximum;
- (double)pingMinimum;
- (id)services;
- (id)takeAssertionForCluster:(id)arg1;
- (unsigned long long)type;
- (void)waitForClusterBootstrap:(id)arg1 completion:(id /* block */)arg2;

@end

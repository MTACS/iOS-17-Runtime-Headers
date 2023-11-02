
@interface COClusterAliasManager : NSObject <COClusterResolverDelegate> {
    NSDictionary * _associations;
    <COClusterAliasManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateDispatchQueue;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSDictionary * _identifiers;
    NSDictionary * _meshes;
    <COClusterAliasManagerMeshProvider> * _provider;
    NSDictionary * _resolvers;
    NSSet * _resolving;
    NSSet * _starting;
    NSSet * _stopping;
    NSDictionary * _updates;
    NSDictionary * _waiting;
}

@property (nonatomic, retain) NSDictionary *associations;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <COClusterAliasManagerDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateDispatchQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *identifiers;
@property (nonatomic, retain) NSDictionary *meshes;
@property (nonatomic, readonly) <COClusterAliasManagerMeshProvider> *provider;
@property (nonatomic, retain) NSDictionary *resolvers;
@property (nonatomic, retain) NSSet *resolving;
@property (nonatomic, retain) NSSet *starting;
@property (nonatomic, retain) NSSet *stopping;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *updates;
@property (nonatomic, retain) NSDictionary *waiting;

+ (id)aliasManagerWithProvider:(id)arg1 delegate:(id)arg2 delegateDispatchQueue:(id)arg3;

- (void).cxx_destruct;
- (void)_activateMeshWithClusterIdentifier:(id)arg1 forClusters:(id)arg2;
- (void)_addWaitingBlock:(id /* block */)arg1 forCluster:(id)arg2;
- (void)_applyUpdates;
- (bool)_clusterIsBootstrapped:(id)arg1;
- (void)_deactivateMeshWithClusterIdentifier:(id)arg1;
- (void)_delegateNotifyActivatingMesh:(id)arg1 withClusterIdentifier:(id)arg2 forClusters:(id)arg3 completion:(id /* block */)arg4;
- (void)_delegateNotifyDeactivatingMesh:(id)arg1 withClusterIdentifier:(id)arg2 forClusters:(id)arg3 completion:(id /* block */)arg4;
- (id)_initWithProvider:(id)arg1 delegate:(id)arg2 delegateDispatchQueue:(id)arg3;
- (void)_invokeWaitingBlocksForClusters:(id)arg1;
- (id)_labelForClusters:(id)arg1;
- (id)_prepareNewMeshWithClusterIdentifier:(id)arg1 forClusters:(id)arg2;
- (id)_providerRequestMesh;
- (void)_recomputeAssociations;
- (void)_updateClusterIdentifier:(id)arg1 forCluster:(id)arg2;
- (id)associations;
- (id)delegate;
- (id)delegateDispatchQueue;
- (id)description;
- (void)didStopMeshController:(id)arg1;
- (id)dispatchQueue;
- (id)identifiers;
- (id)meshes;
- (id)provider;
- (void)resolver:(id)arg1 clusterIdentifierChanged:(id)arg2;
- (id)resolvers;
- (id)resolving;
- (void)setAssociations:(id)arg1;
- (void)setIdentifiers:(id)arg1;
- (void)setMeshes:(id)arg1;
- (void)setResolvers:(id)arg1;
- (void)setResolving:(id)arg1;
- (void)setStarting:(id)arg1;
- (void)setStopping:(id)arg1;
- (void)setUpdates:(id)arg1;
- (void)setWaiting:(id)arg1;
- (void)startTrackingCluster:(id)arg1;
- (id)starting;
- (void)stopTrackingCluster:(id)arg1;
- (id)stopping;
- (id)updates;
- (void)waitForBootstrapOfCluster:(id)arg1 withBlock:(id /* block */)arg2;
- (id)waiting;

@end

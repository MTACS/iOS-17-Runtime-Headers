
@interface MCMCommandOperationDelete : MCMCommand <MCMParametersOperationDelete, MCMParametersWithConcreteContainersArray> {
    NSArray * _concreteContainerIdentities;
    NSArray * _containerIdentities;
    NSMutableSet * _manifests;
    MCMXPCMessageOperationDelete * _message;
    bool  _removeAllCodeSignInfo;
    bool  _waitForDiskSpaceReclaim;
}

@property (nonatomic, readonly) NSArray *concreteContainerIdentities;
@property (nonatomic, readonly) NSArray *containerIdentities;
@property (nonatomic, readonly) NSMutableSet *manifests;
@property (nonatomic, readonly) MCMXPCMessageOperationDelete *message;
@property (nonatomic, readonly) bool removeAllCodeSignInfo;
@property (nonatomic, readonly) bool waitForDiskSpaceReclaim;

+ (unsigned long long)command;
+ (id)commandForOperationDeleteWithContainerIdentities:(id)arg1 removeAllCodeSignInfo:(bool)arg2 context:(id)arg3 resultPromise:(id)arg4;
+ (bool)deleteContainerRootURL:(id)arg1 userIdentity:(id)arg2 containerClass:(unsigned long long)arg3 containerPathIdentifier:(id)arg4 preferDirectDelete:(bool)arg5 error:(id*)arg6;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (id)_codeSignIdentifiersToRemoveFor:(id)arg1 amendingCumulativeIdentifiers:(id)arg2;
- (id)_containerIdentities;
- (id)_containersToDeleteRecursivelyStartingWithContainerIdentities:(id)arg1 error:(id*)arg2;
- (id)_deleteItems:(id)arg1 directDelete:(bool)arg2 error:(id*)arg3;
- (id)_deleteManifest:(id)arg1;
- (void)_deleteManifestForContainerIdentity:(id)arg1;
- (id)_getManifestWithContainerIdentity:(id)arg1;
- (id)_getOrCreateManifestWithContainerIdentity:(id)arg1;
- (id)_groupContainersToDeleteWhenReconcilingRemovalOfIdentifiers:(id)arg1;
- (id)_initWithContainerIdentities:(id)arg1 manifests:(id)arg2 waitForDiskSpaceReclaim:(bool)arg3 removeAllCodeSignInfo:(bool)arg4 context:(id)arg5 resultPromise:(id)arg6;
- (void)_relayContainerIdentities:(id)arg1 andAmendResult:(id)arg2;
- (id)_replyFromRelayToDaemonWithContainerIdentities:(id)arg1;
- (void)_routeContainersToHandle:(id*)arg1 toRelay:(id*)arg2;
- (bool)_writeDeleteManifestsForItems:(id)arg1 error:(id*)arg2;
- (id)concreteContainerIdentities;
- (id)containerIdentities;
- (void)execute;
- (id)initWithContainerIdentities:(id)arg1 waitForDiskSpaceReclaim:(bool)arg2 removeAllCodeSignInfo:(bool)arg3 context:(id)arg4 resultPromise:(id)arg5;
- (id)initWithManifests:(id)arg1 waitForDiskSpaceReclaim:(bool)arg2 removeAllCodeSignInfo:(bool)arg3 context:(id)arg4 resultPromise:(id)arg5;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (id)manifests;
- (id)message;
- (bool)preflightClientAllowed;
- (bool)removeAllCodeSignInfo;
- (bool)waitForDiskSpaceReclaim;

@end

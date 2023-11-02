
@interface PBFPosterExtensionStoreCoordinator : NSObject <BSInvalidatable, PBFDataComponentRefreshStateProviding, PBFPosterSnapshotCoordinatorProviding> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessLock;
    NSMutableDictionary * _accessLock_posterConfigurationStoreCoordinatorsForUUID;
    NSMutableDictionary * _accessLock_posterDescriptorStoreCoordinatorsForUUID;
    NSDictionary * _accessLock_providerInfo;
    NSMutableDictionary * _accessLock_stagedPosterConfigurationStoreCoordinatorsForUUID;
    NSMutableDictionary * _accessLock_staticPosterDescriptorStoreCoordinatorsForUUID;
    NSDictionary * _accessLock_transientInfo;
    NSURL * _configurationContainerURL;
    NSURL * _containerURL;
    NSURL * _descriptorsContainerURL;
    NSString * _extensionIdentifier;
    NSFileManager * _fileManager;
    BSAtomicFlag * _invalidationFlag;
    NSURL * _providerInfoURL;
    bool  _readonly;
    NSURL * _staticDescriptorsContainerURL;
    NSURL * _transientInternalInfoURL;
}

@property (nonatomic, readonly, copy) NSURL *containerURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *extensionIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDate *lastRefreshDescriptorDate;
@property (nonatomic, readonly, copy) NSString *lastRefreshDescriptorReason;
@property (nonatomic, readonly, copy) BSBuildVersion *lastRefreshStashedBuildVersion;
@property (nonatomic, readonly) bool readonly;
@property (readonly) Class superclass;

+ (id)providerInfoURLForContainerURL:(id)arg1;

- (void).cxx_destruct;
- (void)abortStaged;
- (bool)commitStagedWithError:(out id*)arg1;
- (id)configurationStoreCoordinatorForPosterUUID:(id)arg1;
- (id)configurationStoreCoordinatorsWithError:(id*)arg1;
- (id)containerURL;
- (id)createConfigurationStoreCoordinatorForPosterUUID:(id)arg1 descriptorIdentifier:(id)arg2 role:(id)arg3 error:(id*)arg4;
- (id)createDynamicDescriptorStoreCoordinatorForIdentifier:(id)arg1 role:(id)arg2 error:(id*)arg3;
- (id)createStaticDescriptorStoreCoordinatorForIdentifier:(id)arg1 role:(id)arg2 error:(out id*)arg3;
- (id)deleteEnvironment;
- (void)deleteProviderInfo;
- (id)description;
- (id)determineRefreshStateWithContext:(id)arg1;
- (id)dynamicDescriptorStoreCoordinatorForIdentifier:(id)arg1;
- (id)dynamicDescriptorStoreCoordinatorForIdentifier:(id)arg1 role:(id)arg2 createIfNil:(bool)arg3 error:(id*)arg4;
- (id)dynamicDescriptorStoreCoordinatorForPosterUUID:(id)arg1;
- (id)dynamicDescriptorStoreCoordinatorsWithError:(id*)arg1;
- (id)dynamicPosterDescriptorLatestVersionPaths;
- (id)ensureFileSystemIntegrity;
- (void)enumerateConfigurationStoreCoordinators:(id /* block */)arg1;
- (void)enumerateDescriptorStoreCoordinators:(id /* block */)arg1;
- (void)enumerateDynamicDescriptorStoreCoordinators:(id /* block */)arg1;
- (void)enumerateStaticDescriptorStoreCoordinators:(id /* block */)arg1;
- (id)extensionIdentifier;
- (id)init;
- (id)initWithContainerURL:(id)arg1 extensionIdentifier:(id)arg2;
- (id)initWithContainerURL:(id)arg1 extensionIdentifier:(id)arg2 readonly:(bool)arg3;
- (void)invalidate;
- (id)lastRefreshDescriptorDate;
- (id)lastRefreshDescriptorReason;
- (id)lastRefreshStashedBuildVersion;
- (id)latestPosterConfigurationForUUID:(id)arg1;
- (id)modelStoreCoordinatorForPosterUUID:(id)arg1;
- (void)pbf_enumerateSnapshotCoordinators:(id /* block */)arg1;
- (id)pbf_posterSnapshotCoordinatorForIdentity:(id)arg1;
- (id)posterStaticDescriptorLatestVersionPaths;
- (id)providerInfoObjectForKey:(id)arg1;
- (bool)providerInfoSetObject:(id)arg1 forKey:(id)arg2;
- (bool)providerInfoSetObject:(id)arg1 forKey:(id)arg2 error:(out id*)arg3;
- (void)purgeSnapshotCache;
- (bool)readonly;
- (void)reapEverythingExceptLatestVersion;
- (void)reapSnapshotsMatchingURLs:(id)arg1;
- (void)removeLastRefreshDescriptorDate;
- (id)setupEnvironmentIfNecessary;
- (id)stageNewConfigurationStoreCoordinatorForPosterUUID:(id)arg1 descriptorIdentifier:(id)arg2 role:(id)arg3 error:(out id*)arg4;
- (id)staticDescriptorStoreCoordinatorForIdentifier:(id)arg1;
- (id)staticDescriptorStoreCoordinatorForPosterUUID:(id)arg1;
- (id)staticDescriptorStoreCoordinatorsWithError:(out id*)arg1;
- (void)teardownAllDynamicDescriptors;
- (void)teardownAllStaticDescriptorStoreCoordinators;
- (bool)teardownConfigurationStoreCoordinatorForPosterUUID:(id)arg1 error:(id*)arg2;
- (bool)teardownConfigurationStoreCoordinatorForPosterUUID:(id)arg1 version:(unsigned long long)arg2 error:(out id*)arg3;
- (bool)teardownDynamicDescriptorStoreCoordinatorForPosterUUID:(id)arg1 error:(id*)arg2;
- (void)updateLastRefreshDescriptorDateWithReason:(id)arg1;

@end

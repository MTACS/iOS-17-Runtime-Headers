
@interface MCMLibraryRepairForUser : MCMLibraryRepair {
    MCMManagedUserPathRegistry * _userRegistry;
}

@property (nonatomic, readonly) MCMManagedUserPathRegistry *userRegistry;

- (void).cxx_destruct;
- (bool)_canRepairLocally;
- (id)_managedPathFromContainerClassPath:(id)arg1 registry:(id)arg2;
- (id)_managedPathsForGenericRepair;
- (id)_setByAddingContainerClassPathsToSet:(id)arg1 registry:(id)arg2;
- (bool)fixAndRetryIfPermissionsErrorWithURL:(id)arg1 containerPath:(id)arg2 containerIdentifier:(id)arg3 error:(id*)arg4 duringBlock:(id /* block */)arg5;
- (bool)fixAndRetryIfPermissionsErrorWithURL:(id)arg1 containerRootURL:(id)arg2 error:(id*)arg3 duringBlock:(id /* block */)arg4;
- (id)initWithManagedUserPathRegistry:(id)arg1 fileManager:(id)arg2;
- (bool)performRepairForContainerPath:(id)arg1 containerIdentifier:(id)arg2 error:(id*)arg3;
- (id)userRegistry;

@end

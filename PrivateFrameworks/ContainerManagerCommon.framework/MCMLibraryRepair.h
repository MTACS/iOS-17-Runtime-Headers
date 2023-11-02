
@interface MCMLibraryRepair : NSObject {
    <MCMFileManager> * _fileManager;
    bool  _pathsCreated;
    MCMManagedPathRegistry * _registry;
}

@property (nonatomic, readonly) <MCMFileManager> *fileManager;
@property (nonatomic) bool pathsCreated;
@property (nonatomic, readonly) MCMManagedPathRegistry *registry;

- (void).cxx_destruct;
- (bool)_canRepairLocally;
- (id)_managedPathsForGenericRepair;
- (bool)createPathsIfNecessaryWithError:(id*)arg1;
- (id)fileManager;
- (bool)fixAndRetryIfPermissionsErrorWithURL:(id)arg1 error:(id*)arg2 duringBlock:(id /* block */)arg3;
- (bool)fixPermissionsWithManagedPath:(id)arg1 uid:(unsigned int)arg2 gid:(unsigned int)arg3 error:(id*)arg4;
- (id)initWithManagedPathRegistry:(id)arg1 fileManager:(id)arg2;
- (bool)managedPathsHaveChanged;
- (bool)pathsCreated;
- (bool)performGenericRepairWithError:(id*)arg1;
- (id)registry;
- (void)setPathsCreated:(bool)arg1;

@end

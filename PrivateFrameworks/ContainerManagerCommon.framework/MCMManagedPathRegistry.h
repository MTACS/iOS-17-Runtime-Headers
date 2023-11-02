
@interface MCMManagedPathRegistry : NSObject {
    MCMManagedPath * _caches;
    MCMManagedPath * _containermanagerCaches;
    MCMManagedPath * _containermanagerCachesIntermediate;
    MCMManagedPath * _containermanagerDeathrow;
    MCMManagedPath * _containermanagerDeleteOperations;
    MCMManagedPath * _containermanagerLibrary;
    MCMManagedPath * _containermanagerLibraryIntermediate;
    MCMManagedPath * _containermanagerLogs;
    MCMManagedPath * _containermanagerPendingUpdates;
    MCMManagedPath * _containermanagerReplaceOperations;
    MCMPOSIXUser * _daemonUser;
    MCMManagedPath * _home;
    MCMManagedPath * _library;
    MCMManagedPath * _logs;
    NSSet * _paths;
    bool  _privileged;
}

@property (nonatomic, readonly) MCMManagedPath *caches;
@property (nonatomic, readonly) MCMManagedPath *containermanagerCaches;
@property (nonatomic, readonly) MCMManagedPath *containermanagerCachesIntermediate;
@property (nonatomic, readonly) MCMManagedPath *containermanagerDeathrow;
@property (nonatomic, readonly) MCMManagedPath *containermanagerDeleteOperations;
@property (nonatomic, readonly) MCMManagedPath *containermanagerLibrary;
@property (nonatomic, readonly) MCMManagedPath *containermanagerLibraryIntermediate;
@property (nonatomic, readonly) MCMManagedPath *containermanagerLogs;
@property (nonatomic, readonly) MCMManagedPath *containermanagerPendingUpdates;
@property (nonatomic, readonly) MCMManagedPath *containermanagerReplaceOperations;
@property (nonatomic, readonly) MCMPOSIXUser *daemonUser;
@property (nonatomic, readonly) MCMManagedPath *home;
@property (nonatomic, readonly) MCMManagedPath *library;
@property (nonatomic, readonly) MCMManagedPath *logs;
@property (nonatomic, readonly) NSSet *paths;
@property (nonatomic, readonly) bool privileged;

- (void).cxx_destruct;
- (void)_addPaths:(id)arg1;
- (void)_initPathPropertiesWithDaemonUser:(id)arg1;
- (id)caches;
- (id)containermanagerCaches;
- (id)containermanagerCachesIntermediate;
- (id)containermanagerDeathrow;
- (id)containermanagerDeleteOperations;
- (id)containermanagerLibrary;
- (id)containermanagerLibraryIntermediate;
- (id)containermanagerLogs;
- (id)containermanagerPendingUpdates;
- (id)containermanagerReplaceOperations;
- (id)daemonUser;
- (id)home;
- (id)initWithDaemonUser:(id)arg1 privileged:(bool)arg2;
- (id)library;
- (id)logs;
- (id)managedPathForURL:(id)arg1;
- (id)orderedPathsFromPaths:(id)arg1;
- (id)paths;
- (bool)privileged;

@end


@interface MCMClientConnection : NSObject {
    <MCMCommandContext> * _context;
}

@property (nonatomic, readonly) <MCMCommandContext> *context;

+ (id)privilegedClientConnectionWithUserIdentity:(id)arg1;
+ (id)privilegedClientConnectionWithUserIdentity:(id)arg1 kernel:(bool)arg2;
+ (id)sharedClientConnection;

- (void).cxx_destruct;
- (void)_cleanupOprhanedCodeSigningMappingData;
- (void)_cleanupOrphanedDataForDirectories:(id)arg1 containerClass:(unsigned long long)arg2 forUserIdentity:(id)arg3;
- (id)_commandForResumedDeleteOperationsWithResultPromise:(id)arg1;
- (bool)_containerURL:(id)arg1 isValidForContainerClass:(unsigned long long)arg2;
- (void)_regenerateAllSystemContainerPaths;
- (void)_resumeDeleteOperations;
- (id)clientBundleIdentifier;
- (void)containerManagerCleanupWithCompletion:(id /* block */)arg1;
- (void)containerManagerSetup;
- (id)context;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)rebootContainerManagerCleanupWithCompletion:(id /* block */)arg1;
- (void)rebootContainerManagerSetup;

@end

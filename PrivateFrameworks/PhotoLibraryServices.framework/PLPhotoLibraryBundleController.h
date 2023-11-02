
@interface PLPhotoLibraryBundleController : NSObject {
    PLBackgroundJobService * _backgroundJobService;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _bundleCreationPauseLock;
    NSDate * _bundleCreationPausedUntilDate;
    long long  _bundleType;
    NSMutableDictionary * _bundlesByPath;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _bundlesByPathLock;
    PLCacheDeleteRegistration * _cacheDeleteRegistration;
    Class  _libraryServicesDelegateClass;
    PLSQLStatementFileRecorder * _statementRecorder;
}

@property (retain) PLBackgroundJobService *backgroundJobService;
@property (retain) PLCacheDeleteRegistration *cacheDeleteRegistration;

+ (id)_realPathForLibraryURL:(id)arg1;
+ (void)resetSharedBundleController;
+ (id)sharedAssetsdClientForPhotoLibraryURL:(id)arg1;
+ (id)sharedBundleController;

- (void).cxx_destruct;
- (id)_lookupOrCreateBundleForLibraryURL:(id)arg1 replaceExisting:(bool)arg2;
- (void)_unregisterBundle:(id)arg1 pauseUntilDate:(id)arg2;
- (id)backgroundJobService;
- (bool)bindAssetsdService:(id)arg1 toBundle:(id)arg2 error:(id*)arg3;
- (id)bundleForLibraryURL:(id)arg1;
- (id)cacheDeleteRegistration;
- (void)handleUnknownMergeEvent;
- (id)init;
- (id)initWithBundleType:(long long)arg1 libraryServicesManagerDelegateClass:(Class)arg2;
- (id)libraryBundlePaths;
- (id)libraryBundles;
- (id)libraryServicesStatusDescription;
- (id)lookupOrCreateBundleForLibraryURL:(id)arg1;
- (id)newPhotoLibraryBundleWithLibraryURL:(id)arg1;
- (id)openBundleAtLibraryURL:(id)arg1;
- (id)replaceBundleForRebuildAtLibraryURL:(id)arg1;
- (void)setBackgroundJobService:(id)arg1;
- (void)setCacheDeleteRegistration:(id)arg1;
- (void)shutdownAllBundlesWithReason:(id)arg1;
- (void)shutdownBundle:(id)arg1 reason:(id)arg2;

@end
